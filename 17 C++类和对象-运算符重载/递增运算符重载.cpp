#include<iostream>
using namespace std;

//递增运算符重载
class MyInteger
{
	friend ostream& operator<< (ostream& cout, MyInteger myint);

private:
	int m_int;

public:
	MyInteger(int a)
	{
		m_int = a;
	}

	//重载前置++运算符
	MyInteger& operator++() //返回引用是为了一直对一个数进行递增操作
	{
		m_int++;
		return *this;
	}

	//重载后置++运算符
	//int代表占位参数 可以用于区分前置和后置递增
	MyInteger operator++(int) //后置递增返回值 因为临时值会被清除 不能返回引用
	{
		//先返回结果
		MyInteger temp = *this;

		//后递增
		m_int++;

		//最后返回记录结果
		return temp;

	}
};

ostream& operator<< (ostream& out, MyInteger myint)
{
	out << myint.m_int;
	return out;
}

int main3()
{
	MyInteger myint(0);

	cout << ++myint << endl;
	cout << myint++ << endl;
	cout << myint << endl;

	system("pause");
	return 0;
}