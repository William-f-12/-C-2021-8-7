#include<iostream>
#include<string>
using namespace std;

//将成员属性设置为私有
//优点1：可以自己控制读写权限
//优点2：对于写权限，我们可以检测数据的有效性

class Person
{
public:
	//写姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//读姓名
	string getName()
	{
		return m_Name;
	}
	//设置年龄 范围必须是0-150
	void setAge(int age)
	{
		if (age >= 0 && age <= 150) {
			m_Age = age;
		}
		else {
			m_Age = 0;
			cout << "非法年龄" << endl;
		}
	}
	//获取年龄
	int getAge()
	{
		//m_Age = 0; //初始化为0岁
		return m_Age;
	}
	//设置情人
	void setLover(string name)
	{
		Lover = name;
	}

private:
	//姓名 可读可写
	string m_Name;
	//情人 只写
	string Lover;
	//年龄 只读
	int m_Age;
};

int main3()
{
	Person p;
	p.setName("张三");
	p.setAge(160);
	cout << "姓名为" << p.getName() << endl;
	cout << "年龄为" << p.getAge() << endl;
	p.setLover("wyr");

	system("pause");

	return 0;
}