#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int add(int x, int y)//（里面不能和下面同名，是随机的写的一个数）
{
	int z = 0;
	z = x + y;
	return z; //得到z结束再返回add打印
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);//别忘了加&
	int add = num1 + num2;
	printf("%d", add);
	return 0;
}