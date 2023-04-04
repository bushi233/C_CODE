#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void init(int arr[], int sz)//数组初始化为0
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
int print(int* arr, int sz)//打印数组的每一个数
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void reverse(int* arr, int sz)//数组倒序打印
{
	int left = 0;
	int right = sz - 1;
	for (left = 0, right = sz - 1;left < right; left++, right--)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;	
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	reverse(arr, sz);
	print(arr, sz);
	init(arr,sz);
	print(arr,sz);
	 //int i = 0;
	
	

	return 0;
}

