#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{	//while循环中，break用于永久终止循环
	//continue的作用是跳过本次循环continue后面的代码
	//直接去判断部分，看是否进入下一次循环
	//ctrl+z---getchar 就读取结束了
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);
	printf("请确认密码(y/n):>");
	//清除缓冲区
	//getchar()清理一个字符
	int tmp = 0;
	while ((tmp = getchar()) != '\n')
	{
		;
	}//清理多个字符
	int ch = getchar();
	if (ch == 'y')
	{
		printf("确认成功");
	}
	else
		printf("确认失败");
	return 0;
}