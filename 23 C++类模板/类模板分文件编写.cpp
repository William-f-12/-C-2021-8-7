#include<iostream>
#include<string>
using namespace std;
//第一种解决方式 直接包含源文件
// #include"Person4.cpp"
//第二种解决方式 将.h 和.cpp中的内容写到一起 将后缀名改为.hpp文件
#include"Person4.hpp"


//类模板中成员函数创建时机是在调用阶段 导致分文件编写时链接不到

//解决方式1： 直接包含.cpp源文件
//解决方式2： 将声明和实现写到同一个文件中 并更改后缀名为.hpp hpp是约定的名称 并不是强制

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
//	cout << "姓名： " << this->m_Name << " 年龄： " << this->m_Age << endl;
//}

int main7()
{
	Person4<string, int> Jerry("Jerry", 18);
	Jerry.showPerson();

	system("pause");
	return 0;
}