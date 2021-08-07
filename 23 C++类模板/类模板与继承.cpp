#include<iostream>
using namespace std;

//当类模板碰到继承是 需要注意：
// - 当子类继承的父类是一个类模板时 子类在声明的时候 要指定出父类中T的类型
// - 如果不指定 编译器无法给予子类分配内存
// - 如果想灵活指定出父类中T的类型 子类也需变为类模板

template<class T>
class Base
{
public:
	T m;
};

//class Son :public Base //错误 必须要知道父类中的T类型 才能继承给子类
class Son1 : public Base<int>
{

};

//灵活指定父类中T类型
template<class T1, class T2>
class Son2 : public Base<T1>
{
	T2 m;
};

int main5()
{
	Son1 s1;
	Son2<char, int> s2;

	system("pause");
	return 0;
}