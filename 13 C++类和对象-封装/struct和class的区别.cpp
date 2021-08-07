#include<iostream>
using namespace std;

//在C++中struct和class唯一的区别就在于默认的访问权限不同
//struct的默认访问权限为 公共
//class的默认访问权限为 私有
class C1
{
	int m_A; //默认是私有权限
};

struct C2
{
	int m_A; //默认是共有权限
};

int main2()
{
	C1 c1;
	//c1.m_A = 100;

	C2 c2;
	c2.m_A = 100;

	system("pause");

	return 0;
}