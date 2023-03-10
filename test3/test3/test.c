#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c','\0' };//没有\0会出现乱码，因为\0是字符串的结束标志
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	//strlen("abc");求字符串长度
	int len = strlen("abc");
	printf("%d\n", len);//要引用头文件#include<string.h>
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	printf("%d", len);
	return 0;
}