#include<iostream>
#include<vector>
using namespace std;

//函数原型
// - push_back(ele); 尾部插入元素ele
// - pop_back(); 删除最后一个元素
// - insert(const_iterator pos, ele) 迭代器指向位置pos插入元素ele
// - insert(const_iterator pos, int count, ele); 迭代器指向位置pos插入count个元素ele
// - erase(const_iterator pos); 删除迭代器指向元素
// - erase(const_iterator start, const_iterator end); 删除迭代器从start到end之间的元素
// - clear(); 删除容器中所有元素

template<typename T>
void printVector(vector<T>& v)
{
	for (typename vector<T>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test04()
{
	vector<int> v1;
	//尾插法
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	printVector(v1);
	
	//尾删
	v1.pop_back();
	printVector(v1);

	//插入 第一个参数是迭代器
	v1.insert(v1.begin(), 100);
	printVector(v1);

	v1.insert(v1.begin(), 2, 120);
	printVector(v1);

	//删除
	v1.erase(v1.begin());
	printVector(v1);

	//清空
	//v1.erase(v1.begin(), v1.end());
	v1.clear();
	printVector(v1);
}

int main4()
{
	test04();

	system("pause");
	return 0;
}