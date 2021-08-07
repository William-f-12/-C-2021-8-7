#include<iostream>
#include<list>
using namespace std;

//函数原型：
// - front(); 返回第一个元素
// - back(); 返回最后一个元素
//不可以用[]或at方式访问

void test05()
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	cout << "第一个元素为：" << l1.front() << endl;
	cout << "最后一个元素为：" << l1.back() << endl;

	//验证迭代器是不支持随机访问的
	list<int>::iterator it = l1.begin();
	//it += 1; //错误
	it++; //没问题
	it--; //没问题
	//支持双向
}

int main5()
{
	test05();

	system("pause");
	return 0;
}