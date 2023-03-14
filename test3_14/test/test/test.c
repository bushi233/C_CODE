#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef unsigned int u_int;//简化
void test() 
{
	static int a = 0;
	a++;
	printf("%d\n", a);
}
int main()

{
	//u_int num = 100;
	//printf("%d", num);
	//static-静态的
	//1,修饰局部变量，不会被销毁，生命周期直到程序结束
	//2，修饰全局变量,使得全局变量只能在自己所在的源文件使用
	//3，修饰函数,使得函数只能在自己所在的源文件使用
	//全局变量之所以能被外部源文件使用，是因为全局变量具有外部链接属性
	//auto  是自动的，每个局部变量都是auto修饰的,auto给的是自动生成和销毁 
	//static修饰过后就不会销毁了

	int b = 0;
	while (b < 10)
	{
		test();
		b++;
	}
	
	return 0;
}