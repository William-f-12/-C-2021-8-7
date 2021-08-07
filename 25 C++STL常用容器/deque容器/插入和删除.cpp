#include<iostream>
#include<deque>
using namespace std;

//函数原型
//两端插入删除：
// - push_back(elem);
// - push_front(elem);
// - pop_back();
// - pop_front();
//指定位置操作：
// - insert(pos, elem); 在pos位置插入一个elem元素的拷贝 返回新数据的位置
// - insert(pos, n, elem); 在pos位置插入n个elem数据 无返回值
// - insert(pos, beg, end); 在pos位置插入[beg, end)区间的数据 无返回值
// - clear(); 清空容器所有数据
// - erase(beg, end); 清除[beg, end)区间的数据 返回下一个数据的位置
// - erase(pos); 清除pos位置的数据 返回下一个数据的位置

template<typename T>
void printDeque(const deque<T>& d)
{
	for (typename deque<T>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test04()
{
	//两端操作
	deque<int> d1;
	//尾插
	d1.push_back(10);
	d1.push_back(20);
	//头插
	d1.push_front(30);
	d1.push_front(40);
	//40 30 10 20
	printDeque(d1);

	//尾删
	d1.pop_back();
	printDeque(d1);
	//头删
	d1.pop_front();
	printDeque(d1);

	//指定位置操作
	//insert
	d1.insert(d1.begin(), 100);
	printDeque(d1);
	d1.insert(d1.begin(), 2, 200);
	printDeque(d1);
	//按区间进行插入
	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d1.insert(d1.begin(), d2.begin(), d2.end());
	printDeque(d1);

	//删除
	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);
	printDeque(d1);

	//按照区间删除
	//d1.erase(d1.begin(), d1.end());
	//清空
	d1.clear();
	printDeque(d1);
}

int main4()
{
	test04();

	system("pause");
	return 0;
}