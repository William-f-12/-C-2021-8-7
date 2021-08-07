#include<iostream>
#include<deque>
#include<algorithm> // 标准算法头文件
using namespace std;

//算法： sort(iterator beg, iterator end); 对beg和end区间元素进行排序

template<typename T>
void printDeque(const deque<T>& d)
{
	for (typename deque<T>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test06()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);
	cout << "排序前" << endl;
	printDeque(d);

	cout << "排序后" << endl;
	//默认排序 从小到大 升序
	//对于支持随机访问的迭代器的容器 都可以利用sort算法直接对其进行排序
	sort(d.begin(), d.end());
	printDeque(d);
}

int main()
{
	test06();

	system("pause");
	return 0;
}