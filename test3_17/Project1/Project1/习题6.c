#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//EOF---end of file---�ļ�������־---ͨ�������ļ�ĩβ
	int ch = 0;//ֻ�ܴ���һ���ַ�
	while ((ch = getchar())!=EOF)//getchar�����᷵��һ��EOF�������ú�������
		//��ȡһ���ַ�������һ���ַ�
	{
		printf("%c", ch + 32);//���Դ�����������
		//putchar(ch + 32);//���/��ӡһ���ַ���ÿ����Сд��ĸ��ASCII���32
		//printf("\n");
		getchar();//��ȡ\n
	}
	return 0;

}