#pragma once
#include "pch.h"
#include "gm.h"
#include "Proc.h"

int NORMAL_MOUSE_SPEED;
int SLOW_MOUSE_SPEED;

enum GAME_IDS {
    LE01,
    LE02,

    TH06,
    TH07,
    TH08,
    TH09,
    TH95,
    TH10,
    TH11,
    TH12,
    TH125,
    TH128,
    TH13,
    TH14,
    TH143,
    TH15,
    TH16,
    TH165,
    TH17
};

static GAMEDATA games[] = {
    // TODO: pause detection pointers
    {
        // unique ID
        LE01, 

        // location of player structure pointer in virtual memory (or in some cases an absolute ptr to player struct), offset of player coordinates from the beginning of player structure,
        // and a pointer to a variable in virtual memory that says whether the game is paused or not
        0x00AE693C, 0x0, -1, 

        // min/max player positions
        0.0f, 0.0f, 384.0f, 448.0f,
       
        // distance of the STG frame from window top left corner, STG frame width and height
        32.0f, 16.0f, 384.0f, 448.0f, 

        // expected window width and height
        650.0f, 512.0f, 

        // executable name
        L"Le01.exe"
    },
    {
        LE02,
        0x00ADD1A4, 0x0, -1,
        0.0f, 0.0f, 384.0f, 448.0f,
        32.0f, 16.0f, 384.0f, 448.0f,
        650.0f, 512.0f,
        L"Le02.exe"
    },
    {
        TH06,
        0x002CAA68, 0x0, -1,
        8.0f, 16.0f, 376.0f, 432.0f,
        32.0f, 16.0f, 384.0f, 448.0f,
        646.0f, 508.0f,
        L"東方紅魔郷.exe"
    },
    {
        TH06,
        0x002CAA68, 0x0, -1,
        8.0f, 16.0f, 376.0f, 432.0f,
        32.0f, 16.0f, 384.0f, 448.0f,
        646.0f, 508.0f,
        L"th06.exe"
    },
    {
        TH07,
        0x000BE408, 0x0, -1,
        8.0f, 16.0f, 376.0f, 432.0f,
        32.0f, 16.0f, 384.0f, 448.0f,
        646.0f, 508.0f,
        L"th07.exe"
    },
    {
        TH08,
        0x013D61AC, 0x0, 0x124D0A0,
        8.0f, 16.0f, 376.0f, 432.0f,
        32.0f, 16.0f, 384.0f, 448.0f,
        646.0f, 508.0f,
        L"th08.exe"
    },
    {
        TH09,
        0x000A7D94, 0x1B88, -1,
        0.0f, 16.0f, 272.0f, 432.0f,
        32.0f, 16.0f, 384.0f, 448.0f,
        646.0f, 508.0f,
        L"th09.exe"
    },
    {
        TH95,
        0x000C4E70, 0x1E30, -1,
        8.0f, 16.0f, 376.0f, 432.0f,
        128.0f, 16.0f, 384.0f, 448.0f,
        646.0f, 508.0f,
        L"th095.exe"
    },
    // TODO: max coordinates for th10+
    {
        TH10,
        0x00077834, 0x3CC, -1,
        0.0f, 0.0f, 384.0f, 448.0f,
        32.0f, 16.0f, 384.0f, 448.0f,
        646.0f, 508.0f,
        L"th10.exe"
    },
    {
        TH11,
        0x000A8EB4, 0x888, -1,
        0.0f, 0.0f, 384.0f, 448.0f,
        32.0f, 16.0f, 384.0f, 448.0f,
        646.0f, 508.0f,
        L"th11.exe"
    },
    {
        TH12,
        0x000B4514, 0x988, -1,
        0.0f, 0.0f, 384.0f, 448.0f,
        32.0f, 16.0f, 384.0f, 448.0f,
        646.0f, 508.0f,
        L"th12.exe"
    },
    {
        TH125,
        0x000B68C8, 0x604, -1,
        0.0f, 0.0f, 384.0f, 448.0f,
        128.0f, 16.0f, 384.0f, 448.0f,
        646.0f, 508.0f,
        L"th125.exe"
    },
    {
        TH128,
        0x000B8A80, 0xED8, -1,
        0.0f, 0.0f, 384.0f, 448.0f,
        128.0f, 16.0f, 384.0f, 448.0f,
        646.0f, 508.0f,
        L"th128.exe"
    },
    {
        TH13,
        0x000C22C4, 0x5C4, -1,
        0.0f, 0.0f, 384.0f, 448.0f,
        32.0f, 16.0f, 384.0f, 448.0f,
        646.0f, 508.0f,
        L"th13.exe"
    },
    {
        TH14,
        0x000DB67C, 0x5EC, -1,
        0.0f, 0.0f, 384.0f, 448.0f,
        32.0f, 16.0f, 384.0f, 448.0f,
        646.0f, 508.0f,
        L"th14.exe"
    },
    {
        TH143,
        0x000E6B88, 0x5EC, -1,
        0.0f, 0.0f, 384.0f, 448.0f,
        128.0f, 16.0f, 384.0f, 448.0f,
        646.0f, 508.0f,
        L"th143.exe"
    },
    {
        TH15,
        0x000E9BB8, 0x624, -1,
        0.0f, 0.0f, 384.0f, 448.0f,
        32.0f, 16.0f, 384.0f, 448.0f,
        646.0f, 508.0f,
        L"th15.exe"
    },
    {
        TH16,
        0x000A6EF8, 0x61C, -1,
        0.0f, 0.0f, 384.0f, 448.0f,
        32.0f, 16.0f, 384.0f, 448.0f,
        646.0f, 508.0f,
        L"th16.exe"
    },
    {
        TH165,
        0x000B5654, 0x618, -1,
        0.0f, 0.0f, 384.0f, 448.0f,
        128.0f, 16.0f, 384.0f, 448.0f,
        646.0f, 508.0f,
        L"th165.exe"
    },
    {
        TH17,
        0x000B77D0, 0x61C, -1,
        0.0f, 0.0f, 384.0f, 448.0f,
        32.0f, 16.0f, 384.0f, 448.0f,
        646.0f, 508.0f,
        L"th17.exe"
    },
};

