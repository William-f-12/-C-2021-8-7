#include<iostream>
using namespace std;

//�ṹ��ָ�룺ͨ��ָ����ʽṹ���еĳ�Ա
//���ò�����->����ͨ���ṹ��ָ����ʽṹ������

struct Student
{
	string name;
	int age;
	int score;
};

int main3()
{
	//1. ����ѧ���ṹ�����
	Student s = { "wyr", 18, 100 };

	//2. ͨ��ָ��ָ��ṹ�����
	//�﷨�� struct����ʡ�ԣ� �ṹ���� = &�ṹ�������
	Student* p = &s;

	//3. ͨ��ָ����ʽṹ������е�����
	//ͨ���ṹ��ָ����ʽṹ����������ԣ���Ҫ�á�->��������
	cout << "������ " << p->name << " ���䣺 " << p->age << " ������ " << p->score << endl;

	system("pause");

	return 0;
}