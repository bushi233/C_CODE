#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>//使用floor seil 函数
int main()
{
    double a = 0;//floor ceil 返回值是double型
    scanf("%lf", &a);
    printf("%g\n%g", floor(a), ceil(a));//%g是让后面无用的数字清除，只打印有效数字
    //floor 向下取整【返回值是double型】
    //ceil 向上取整
    //    round 四舍五入
    //    头文件<math.h>
    return 0;
}