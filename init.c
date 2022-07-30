// This is free and unencumbered software released into the public domain.
#include <fcntl.h>
#include <io.h>
#include <windows.h>

__attribute__((constructor))
void winsane_init(void)
{
    #if !defined(NO_CRT)
        _setmode(0, _O_BINARY);
        _setmode(1, _O_BINARY);
    #endif
    SetConsoleCP(CP_UTF8);  // maybe will work someday
    SetConsoleOutputCP(CP_UTF8);
}
