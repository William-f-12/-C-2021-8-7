#include<iostream>
using namespace std;

//左移运算符重载
class People
{
friend ostream& operator<<(ostream& cout, People& p); //用友元帮助全局函数访问私有成员

public:
	People(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

private:
	int m_A;
	int m_B;

	//通常不会用成员函数重载左移运算符 因为无法实现cout在左侧
	/*void operator<<( cout )
	{

	}*/
};

//只能利用全局函数重载左移运算符
ostream& operator<<(ostream &cout, People &p)
{
	cout << "m_A = " << p.m_A << " p.m_B = " << p.m_B;
	return cout;
}

int main2()
{
	People p(10, 10);
	cout << p << endl;

	system("pause");
	return 0;
}