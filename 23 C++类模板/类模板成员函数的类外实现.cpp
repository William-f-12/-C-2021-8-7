#include<iostream>
#include<string>
using namespace std;

//��ģ���г�Ա����������ʵ��
template<class T1, class T2>
class Person3
{
public:
	Person3(T1 name, T2 age);
	//{
	//	this->m_Name = name;
	//	this->m_Age = age;
	//}

	void showPerson();
	//{
	//	cout << "������ " << this->m_Name << " ���䣺 " << this->m_Age << endl;
	//}

	T1 m_Name;
	T2 m_Age;
};

//���캯������ʵ��
template<class T1, class T2>
Person3<T1, T2>::Person3(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}
//��Ա��������ʵ��
template<class T1, class T2>
void Person3<T1, T2>::showPerson()
{
	cout << "������ " << this->m_Name << " ���䣺 " << this->m_Age << endl;
}


int main6()
{
	Person3<string, int> p3("Tom", 17);
	p3.showPerson();

	system("pause");
	return 0;
}