#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//字符串函数头文件
int main()
{
	//int i = 0;
	//int n = 0;
	//int ret = 1;
	//int sum = 0;
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//{
	//	ret *= i;
	//	sum += ret;
	//}
	//printf("%d", sum);
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("input_password:");
		scanf("%s", password);
		//if(password == "123456")//两个字符串比较，不能使用 == ，应该使用strcmp
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("password error\n");
		}
		
	}
	if (i == 3)
	{
		printf("三次均错误\n");
	}
	return 0;
}