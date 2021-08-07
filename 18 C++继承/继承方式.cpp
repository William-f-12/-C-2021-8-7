#include<iostream>
using namespace std;

//继承方式一共有三种：
//公共继承
//保护继承
//私有继承

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class son1 : public Base //公共继承
{
public:
	void func()
	{
		m_A = 10; //父类中公共权限成员 子类中依然是 公共权限
		m_B = 10; //父类中保护权限成员 子类中依然是 保护权限
		//m_C = 10; 父类中私有权限成员 子类访问不到
	}
};

void test01()
{
	son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100; 到son1中 m_B是保护权限 类外访问不到
}

class son2 :protected Base //保护继承
{
public:
	void func()
	{
		m_A = 10; //父类中公共权限成员 子类中变成 保护权限
		m_B = 10; //父类中保护权限成员 子类中依然是 保护权限
		//m_C = 10; 父类中私有权限成员 子类访问不到
	}
};

void test02()
{
	son2 s2;
	//s2.m_A = 100; 到son2中 m_B是保护权限 类外访问不到
	//s2.m_B = 100; 到son2中 m_B是保护权限 类外访问不到
}

class son3 :private Base
{
public:
	void func()
	{
		m_A = 10; //父类中公共权限成员 子类中变成 私有权限
		m_B = 10; //父类中保护权限成员 子类中变成 私有权限
		//m_C = 10; 父类中私有权限成员 子类访问不到
	}
};

class grandson3 :public son3
{
public:
	void func()
	{
		//m_A = 1001; 通过私有继承 到了son3中 m_A，m_B都变为私有权限成员
		//m_B = 1001; 访问不到
	}
};

void test03()
{
	son3 s3;
	//s3.m_A = 100; 到son3中 m_B是私有权限 类外访问不到
	//s3.m_B = 100; 到son3中 m_B是私有权限 类外访问不到
}

int main2()
{
	cout << "看代码" << endl;

	system("pause");
	return 0;
}