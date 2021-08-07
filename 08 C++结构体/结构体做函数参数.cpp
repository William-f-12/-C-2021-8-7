#include<iostream>
using namespace std;

//学生结构体
struct student
{
	string name;
	int age;
	int score;
};

//打印学生信息的函数
//1. 值传递: 形参改变实参不变
void printStudent1(student s)
{
	cout << " 姓名: " << s.name << " 年龄: " << s.age << " 分数: " << s.score << endl;
}
//2. 地址传递: 形参改变实参也改变
void printStudent2(student* p)
{
	cout << " 姓名: " << p->name << " 年龄: " << p->age << " 分数: " << p->score << endl;
}

int main5()
{
	//结构体做函数参数
	//将学生传入一个参数中，打印学生身上的所有信息
	student s = { "wyr", 18, 100 }; //创建结构体变量

	printStudent1(s);
	printStudent2(&s);

	system("pause");

	return 0;
}