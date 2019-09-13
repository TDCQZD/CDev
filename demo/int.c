#include <stdio.h>

int main()
{
    int number;
    // printf() 输出字符串
    printf("输入一个整数：");
    // scanf() 格式化输入
    scanf("%d", &number);
    // printf() 显示格式化输入
    printf("输入整数为：", number);
    return 0;
}