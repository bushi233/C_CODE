#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>//ʹ��floor seil ����
int main()
{
    double a = 0;//floor ceil ����ֵ��double��
    scanf("%lf", &a);
    printf("%g\n%g", floor(a), ceil(a));//%g���ú������õ����������ֻ��ӡ��Ч����
    //floor ����ȡ��������ֵ��double�͡�
    //ceil ����ȡ��
    //    round ��������
    //    ͷ�ļ�<math.h>
    return 0;
}