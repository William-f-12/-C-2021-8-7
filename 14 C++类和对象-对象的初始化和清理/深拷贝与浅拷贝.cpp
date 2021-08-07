#include<iostream>
using namespace std;

//深拷贝与浅拷贝

//浅拷贝：简单的赋值拷贝
//深拷贝：在堆中重新申请空间 进行拷贝操作

class Person5
{
public:
	int m_Age;
	int* m_Height;

	Person5()
	{
		cout << "Person5的默认构造函数调用" << endl;
	}
	Person5(int age, int height)
	{
		m_Age = age;
		m_Height = new int(height);
		cout << "Person5的有参构造函数调用" << endl;
	}
	//自己实现拷贝构造函数 解决浅拷贝带来的问题
	Person5(const Person5& p)
	{
		
		m_Age = p.m_Age;
		//m_Height = p.m_Height; 编译器默认的代码
		//深拷贝操作
		m_Height = new int(*p.m_Height);
		cout << "Person5的拷贝构造函数调用" << endl;
	}

	~Person5()
	{
		//析构代码 将堆区开辟数据做释放操作
		if (m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person5的析构函数调用" << endl;
	}
};

//如果属性有在堆区开辟的 一定要自己写个拷贝构造函数 防止浅拷贝造成问题

void test_0()
{
	Person5 p1(18, 160);
	cout << "p1的年龄为：" << p1.m_Age << "身高为：" << *p1.m_Height << endl;

	Person5 p2(p1);
	cout << "p2的年龄为：" << p2.m_Age << "身高为：" << *p2.m_Height << endl;

	//如果利用编译器提供的拷贝构造函数 会做浅拷贝操作
	//浅拷贝带来的问题就是 堆区的内存重复释放
	//浅拷贝的问题要用深拷贝来解决
}

int main5()
{
	test_0();

	system("pause");
	return 0;
}