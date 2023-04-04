#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//数组A和数组B的内容交换，数组一样大
//int main()
//{
//	int a[] = { 1,2,3 };
//	int b[] = { 4,5,6 };
//	int i = 0;
//	int sz = sizeof(a) / sizeof(a[0]);//算出数组的大小
//	for (i = 0; i < sz; i++)
//	{
//		int  tmp = a[i];//交换数组内下标相同的数
//		a[i] = b[i];
//		b[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)//分别打印出来
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	return 0;
//}