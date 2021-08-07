#pragma once
#include<iostream>
#include<string>
using namespace std;

template<class T1, class T2>
class Person4
{
public:
	Person4(T1 name, T2 age);

	void showPerson();

	T1 m_Name;
	T2 m_Age;
};

template<class T1, class T2>
Person4<T1, T2>::Person4(T1 name, T2 age)
{
	this->m_Age = age;
	this->m_Name = name;
}

template<class T1, class T2>
void Person4<T1, T2>::showPerson()
{
	cout << "ÐÕÃû£º " << this->m_Name << " ÄêÁä£º " << this->m_Age << endl;
}