#include<iostream>
#include<string>
using namespace std;

//语法： struct 结构体名 { 结构体成员列表 }；

//创建学生数据类型
//自定义数据类型，一些类型集合组成的一个类型
struct Student
{
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
}s3; //

int main1()
{
	//通过结构体创建变量有三种方式：
	//1. struct 结构体名 变量名；
	//在c++中，struct 可以省略
	Student s1;
	//给s1属性赋值, 利用.访问成员
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;

	cout << "姓名: " << s1.name << " 年龄: " << s1.age << endl;

	//2. struct 结构体名 变量名 = { 成员1值, 成员2值... };
	struct Student s2 = { "李四", 19, 80 };
	cout << "姓名: " << s2.name << " 年龄: " << s2.age << endl;

	//3. 定义结构体时顺便创建变量
	s3.name = "wang";
	s3.age = 20;
	s3.score = 60;	
	
	cout << "姓名: " << s3.name << " 年龄: " << s3.age << endl;


	system("pause");

	return 0;
}