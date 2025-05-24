#include <fstream>
#include <iostream>
#include <windows.h>
int main(int argc, char const *argv[])
{
    using namespace std;
    Sleep(1000);
    cout << "out\n";
    const char *LOG_FILE = "log.txt";
    ofstream log(LOG_FILE, ios::app);

    // 检查文件是否打开成功
    if (!log.is_open())
    {
        cerr << "Failed to open log file." << endl;
        return 0;
    }

    // 后台循环
    while (true)
    {
        // 获取当前窗口句柄
        HWND hwnd = GetForegroundWindow();

        // 获取窗口标题
        wchar_t wtitle[256];
        GetWindowTextW(hwnd, wtitle, sizeof(wtitle) / sizeof(wchar_t));
        char title[512];

        int len = WideCharToMultiByte(CP_UTF8, 0, wtitle, -1, title, sizeof(title), NULL, NULL);

        // 记录日志
        log << "Active window: " << title << endl;

        // 等待一段时间
        Sleep(1000);
    }
    return 0;
}
