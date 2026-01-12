#pragma once
class SharedMemory
{
	LPCWSTR name;
	HANDLE mutex;
	HANDLE hMapFile = NULL;

	DWORD header = 0;
	DWORD mappingSize = 16384;

	DWORD Lock();
	void Unlock();
	int _Write(std::string message);
	int _Read(std::string& outMessage);
	DWORD OpenFile();

public:
	SharedMemory(const LPCWSTR name, DWORD size = 16384);
	virtual ~SharedMemory();
	int Write(const std::string message);
	int Read(std::string& outMessage);

	void Clear() { this->header = 0; }
	void SetHeader(DWORD value) { this->header = max(this->header, value); }
	DWORD GetHeader() { return this->header; }


	std::vector<std::string> content;
};
