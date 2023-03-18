#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)//switch语句可以嵌套switch语句，break只跳出自己的switch语句
	{
	case 1://入口
		printf("星期一", day);
		break;//出口
	case 2:
		printf("星期二", day);
		break;
	case 3:
		printf("星期三", day);
		break;
	case 4:
		printf("星期四", day);
		break;
	case 5:
		printf("星期五", day);
		break;
	case 6:
		printf("星期六", day);
		break;
	case 7:
		printf("星期天", day);
		break;
	default://默认其他选项
		printf("输入错误");
		break;
	}
	return 0;
}