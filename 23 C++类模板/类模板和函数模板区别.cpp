#include<iostream>
using namespace std;

//��ģ��ͺ���ģ���������Ҫ�����㣺
// 1. ��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
// 2. ��ģ���ں��������б��п�����Ĭ�ϲ���

//��ģ��
template<class NameType, class AgeType = int> //ģ������б� ������Ĭ��
class People
{
public:
	People(NameType name, AgeType age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	void showPeople()
	{
		cout << "name: " << this->m_Name << endl;
		cout << "age: " << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};

void test01()
{
	//People p("�����", 1000); ���� �޷����Զ������Ƶ�
	People<string, int> p("�����", 1000); //ֻ������ʾָ������
	p.showPeople();
}

void test02()
{
	People<string> p("��˽�", 1234);
	p.showPeople();
}

int main2()
{
	test01();
	test02();

	system("pause");
	return 0;
}