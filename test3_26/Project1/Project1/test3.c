#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//Ƕ�׵���
	//void rest3()
	//{
	//	printf("hehe\n");//3������test3
	//}
	//int test2()
	//{
	//	test3();//2.test2����test3
	//	return 0;
	//}
	//int main()
	//{
	//	test2();//1.����test2
	//	return 0;
	//}
	//��ʽ����
#include<string.h>
	int main()
	{
		int len = strlen("abc");
		printf("%d\n", len);
		//������Ժϳ�Ϊ����һ��
		printf("%d\n", strlen("abc"));
		//printf����ֵ�Ǵ�ӡ�ַ��ĸ���
		return 0;
	}
	//���ļ�ʹ�ã�������������ͷ�ļ����棬���������.c�ļ�����
	//���õĻ���Ҫ����#include"***.h" ***��ʾͷ�ļ�����