void init() {
    if (
        !SystemParametersInfo(SPI_GETMOUSESPEED, 0, &NORMAL_MOUSE_SPEED, SPIF_SENDCHANGE)
    ) {
        NORMAL_MOUSE_SPEED = -1;
    }

    SLOW_MOUSE_SPEED = (int)floor(((float)NORMAL_MOUSE_SPEED * 0.4f) + 0.5f); // speed during focused movement
}

Game* GetGame() {
    bool found = false;
    int i, pid;
    for (i = 0; i < (sizeof(games) / sizeof(GAMEDATA)); i++) {

        pid = FindProcessPid(games[i].wdName);

        if (pid == 0)
            continue;

        found = true;
        break;
    }

    HANDLE hwnd;
    if (!found) {
        MessageBox(NULL, L"Couldn't find any supported games. Launch the game before running this program.", L"Error", MB_OK);
        return NULL;
    } else if ((hwnd = OpenProcess(PROCESS_ALL_ACCESS, false, pid)) == NULL) {
        MessageBox(NULL, L"Couldn't access the game process.", L"Error", MB_OK);
        return NULL;
    }

    return new Game(&games[i], pid, hwnd);
}

DWORD Game::isInGm()
{
    DWORD ptPl = NULL;
    switch (this->data->num) {
    case TH06:
    case TH07:
    case TH08:
        ptPl = -1;
        break;
    default:
        ReadProcessMemory(this->handle, (LPCVOID)(this->data->ptPlBasic + this->base), &ptPl, sizeof(DWORD), NULL);
    }
    return ptPl;
}

bool Game::isPause() {
    DWORD pause = 0;

    switch (this->data->num) {
    default:
        ReadProcessMemory(this->handle, (LPCVOID)(this->data->ptPause + this->base), &pause, 1, NULL);
        break;
    }

    return pause;
}

DWORD Game::GetBase() {
    HMODULE modules[32];
    DWORD needed;
    if (EnumProcessModulesEx(this->handle, modules, sizeof(modules), &needed, LIST_MODULES_ALL)) {
        DWORD len = needed / sizeof(HMODULE);
        for (DWORD i = 0; i < len; ++i) {
            WCHAR name[MAX_PATH];
            GetModuleFileNameEx(this->handle, modules[i], name, MAX_PATH);
            if (FindStringOrdinal(FIND_FROMSTART, name, -1, this->data->wdName, -1, false)) {
                MODULEINFO info;
                GetModuleInformation(this->handle, modules[i], &info, sizeof(info));
                return (DWORD)info.lpBaseOfDll;
            }
        }
        return NULL;
    } else {
        MessageBoxW(NULL, L"Module enumeration failed", L"ERROR", MB_OK);
        exit(1);
    }
}

