#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c','\0' };//û��\0��������룬��Ϊ\0���ַ����Ľ�����־
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	//strlen("abc");���ַ�������
	int len = strlen("abc");
	printf("%d\n", len);//Ҫ����ͷ�ļ�#include<string.h>
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	printf("%d", len);
	return 0;
}