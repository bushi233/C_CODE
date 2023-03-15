#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()//指针变量的创建
//{
//	int a = 10;//给a分配内存
//	printf("%p\n", &a);//只会拿出第一个字节的地址%p专门打印地址
//	int* pa = &a;//pa是用来存放地址的，c语言中pa被叫做指针变量
//	//*说明pa是指针变量
//	//int说明pa执行的对象是int类型的
//	*pa = 20;//*是解引用操作*pa就是通过pa里面的地址，找到a,也可以更改a的值
//	printf("%d\n",a);
//	return 0;
//}