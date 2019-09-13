#include <stdio.h>

int main() 
{
    double a, b, multi;
    printf("输入两个浮点数: ");
 
    // 用户输入两个浮点数
    scanf("%lf %lf", &a, &b);  
 
    // 两个浮点数相乘
    multi = a * b;  
 
    // 输出结果， %.2lf 保留两个小数点
    printf("%lf * %lf = %.2lf", multi);
    
    return 0;
}