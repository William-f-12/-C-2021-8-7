#include<iostream>
#include<vector>
using namespace std;

//函数原型：
// - swap(vec); 将vec与本身的元素互换

template<typename T>
void printVector(vector<T>& v)
{
	for (typename vector<T>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test06()
{
	//交换
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);
	cout << v1.capacity() << endl;

	vector<int> v2;
	for (int i = 9; i > 0; i--) {
		v2.push_back(i);
	}
	printVector(v2);
	cout << v2.capacity() << endl;

	cout << "交换后" << endl;

	v1.swap(v2);
	printVector(v1);
	cout << v1.capacity() << endl;
	printVector(v2);
	cout << v2.capacity() << endl;

	//实际用途
	//巧用swap可以收缩内存空间
	vector<int> v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}

	cout << "\nv的容量为: " << v.capacity() << endl;
	cout << "v的大小为: " << v.size() << endl;

	v.resize(3);
	cout << "v的容量为: " << v.capacity() << endl;
	cout << "v的大小为: " << v.size() << endl;

	//巧用swap收缩内存
	vector<int>(v).swap(v);
	cout << "v的容量为: " << v.capacity() << endl;
	cout << "v的大小为: " << v.size() << endl;
}

int main6()
{
	test06();

	system("pause");
	return 0;
}