#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct stu//�ṹ��
{
	char name[20];//��Ա����
	int age;
	double score;
};
int main()
{
	struct stu s = { "����",20,88.5 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("%s %d %lf\n", s.name, s.age, s.score);//  .  ������   �ṹ�����.��Ա����
	struct stu* ps = &s;
	printf("%s %d %f\n", ps->name, ps->age, ps->score);//ֻ����ָ���ʱ����÷�
	return 0;
}