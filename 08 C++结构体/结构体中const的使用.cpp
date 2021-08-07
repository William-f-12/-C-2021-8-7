#include<iostream>
#include<string>
using namespace std;

//const的使用场景

//学生结构体
struct student
{
	string name;
	int age;
	int score;
};

//将函数中的形参改为指针，可以减少内存空间，不会复制新的副本出来
void printStudent(const student* s) //加const防止误操作
{
	//s->age = 150; 误操作, 加入const后，一旦有修改的操作就会报错
	cout << " 姓名: " << s->name << " 年龄: " << s->age << " 分数: " << s->score << endl;
}

int main6()
{
	//创建结构体变量
	student s = { "张三", 15, 70 };

	//通过函数来打印结构体变量的信息
	printStudent(&s);

	system("pause");

	return 0;
}