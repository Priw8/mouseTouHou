#pragma once

// Returns window handle of the process with the given PID.
HWND ReturnWnd(DWORD processID);

// Returns PID of process of the given executable name, or 0 if no process matches the given excutable name.
int FindProcessPid(const WCHAR * pszProcessName);
