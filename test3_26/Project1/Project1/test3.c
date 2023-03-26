#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//嵌套调用
	//void rest3()
	//{
	//	printf("hehe\n");//3。调用test3
	//}
	//int test2()
	//{
	//	test3();//2.test2调用test3
	//	return 0;
	//}
	//int main()
	//{
	//	test2();//1.调用test2
	//	return 0;
	//}
	//链式访问
#include<string.h>
	int main()
	{
		int len = strlen("abc");
		printf("%d\n", len);
		//上面可以合成为下面一个
		printf("%d\n", strlen("abc"));
		//printf返回值是打印字符的个数
		return 0;
	}
	//跨文件使用，函数声明放在头文件里面，函数本体放.c文件里面
	//调用的话，要引用#include"***.h" ***表示头文件名字