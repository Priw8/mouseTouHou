#include "Proc.h"

class Game;

Game* GetGame();
void init();

typedef struct {
	int num;
	DWORD ptPlBasic;
	DWORD ptPloffs;
	DWORD ptPause;

	// Maximum and minimum allowed positions of the player.
	float xmin, ymin, xmax, ymax;

	// Offset of the STG frame from top-left corner of the window.
	float frameOffX, frameOffY;

	// Size of the STG frame.
	float frameX, frameY;
	
	// Expected size of the window.
	float wndX, wndY;

	// Executable name.
	const WCHAR* wdName;
} GAMEDATA;

class Game {
	public:
		static Game allGm[40];

		// Returns base of the executable in the virtual memory.
		DWORD GetBase();

		// Move the player to the mouse pointer.
		int MouseControl();

		// Returns whether the game is paused.
		bool isPause();

		// Returns pointer to the player struct in the virtual memory.
		DWORD isInGm();

		GAMEDATA* data;
		HWND wnd;
		HANDLE handle;
		DWORD base;
		int pid;

		Game(
			GAMEDATA* data,
			int pid,
			HANDLE handle
		) {
			this->data = data;
			this->wnd = ReturnWnd(pid);
			this->handle = handle;
			this->base = this->GetBase();
			this->pid = pid;
		};
};

