#include<iostream>
#include<string>
using namespace std;

//C++���еĳ�Ա��������һ����Ķ��� ���ǳƸó�ԱΪ �����Ա
class Phone
{
public:
	string m_PName;

	Phone(string pName)
	{
		m_PName = pName;
		cout << "Phone�Ĺ��캯������" << endl;
	}

	~Phone()
	{
		cout << "Phone��������������" << endl;
	}
};

class Person7
{
public:
	string m_Name;
	Phone m_Phone;

	//Phone m_Phone = pName;
	Person7(string name, string pName) : m_Name(name), m_Phone(pName)
	{
		cout << "Person7�Ĺ��캯������" << endl;
	}

	~Person7()
	{
		cout << "Person7��������������" << endl;
	}
};

//��������Ķ�����Ϊ�����Ա �ȹ������������ �ٹ�������
//������˳���빹���෴��ջ��
void test_2()
{
	Person7 p("����", "ƻ��max");
	cout << p.m_Name << "����" << p.m_Phone.m_PName << endl;
}

int main7()
{
	test_2();

	system("pause");
	return 0;
}