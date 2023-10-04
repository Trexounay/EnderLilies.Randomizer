#include "pch.h"
#include "SharedMemory.h"
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <tchar.h>
#include <shared_mutex>

bool SharedMemory::Lock()
{
    return WaitForSingleObject(mutex, 0);
}

void SharedMemory::Unlock()
{
    ReleaseMutex(mutex);
}

int SharedMemory::_Write(const std::string message)
{
    DWORD err = 0;
    std::cout << "LOCK W" << std::endl;
    DWORD size = message.length();
    HANDLE hMapFile = CreateFileMapping(
        INVALID_HANDLE_VALUE,    // use paging file
        NULL,                    // default security
        PAGE_READWRITE,          // read/write access
        0,                       // maximum object size (high-order DWORD)
        size,                    // maximum object size (low-order DWORD)
        name);                   // name of mapping object

    if (hMapFile == NULL)
    {
        DWORD err = GetLastError();
        _tprintf(TEXT("W Could not create file mapping object (%d).\n"), err);
    }
    else
    {
        LPCTSTR pBuf = (LPTSTR)MapViewOfFile(hMapFile,   // handle to map object
            FILE_MAP_ALL_ACCESS,                          // read/write permission
            0,
            0,
            size);

        if (pBuf == NULL)
        {
            DWORD err = GetLastError();
            _tprintf(TEXT("W Could not map view of file (%d).\n"), err);
            CloseHandle(hMapFile);
        }
        else
        {
            std::cout << "W Shared memory done " << std::endl;
            CopyMemory((PVOID)pBuf, message.c_str(), (size * sizeof(CHAR)));
            UnmapViewOfFile(pBuf);
        }
    }
    return err;
}

int SharedMemory::_Read(std::string& message)
{
    //std::cout << "LOCK R" << std::endl;
    DWORD err = 0;
    HANDLE hMapFile = OpenFileMappingW(
        FILE_MAP_READ,                      // read/write access
        FALSE,                              // inherit handle
        this->name);                        // name of mapping object

    if (hMapFile == NULL)
    {
        err = GetLastError();
        _tprintf(TEXT("R Could not create file mapping object (%d).\n"), err);
    }
    else
    {
        LPSTR pBuf = (LPSTR)MapViewOfFile(hMapFile,  // handle to map object
            FILE_MAP_READ,                              // read/write permission
            0,
            0,
            0);
        if (pBuf == NULL)
        {
            err = GetLastError();
            _tprintf(TEXT("R Could not map view of file (%d).\n"), err);
            CloseHandle(hMapFile);
        }
        else
        {
            message.assign(pBuf);
        }
    }
    return err;
}

SharedMemory::SharedMemory(const LPCWSTR name)
{
    this->name = name;

    std::wstring str(name);
    str += L"_mtx";
    mutex = CreateMutex(
        NULL,              // default security attributes
        FALSE,             // initially not owned
        str.c_str());             // unnamed mutex
}

SharedMemory::~SharedMemory()
{
    CloseHandle(mutex);
    CloseHandle(mutex);
}

int SharedMemory::Write(const std::string message)
{
    int result = 1;
    if (!Lock())
    {
        result = _Write(message);
        Unlock();
    }
    return result;
}

int SharedMemory::Read(std::string& message)
{
    int result = 1;
    if (!Lock())
    {
        result = _Read(message);
        Unlock();
    }
    return result;
}
