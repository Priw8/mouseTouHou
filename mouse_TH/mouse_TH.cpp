// mouse_TH.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include "gm.h"
#pragma GCC optimize(2)
using namespace std;
WCHAR OUT_TEXT[512];
extern int NORMAL_MOUSE_SPEED;
extern int SLOW_MOUSE_SPEED;

void setMouseSpeed() {
	int k;
	if (GetAsyncKeyState(VK_LSHIFT)) {
		k = SystemParametersInfo(SPI_SETMOUSESPEED, 0, (void*)SLOW_MOUSE_SPEED, SPIF_SENDCHANGE);
	}
	else {
		k = SystemParametersInfo(SPI_SETMOUSESPEED, 0, (void*)NORMAL_MOUSE_SPEED, SPIF_SENDCHANGE);
	}
}

int main() {
	init();

	if (NORMAL_MOUSE_SPEED == -1) {
		MessageBox(NULL, OUT_TEXT, L"Failed to get mouse speed", MB_OK);
		return 0;
	}

	Game* nwGame = GetGame();
	if (nwGame == NULL)
		exit(0);

	if (nwGame->wnd != NULL) {
		wsprintf(OUT_TEXT,
			L"Process PID: %d\n"
			L"Game ID: %d\n"
			L"Default mouse speed: %d\n"
			L"Closing this program while holding SHIFT may result in your mouse speed setting being overwritten. "
			L"If that happens, you can set it back to the value you want in the control panel.", 
		nwGame->pid, nwGame->data->num, NORMAL_MOUSE_SPEED);
		
		MessageBox(NULL, OUT_TEXT, L"Load successful", MB_OK);
		ios::sync_with_stdio(0);

		while (1){
			setMouseSpeed();
			switch (nwGame->MouseControl()) {
			case PAUSE_FLAG:
				system("cls");
				cout << "Game paused";
				break;
			case NOT_IN_GAME_FLAG:
				system("cls");
				cout << "Failed to get player coordinates, the game is most likely in the main menu.\n";
				Sleep(16);
				break;
			}
		}
	}
}
