#include<iostream>
#include<string>
using namespace std;

//ģ���ͨ���Բ��������ܵ�
//C++Ϊ�˽���������� �ṩ��ģ�������
//��Щ�ض����� ��Ҫ�þ��廯��ʽ������ʵ��

class Person
{
public:
	string m_name;
	int m_age;

	Person(string name, int age)
	{
		m_name = name;
		m_age = age;
	}
};

//�Ա����������Ƿ����
template<typename T>
bool isEqual(T &a, T &b)
{
	if (a == b) {
		return true;
	}
	return false;
}

//���þ��廯Person�İ汾ʵ�ִ��룬 ���廯���ȴ���
template<> bool isEqual(Person& p1, Person& p2)
{
	if (p1.m_name == p2.m_name && p1.m_age == p2.m_age) {
		return true;
	}
	return false;
}

int main()
{
	int a = 10;
	int b = 20;

	Person p1("tom", 10);
	Person p2("Tom", 10);

	bool ret = isEqual(p1, p2);
	if (ret) {
		cout << "a == b" << endl;
	}
	else {
		cout << "a != b" << endl;
	}

	system("pause");
	return 0;
}