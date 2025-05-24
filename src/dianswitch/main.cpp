/*
gcc -o dianswitch.exe dianswitch.c
*/

#include <stdio.h>
#include <windows.h>
char *convertToGbk(wchar_t *utf16_str)
{
    char gbk_str[1024];
    WideCharToMultiByte(CP_ACP, 0, utf16_str, 1024, gbk_str, 1024, NULL, NULL);
    return gbk_str;
}
BOOL CALLBACK enum_windows_callback(HWND hwnd, LPARAM lParam)
{
    if (!IsWindowVisible(hwnd) || !IsWindowEnabled(hwnd))
    {
        return TRUE;
    }
    char title[1024];
    if (GetWindowText(hwnd, title, sizeof(title)) > 0)
    {
        if (strcmp(title, "NVIDIA GeForce Overlay") == 0 || strcmp(title, "MainWindow") == 0 ||
            strcmp(title, "Microsoft Text Input Application") == 0 || strcmp(title, "Program Manager") == 0)
        {
            return TRUE;
        }
        printf("%s\n", title);
    }
    return TRUE;
}

void switch_to_window(const char *title)
{
    HWND hwnd = FindWindow(NULL, title);
    if (hwnd == NULL)
    {
        printf("Window not found: %s\n", title);
        return;
    }
    BringWindowToTop(hwnd);
    SetForegroundWindow(hwnd);
}

int main(int argc, char *argv[])
{

    if (argc == 1)
    {
        EnumWindows(enum_windows_callback, 0);
    }
    else
    {
        switch_to_window(argv[1]);
    }
    return 0;
}
