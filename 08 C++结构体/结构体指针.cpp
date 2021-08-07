#include<iostream>
using namespace std;

//结构体指针：通过指针访问结构体中的成员
//利用操作符->可以通过结构体指针访问结构体属性

struct Student
{
	string name;
	int age;
	int score;
};

int main3()
{
	//1. 创建学生结构体变量
	Student s = { "wyr", 18, 100 };

	//2. 通过指针指向结构体变量
	//语法： struct（可省略） 结构体名 = &结构体变量名
	Student* p = &s;

	//3. 通过指针访问结构体变量中的数据
	//通过结构体指针访问结构体变量的属性，需要用‘->’操作符
	cout << "姓名： " << p->name << " 年龄： " << p->age << " 分数： " << p->score << endl;

	system("pause");

	return 0;
}