#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef unsigned int u_int;//��
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
	//static-��̬��
	//1,���ξֲ����������ᱻ���٣���������ֱ���������
	//2������ȫ�ֱ���,ʹ��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ�ʹ��
	//3�����κ���,ʹ�ú���ֻ�����Լ����ڵ�Դ�ļ�ʹ��
	//ȫ�ֱ���֮�����ܱ��ⲿԴ�ļ�ʹ�ã�����Ϊȫ�ֱ��������ⲿ��������
	//auto  ���Զ��ģ�ÿ���ֲ���������auto���ε�,auto�������Զ����ɺ����� 
	//static���ι���Ͳ���������

	int b = 0;
	while (b < 10)
	{
		test();
		b++;
	}
	
	return 0;
}