#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int add(int x, int y)//�����治�ܺ�����ͬ�����������д��һ������
{
	int z = 0;
	z = x + y;
	return z; //�õ�z�����ٷ���add��ӡ
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);//�����˼�&
	int add = num1 + num2;
	printf("%d", add);
	return 0;
}