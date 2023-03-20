#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{/*if( 初始化;判断部分 ;调整部分 )*/
	//特点：初始化部分只执行一次
	//
	int i = 0;
	for (i = 1; i <= 10; i++)//三个部分都可以省略，但是不要随便省略
							 //判断部分省略--循环部分恒为真，容易死循环
	{
		if (i == 5)
			continue;//i==5的值不打印，直接执行i++；
			/*break;*///for循环中的break执行循环终止
		printf(" %d", i);
	}//建议：不要在循环体内修改循环变量
	 //		 建议写左闭右开区间的写法
	return 0;
}