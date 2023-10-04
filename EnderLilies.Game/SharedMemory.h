#pragma once
class SharedMemory
{
	LPCWSTR name;
	HANDLE mutex;

	bool Lock();
	void Unlock();
	int _Write(std::string message);
	int _Read(std::string& message);

public:
	SharedMemory(const LPCWSTR name);
	virtual ~SharedMemory();
	int Write(const std::string message);
	int Read(std::string &message);

};
