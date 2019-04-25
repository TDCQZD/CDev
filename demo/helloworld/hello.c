#include <stdio.h> //预处理器指令，告诉 C 编译器在实际编译之前要包含 stdio.h 文件。

int main() //int main() 是主函数，程序从这里开始执行。
{
    /* 我的第一个 C 程序 */     // /*...*/ 将会被编译器忽略，这里放置程序的注释内容。它们被称为程序的注释。
    printf("Hello, World! \n"); //printf(...) 是 C 中另一个可用的函数，会在屏幕上显示消息 "Hello, World!"。

    return 0; //终止 main() 函数，并返回值 0。
}