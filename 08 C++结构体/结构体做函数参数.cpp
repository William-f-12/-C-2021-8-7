#include<iostream>
using namespace std;

//ѧ���ṹ��
struct student
{
	string name;
	int age;
	int score;
};

//��ӡѧ����Ϣ�ĺ���
//1. ֵ����: �βθı�ʵ�β���
void printStudent1(student s)
{
	cout << " ����: " << s.name << " ����: " << s.age << " ����: " << s.score << endl;
}
//2. ��ַ����: �βθı�ʵ��Ҳ�ı�
void printStudent2(student* p)
{
	cout << " ����: " << p->name << " ����: " << p->age << " ����: " << p->score << endl;
}

int main5()
{
	//�ṹ������������
	//��ѧ������һ�������У���ӡѧ�����ϵ�������Ϣ
	student s = { "wyr", 18, 100 }; //�����ṹ�����

	printStudent1(s);
	printStudent2(&s);

	system("pause");

	return 0;
}