#include<iostream>
using namespace std;

//继承实现页面
//继承的好处：减少重复代码
//语法：class 子类 : 继承方式 父类

//子类也称为 派生类
//父类也称为 基类

//公共页面类
class BasePage
{
public:
	void header()
	{
		cout << "首页，公开课，登录，注册……（公共头部）" << endl;
	}
	void footer()
	{
		cout << "联系方式，地址（公共底部）" << endl;
	}
};

//java页面
class Java :public BasePage
{
public:
	void content()
	{
		cout << "JAVA学科视频" << endl;
	}
};

//python页面
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Python学科视频" << endl;
	}
};

//c++页面
class CPP :public BasePage
{
public:
	void content()
	{
		cout << "C++学科视频" << endl;
	}
};

void test1()
{
	cout << "JAVA页面" << endl;
	Java ja;
	ja.header();
	ja.content();
	ja.footer();

	cout << "Python页面" << endl;
	Python py;
	py.header();
	py.content();
	py.footer();

	cout << "C++页面" << endl;
	CPP c;
	c.header();
	c.content();
	c.footer();
}

int main1()
{
	test1();

	system("pause");
	return 0;
}