#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("%c\n",'\'');//��'��Ϊ�ַ���ӡ����
	printf("\test\test\n");//  \t ˮƽ�Ʊ���ռ����ո��ӡ�ַ�
	printf("\\test\\test\n");// ʹ\t������Ϊ��ת���ַ�
	//printf("\a");
	printf("%c\n", '\130');//8���Ƶ�130ת��ʮ���ƵĶ�Ӧ��ASCII��
	printf("\taaa");
	return 0;
}