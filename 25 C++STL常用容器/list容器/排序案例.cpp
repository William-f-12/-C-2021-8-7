#include<iostream>
#include<string>
#include<list>
using namespace std;

//������������� ���������ͬ����߽��н���

class Person
{
public:
	string m_name;
	int m_age;
	int m_height;

	Person(string name, int age, int height)
	{
		this->m_name = name;
		this->m_age = age;
		this->m_height = height;
	}
};

template<typename T>
void printList(const list<T>& l)
{
	for (typename list<T>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
template<>
void printList<Person>(const list<Person>& l)
{
	for (typename list<Person>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "����: " << (*it).m_name << " ����: " << (*it).m_age << " ���: " << (*it).m_height << endl;
	}
}

//ָ���������
bool myComparePerson(Person& p1, Person& p2)
{
	//������������� ���������ͬ����߽��н���
	//ʹ����Ŀ�����
	return (p1.m_age == p2.m_age) ? (p1.m_height > p2.m_height) : (p1.m_age < p2.m_age);
}

void test()
{
	list<Person> L; //��������

	//׼������
	Person p1("����", 35, 175);
	Person p2("�ܲ�", 45, 180);
	Person p3("��Ȩ", 40, 170);
	Person p4("����", 25, 190);
	Person p5("�ŷ�", 35, 160);
	Person p6("����", 35, 200);

	//��������
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	printList(L);

	//����
	cout << "---------------------------" << endl;
	cout << "�����" << endl;
	cout << "---------------------------" << endl;

	L.sort(myComparePerson);
	printList(L);
}

int main()
{
	test();

	system("pause");
	return 0;
}