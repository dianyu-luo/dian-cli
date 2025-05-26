#include <iostream>
int main(int argc, char const *argv[])
{
    system("chcp 65001 > nul");

    std::cout << argc << std::endl;
    std::cout << "hello world" << std::endl;
    std::cout << "buxiang xie zuo ye " << std::endl;
    // cout 打印内容是彩色的
    std::cout << "\033[31m 这是红色文字 \033[0m" << std::endl;
    std::cout << "\033[32m 这是绿色文字 \033[0m" << std::endl;
    std::cout << "\033[33m 这是黄色文字 \033[0m" << std::endl;
    std::cout << "干活" << std::endl;
    return 0;
}
