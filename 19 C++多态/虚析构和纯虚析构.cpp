#include<iostream>
#include<string>
using namespace std;

//多态使用时 如果子类中有属性开辟到堆区 那么父类指针在释放时无法调用到子类的析构代码
//解决方式： 将父类中的析构函数改为 虚析构 或者 纯虚析构

//虚析构和纯虚析构共性：
// -可以解决父类指针释放子类对象
// -都需要有具体的函数实现
//虚析构和纯虚析构区别：
// -如果是纯虚析构 该类属于抽象类 无法实例化对象

//虚析构语法：	virtual ~类名() {}
//纯虚析构语法： virtual ~类名() = 0;		类名::~类名() {}

class animal
{
public:
	virtual void speak() = 0; //纯虚函数

	animal()
	{
		cout << "animal的构造函数调用" << endl;
	}
	//virtual ~animal() //利用虚析构可以解决 父类指针释放子类对象时不干净的问题
	//{
	//	cout << "animal的析构函数调用" << endl;
	//}

	virtual ~animal() = 0; //纯虚析构 有了纯虚析构 这个类变成抽象类
};
animal::~animal() //纯虚析构的函数实现
{
	cout << "animal的纯虚析构函数调用" << endl;
}

class cat : public animal
{
public:
	string* m_Name;

	cat(string name)
	{
		cout << "cat的构造函数调用" << endl;
		m_Name = new string(name);
	}
	~cat()
	{
		if (m_Name != NULL)
		{
			cout << "cat的析构函数调用" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}

	virtual void speak()
	{
		cout << *m_Name << "小猫在说话" << endl;
	}
};

//如果子类中没有堆区数据 可以不写虚析构和纯虚析构

int main5()
{
	animal* animal = new cat("Tom");
	animal->speak();
	delete animal; //父类指针在析构时 不会调用子类子类中析构函数 导致如果子类中有堆取数据 会导致内存泄漏

	system("pause");
	return 0;
}