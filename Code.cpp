//Main

#include<Windows.h>

#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" ) // ������ڵ�ַ

int main() {
	PostMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, 2);
	system("Rundll32.exe user32.dll,LockWorkStation");
	return 0;
} 