#include<iostream>
#include<deque>
using namespace std;

//函数原型：
// - at(int idx); 返回索引idx所指的数据
// - operator[];
// - front();
// - back();

void test05()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	//通过[]方式访问元素
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";
	}
	cout << endl;

	//通过at方式访问元素
	for (int i = 0; i < d.size(); i++) {
		cout << d.at(i) << " ";
	}
	cout << endl;

	//front
	cout << "第一个元素: " << d.front() << endl;
	//back
	cout << "最后一个元素: " << d.back() << endl;
}

int main5()
{
	test05();

	system("pause");
	return 0;
}