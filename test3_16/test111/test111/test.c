#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//100���ڵ�����
{
	int a = 0;
	while (a < 100)
	{
		if (a % 2 == 1)//if���ܼ�����
		
			printf("%d������\n", a);
			a++;
	}
	return 0;
}