#include<iostream>
#include<vector>
using namespace std;

//函数原型：
// - at(int idx); 返回索引idx所指的数据
// - operator[]; 返回索引idx所指的数据
// - front(); 返回容器中第一个数据元素
// - back(); 返回容器中最后一个数据元素

template<typename T>
void printVector(vector<T>& v)
{
	for (typename vector<T>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test05()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}

	//利用[]访问数组中元素
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	//利用at方式访问元素
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	//第一个元素和最后一个元素
	cout << "第一个元素： " << v1.front() << endl;
	cout << "最后一个元素： " << v1.back() << endl;
}

int main5()
{
	test05();

	system("pause");
	return 0;
}