int Game::MouseControl()
{
    DWORD ptPl = this->isInGm();

    if (ptPl == NULL)
        return NOT_IN_GAME_FLAG;

    if (this->isPause())
        return PAUSE_FLAG;

    RECT windRect;
    POINT mousePos;
    GetCursorPos(&mousePos); 
    GetWindowRect(this->wnd, &windRect);

    // Should generally be 1, unless the game window is resized
    float ratioX = (windRect.right - windRect.left) / this->data->wndX;
    float ratioY = (windRect.bottom - windRect.top) / this->data->wndY;

    float posX = (float)(mousePos.x - (windRect.left + this->data->frameOffX*ratioX));
    float posY = (float)(mousePos.y - (windRect.top + this->data->frameOffY*ratioY));

    posX = posX / ratioX;
    posY = posY / ratioY;

    if (posX < this->data->xmin) posX = this->data->xmin;
    if (posX > this->data->xmax) posX = this->data->xmax;
    if (posY < this->data->ymin) posY = this->data->ymin;
    if (posY > this->data->ymax) posY = this->data->ymax;

    switch (this->data->num) {
    case LE01:
    case LE02:
        WriteProcessMemory(this->handle, (LPVOID)(ptPl + this->data->ptPloffs), &posX, sizeof(DWORD), NULL);
        WriteProcessMemory(this->handle, (LPVOID)(ptPl + this->data->ptPloffs + 4), &posY, sizeof(DWORD), NULL);
        break;
    case TH06:
    case TH07:
    case TH08:
        WriteProcessMemory(this->handle, (LPVOID)(this->data->ptPlBasic + this->base + this->data->ptPloffs), &posX, sizeof(DWORD), NULL);
        WriteProcessMemory(this->handle, (LPVOID)(this->data->ptPlBasic + this->base + this->data->ptPloffs + 4), &posY, sizeof(DWORD), NULL);
        break;
    case TH09: {
        posX -= 136.0f;
        WriteProcessMemory(this->handle, (LPVOID)(ptPl + this->data->ptPloffs), &posX, sizeof(DWORD), NULL);
        WriteProcessMemory(this->handle, (LPVOID)(ptPl + this->data->ptPloffs + 4), &posY, sizeof(DWORD), NULL);
        break;
    }
    case TH95: {
        posX -= 192.0f;
        WriteProcessMemory(this->handle, (LPVOID)(ptPl + this->data->ptPloffs), &posX, sizeof(DWORD), NULL);
        WriteProcessMemory(this->handle, (LPVOID)(ptPl + this->data->ptPloffs + 4), &posY, sizeof(DWORD), NULL);
        break;
    }
    case TH10:
    {
        int iPosX = (int)((posX - 192.0f) * 100.0f);
        int iPosY = (int)(posY * 100.0f);
        WriteProcessMemory(this->handle, (LPVOID)(ptPl + this->data->ptPloffs), &iPosX, sizeof(DWORD), NULL);
        WriteProcessMemory(this->handle, (LPVOID)(ptPl + this->data->ptPloffs + 4), &iPosY, sizeof(DWORD), NULL);
        break;
    }
    case TH11:
    case TH12:
    case TH125:
    case TH128:
    case TH13:
    case TH14:
    case TH143:
    case TH15:
    case TH16:
    case TH165:
	{
		int iPosX = (int)((posX - 192.0f) * 128.0f);
		int iPosY = (int)(posY * 128.0f);
		WriteProcessMemory(this->handle, (LPVOID)(ptPl + this->data->ptPloffs), &iPosX, sizeof(DWORD), NULL);
		WriteProcessMemory(this->handle, (LPVOID)(ptPl + this->data->ptPloffs + 4), &iPosY, sizeof(DWORD), NULL);
		break;
	}
    case TH17:
    {
        int iPosX = (int)((posX - 195.5f) * 128.0f);
        int iPosY = (int)((posY - 21.5f) * 128.0f);
        WriteProcessMemory(this->handle, (LPVOID)(ptPl + this->data->ptPloffs), &iPosX, sizeof(DWORD), NULL);
        WriteProcessMemory(this->handle, (LPVOID)(ptPl + this->data->ptPloffs + 4), &iPosY, sizeof(DWORD), NULL);
        break;
    }
    }

    return NORMAL_FLAG;
}
