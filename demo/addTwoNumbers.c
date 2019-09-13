#include <stdio.h>

int main()
{
    int a, b, sum;

    printf("输入两个数(以空格分割): ");
    // 通过 scanf() 函数接收用户输入的两个整数
    scanf("%d %d", &a, &b);

    sum = a + b;
    // 输出结果
    printf("%d + %d = %d", a, b, sum);

    return 0;
}