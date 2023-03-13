#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//三目操作符
{
	int a = 3;
	int b = 2;
	int max = 0;
	max = a <b? a : b;
	printf("%d\n", max);
	int c = (a = b - 1, b = a + 4, c = a + b);//逗号操作符
	printf("%d\n", c);
	return 0;
}