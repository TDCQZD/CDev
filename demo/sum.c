#include <stdio.h>
// 计算自然数的和
int main()
{
    int n, i, sum = 0;

    printf("输入一个正整数: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i)
    {
        sum += i; // sum = sum+i;
    }

    printf("Sum = %d", sum);

    return 0;
}