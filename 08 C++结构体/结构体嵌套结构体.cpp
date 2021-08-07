#include<iostream>
using namespace std;

//学生结构体
struct student
{
	string name;
	int age;
	int score;
};

//老师结构体
struct teacher
{
	int id;
	string name;
	int age;
	student stu; //老师结构体中学生的结构体
};

int main4()
{
	//结构体嵌套结构体
	teacher t;
	t.id = 12306;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "老师姓名：" << t.name << " 老师编号：" << t.id << " 老师年龄：" << t.age
		<< " 老师辅导学生姓名：" << t.stu.name << " 学生年龄：" << t.stu.age
		<< " 学生分数：" << t.stu.score << endl;

	system("pause");

	return 0;
}