#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//double get_squ(int n,int k)
//{
//	if (k > 0)
//	{
//		return n * get_squ(n, k - 1);
//	}
//	else if (k == 0)
//		return 1;
//	else
//		return n * get_squ(n, -k);
//}
//int main()//递归实现n的k次方
//{
//	int  n = 0;
//	int  k = 0;
//	scanf("%d%d", &n, &k);
//	double squ = get_squ(n, k);
//	printf("%lf", squ);
//	return 0;
//}