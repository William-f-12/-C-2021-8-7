#include<iostream>
#include<string>
using namespace std;

//const��ʹ�ó���

//ѧ���ṹ��
struct student
{
	string name;
	int age;
	int score;
};

//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ḵ���µĸ�������
void printStudent(const student* s) //��const��ֹ�����
{
	//s->age = 150; �����, ����const��һ�����޸ĵĲ����ͻᱨ��
	cout << " ����: " << s->name << " ����: " << s->age << " ����: " << s->score << endl;
}

int main6()
{
	//�����ṹ�����
	student s = { "����", 15, 70 };

	//ͨ����������ӡ�ṹ���������Ϣ
	printStudent(&s);

	system("pause");

	return 0;
}