#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{	//whileѭ���У�break����������ֹѭ��
	//continue����������������ѭ��continue����Ĵ���
	//ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
	//ctrl+z---getchar �Ͷ�ȡ������
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);
	printf("��ȷ������(y/n):>");
	//���������
	//getchar()����һ���ַ�
	int tmp = 0;
	while ((tmp = getchar()) != '\n')
	{
		;
	}//�������ַ�
	int ch = getchar();
	if (ch == 'y')
	{
		printf("ȷ�ϳɹ�");
	}
	else
		printf("ȷ��ʧ��");
	return 0;
}