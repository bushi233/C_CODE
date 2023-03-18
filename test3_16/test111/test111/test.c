#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//100以内的奇数
{
	int a = 0;
	while (a < 100)
	{
		if (a % 2 == 1)//if不能加括号
		
			printf("%d是奇数\n", a);
			a++;
	}
	return 0;
}