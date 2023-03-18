#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//EOF---end of file---文件结束标志---通常放在文件末尾
	int ch = 0;//只能处理一个字符
	while ((ch = getchar())!=EOF)//getchar结束会返回一个EOF，用来让函数结束
		//获取一个字符，输入一个字符
	{
		printf("%c", ch + 32);//可以代替下面两行
		//putchar(ch + 32);//输出/打印一个字符，每个大小写字母的ASCII码差32
		//printf("\n");
		getchar();//读取\n
	}
	return 0;

}