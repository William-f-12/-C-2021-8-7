#include<iostream>
#include<string>
using namespace std;

//封装的意义
//-将属性和行为作为一个整体，表现生活中的事物
// 语法：class 类名{ 访问权限：属性 / 行为 }；
// 圆类
const double PI = 3.14; //圆周率

class Circle
{
	//访问权限
public: //公共权限

	//属性
	int m_r; //半径

	//行为
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};

//学生类
class Student
{
public:
	//类中的属性和行为统一称为 成员
	//属性也称为 成员属性 或 成员变量
	//行为也称为 成员函数 或 成员方法

	string name;
	int id;

	void show()
	{
		cout << "name: " << name << endl;
		cout << "id: " << id << endl;
	}
	//给姓名赋值
	void setName(string Name)
	{
		name = Name;
	}
};

//-将属性和行为加以权限控制
// 访问权限有三种： 
//1. public		公共权限	成员：类内可以访问 类外也可以访问
//2. protected	保护权限 成员：类内可以访问 类外不可以访问 子类可以访问父类中保护的内容
//3. private	私有权限 成员：类内可以访问 类外不可以访问 子类不能访问父类中隐私的内容

class Person
{
public:
	//公共权限
	string m_Name;

	void func()
	{
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 123456;
	}

protected:
	//保护权限
	string m_Car;

private:
	//私有权限
	int m_Password;
};

int main1()
{
	//通过圆类创建具体的圆（对象）
	Circle c1;
	c1.m_r = 10;
	cout << "圆的周长为" << c1.calculateZC() << endl;

	//给学生类创建具体学生，实例化对象
	Student s1;
	s1.name = "张三";
	s1.id = 20230002;
	s1.show();
	s1.setName("李四");
	s1.show();


	Person p1;
	p1.m_Name = "李四";
	// p1.m_Car = "奔驰"; 保护权限内容，类外访问不到
	// p1.m_Password = 12123; 私有权限内容。类外访问不到
	p1.func();

	system("pause");

	return 0;
}