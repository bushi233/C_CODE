#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)//switch������Ƕ��switch��䣬breakֻ�����Լ���switch���
	{
	case 1://���
		printf("����һ", day);
		break;//����
	case 2:
		printf("���ڶ�", day);
		break;
	case 3:
		printf("������", day);
		break;
	case 4:
		printf("������", day);
		break;
	case 5:
		printf("������", day);
		break;
	case 6:
		printf("������", day);
		break;
	case 7:
		printf("������", day);
		break;
	default://Ĭ������ѡ��
		printf("�������");
		break;
	}
	return 0;
}