#include<iostream>
#include<string>
using namespace std;

//�﷨�� struct �ṹ���� { �ṹ���Ա�б� }��

//����ѧ����������
//�Զ����������ͣ�һЩ���ͼ�����ɵ�һ������
struct Student
{
	//����
	string name;
	//����
	int age;
	//����
	int score;
}s3; //

int main1()
{
	//ͨ���ṹ�崴�����������ַ�ʽ��
	//1. struct �ṹ���� ��������
	//��c++�У�struct ����ʡ��
	Student s1;
	//��s1���Ը�ֵ, ����.���ʳ�Ա
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;

	cout << "����: " << s1.name << " ����: " << s1.age << endl;

	//2. struct �ṹ���� ������ = { ��Ա1ֵ, ��Ա2ֵ... };
	struct Student s2 = { "����", 19, 80 };
	cout << "����: " << s2.name << " ����: " << s2.age << endl;

	//3. ����ṹ��ʱ˳�㴴������
	s3.name = "wang";
	s3.age = 20;
	s3.score = 60;	
	
	cout << "����: " << s3.name << " ����: " << s3.age << endl;


	system("pause");

	return 0;
}