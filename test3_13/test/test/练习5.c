#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//��Ŀ������
{
	int a = 3;
	int b = 2;
	int max = 0;
	max = a <b? a : b;
	printf("%d\n", max);
	int c = (a = b - 1, b = a + 4, c = a + b);//���Ų�����
	printf("%d\n", c);
	return 0;
}