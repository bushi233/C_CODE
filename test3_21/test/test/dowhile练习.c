#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//�ַ�������ͷ�ļ�
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
		//if(password == "123456")//�����ַ����Ƚϣ�����ʹ�� == ��Ӧ��ʹ��strcmp
		if (strcmp(password, "123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("password error\n");
		}
		
	}
	if (i == 3)
	{
		printf("���ξ�����\n");
	}
	return 0;
}