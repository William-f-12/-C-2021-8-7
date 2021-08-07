#include<iostream>
#include<string>
using namespace std;

//��ģ���﷨�� template<typename/class T> + ��

template<class NameType, class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	void showPerson()
	{
		cout << "name: " << this->m_Name << endl;
		cout << "age: " << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};

int main1()
{
	Person<string, int> p1("Tom", 99);

	p1.showPerson();

	system("pause");
	return 0;
}