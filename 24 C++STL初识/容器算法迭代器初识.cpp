#include<iostream>
using namespace std;
#include<vector>
#include<algorithm> //��׼�㷨ͷ�ļ�

// vector���������������
// ������vector
// �㷨��for_each
// ��������vector<int>::iterator

void print(int val)
{
	cout << val << endl;
}

void test01()
{
	//������һ��vector���� ����
	vector<int> v;

	//�������в�������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//ͨ�����������������е�����
	vector<int>::iterator itBegin = v.begin(); //��ʼ������ ָ�������е�һ��Ԫ��
	vector<int>::iterator itEnd = v.end(); //���������� ָ�����������һ��Ԫ�ص���һ��λ��

	//��һ�ֱ�����ʽ
	while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}

	//�ڶ��ֱ�����ʽ
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

	//�����ֱ�����ʽ ����STL���ṩ�ı����㷨
	for_each(v.begin(), v.end(), print);
}

// vector�����д���Զ�����������
class Person
{
public:
	Person(string name, int age)
	{
		this->Age = age;
		this->Name = name;
	}

	string Name;
	int Age;

};

void test02()
{
	vector<Person> v;

	Person p1("aaa", 10);
	Person p2("bbb", 11);
	Person p3("ccc", 12);
	Person p4("ddd", 13);

	//���������������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//��������������
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		// cout << "����: " << (*it).Name << " ����: " << (*it).Age << endl;
		cout << "����: " << it->Name << " ����: " << it->Age << endl;
	}
}

void test03()
{
	vector<Person*> v;

	Person p1("aaa", 10);
	Person p2("bbb", 11);
	Person p3("ccc", 12);
	Person p4("ddd", 13);

	//���������������
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);

	//��������������
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "����: " << (*it)->Name << " ����: " << (*it)->Age << endl;
	}
}

int main1()
{
	test01();
	test02();
	test03();

	system("pause");
	return 0;
}