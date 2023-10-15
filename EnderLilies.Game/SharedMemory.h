#pragma once
class SharedMemory
{
	LPCWSTR name;
	HANDLE mutex;

	DWORD header = 0;

	bool Lock();
	void Unlock();
	int _Write(std::string message);
	int _Read(LPSTR& buffer);

public:
	SharedMemory(const LPCWSTR name);
	virtual ~SharedMemory();
	int Write(const std::string message);
	int Read(LPSTR& buffer);

	void Clear() { this->header = 0; }
	void SetHeader(DWORD value) { this->header = max(this->header, value); }
	DWORD GetHeader() { return this->header; }


	std::vector<std::string> content;
};
