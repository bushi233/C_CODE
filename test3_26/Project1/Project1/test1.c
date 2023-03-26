#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int is_leap_year(int a)//函数求闰年
//{
//	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d是闰年", y);
//		}
//	}
//	return 0;
//}
#include<stdio.h>
int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		
		 if (a[mid] > k)
		{
			right = mid - 1;
		}
		 else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int key = 7;
	//找到返回找到的下标，找不到返回-1
	int ret = binary_search(arr, key, sz);//只能在函数外部求出数组个数，不能在函数内部求
	if (-1 == ret)
	{
		printf("找不到了\n");
	}
	else {
		printf("下表是%d,找到了\n", ret);
	}
	return 0;
}