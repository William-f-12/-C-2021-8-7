#include<iostream>
#include<string>
using namespace std;
//��һ�ֽ����ʽ ֱ�Ӱ���Դ�ļ�
// #include"Person4.cpp"
//�ڶ��ֽ����ʽ ��.h ��.cpp�е�����д��һ�� ����׺����Ϊ.hpp�ļ�
#include"Person4.hpp"


//��ģ���г�Ա��������ʱ�����ڵ��ý׶� ���·��ļ���дʱ���Ӳ���

//�����ʽ1�� ֱ�Ӱ���.cppԴ�ļ�
//�����ʽ2�� ��������ʵ��д��ͬһ���ļ��� �����ĺ�׺��Ϊ.hpp hpp��Լ�������� ������ǿ��

//template<class T1, class T2>
//class Person4
//{
//public:
//	Person4(T1 name, T2 age);
//
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};
//template<class T1, class T2>
//Person4<T1, T2>::Person4(T1 name, T2 age)
//{
//	this->m_Age = age;
//	this->m_Name = name;
//}
//template<class T1, class T2>
//void Person4<T1, T2>::showPerson()
//{
//	cout << "������ " << this->m_Name << " ���䣺 " << this->m_Age << endl;
//}

int main7()
{
	Person4<string, int> Jerry("Jerry", 18);
	Jerry.showPerson();

	system("pause");
	return 0;
}