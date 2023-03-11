#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("%c\n",'\'');//把'作为字符打印出来
	printf("\test\test\n");//  \t 水平制表符空几个空格打印字符
	printf("\\test\\test\n");// 使\t不被认为是转义字符
	//printf("\a");
	printf("%c\n", '\130');//8进制的130转成十进制的对应的ASCII码
	printf("\taaa");
	return 0;
}