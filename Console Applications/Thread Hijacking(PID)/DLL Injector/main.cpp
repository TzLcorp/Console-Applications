#include <iostream>
#include <windows.h>

const char* dllName = "DLLinject.dll";

int main() {

	HANDLE hEXE, hThread;

	DWORD pid;
	PVOID address;
	SIZE_T nbytesWritten;

	system("color a");
	std::cout << "\t\t\t\t DLL 1NJ3CT10N\n" << std::endl;
	std::cout << "Please enter the Process ID(PID): ";
	std::cin >> pid;

	hEXE = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);

	if (hEXE == NULL)
	{
		std::cout << GetLastError() << std::endl;
		return -1;
	}

	address = VirtualAllocEx(hEXE, NULL, strlen(dllName) + 1, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);

	if (address == NULL)
	{
		std::cout << GetLastError() << std::endl;
		return -1;
	}

	if (!WriteProcessMemory(hEXE, address, dllName, strlen(dllName) + 1, &nbytesWritten))
	{
		std::cout << GetLastError() << std::endl;
		return -1;
	}
	
	hThread = CreateRemoteThread(hEXE, NULL, 0, (LPTHREAD_START_ROUTINE)LoadLibraryA, address, 0, NULL);

	if (hThread == NULL)
	{
		std::cout << GetLastError() << std::endl;
		return -1;
	}

}