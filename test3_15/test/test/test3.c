#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct stu//结构体
{
	char name[20];//成员变量
	int age;
	double score;
};
int main()
{
	struct stu s = { "张三",20,88.5 };//结构体的创建和初始化
	printf("%s %d %lf\n", s.name, s.age, s.score);//  .  操作符   结构体变量.成员变量
	struct stu* ps = &s;
	printf("%s %d %f\n", ps->name, ps->age, ps->score);//只给你指针的时候的用法
	return 0;
}