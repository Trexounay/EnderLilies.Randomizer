#include "pch.h"
#include "SharedMemory.h"
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <tchar.h>
#include <shared_mutex>

DWORD SharedMemory::Lock()
{
	return WaitForSingleObject(mutex, 0);// == WAIT_OBJECT_0;
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
	err = OpenFile();
	if (hMapFile != NULL)
	{
		LPBYTE pBuf = (LPBYTE)MapViewOfFile(hMapFile,   // handle to map object
			FILE_MAP_WRITE,                          // read/write permission
			0,
			0,
			0);

		if (pBuf == NULL)
		{
			err = GetLastError();
			_tprintf(TEXT("W Could not map view of file (%d).\n"), err);
			CloseHandle(hMapFile);
			hMapFile = NULL;
		}
		else
		{
			std::cout << "W Shared memory done " << std::endl;
			CopyMemory((PVOID)pBuf, &header, sizeof(DWORD));
			CopyMemory((PBYTE)pBuf + sizeof(DWORD), message.c_str(), size);
			pBuf[sizeof(DWORD) + size] = '\0';
			UnmapViewOfFile(pBuf);
		}
	}
	return err;
}

DWORD SharedMemory::OpenFile()
{
	DWORD err = 0;
	if (hMapFile == NULL)
	{
		hMapFile = CreateFileMapping(
			INVALID_HANDLE_VALUE,    // use paging file
			NULL,                    // default security
			PAGE_READWRITE,          // read/write access
			0,                       // maximum object size (high-order DWORD)
			this->mappingSize,       // maximum object size (low-order DWORD)
			name);                   // name of mapping object

		if (hMapFile == NULL)
		{
			_tprintf(TEXT("W Could not open file (%d).\n"), err);
			return GetLastError();
		}
	}
	return 0;
}

int SharedMemory::_Read(std::string& outMessage)
{
	DWORD err = 0;
	err = OpenFile();
	if (hMapFile != NULL)
	{
		LPBYTE pBuf = (LPBYTE)MapViewOfFile(hMapFile,  // handle to map object
			FILE_MAP_READ | FILE_MAP_WRITE,          // read/write permission
			0,                                       // offset high
			0,                                       // offset low
			0);                                      // size

		if (pBuf == NULL)
		{
			err = GetLastError();
			_tprintf(TEXT("R Could not map view of file (%d).\n"), err);
			CloseHandle(hMapFile);
			hMapFile = NULL;
		}
		else
		{
			SetHeader(*reinterpret_cast<DWORD*>(pBuf));
			outMessage = std::string((char*)(pBuf + sizeof(DWORD)));
			CopyMemory((PVOID)pBuf, &header, sizeof(DWORD));
			UnmapViewOfFile(pBuf);
		}
	}
	return err;
}

SharedMemory::SharedMemory(const LPCWSTR name, DWORD size)
{
	this->name = name;
	this->mappingSize = size;

	std::wstring str(name);
	str += L"_mtx";
	mutex = CreateMutex(
		NULL,              // default security attributes
		FALSE,             // initially not owned
		str.c_str());      // unnamed mutex
	hMapFile = NULL;
	OpenFile();
}

SharedMemory::~SharedMemory()
{
	CloseHandle(mutex);
	CloseHandle(hMapFile);
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

int SharedMemory::Read(std::string& outMessage)
{
	int result = 1;
	if (!Lock())
	{
		result = _Read(outMessage);
		Unlock();
	}
	return result;
}
