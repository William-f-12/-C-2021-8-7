#include<iostream>
#include<list>
using namespace std;

//函数原型:
// - push_back(elem); 在容器尾部加入一个元素
// - pop_back(); 删除容器中最后一个元素
// - push_front(elem); 容器开头插入一个元素
// - pop_front(); 容器开头删除一个元素
// - insert(pos, elem); 在pos位置插入elem元素的拷贝 返回新数据的位置
// - insert(pos, n, elem); 在pos位置插入n个elem数据 无返回值
// - insert(pos, beg, end); 早pos位置插入[beg, end)区间的数据 无返回值
// - clear(); 移除容器中的所有数据
// - erase(beg, end); 删除[beg, end)区间的数据 返回下一个数据的位置
// - erase(pos); 删除pos位置的数据 返回下一个数据的位置
// - remove(elem); 删除容器中所有与elem值匹配的元素

template<typename T>
void printList(const list<T>& l)
{
	for (typename list<T>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test04()
{
	list<int> l;
	//尾插
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	//头插
	l.push_front(10);
	l.push_front(20);
	l.push_front(30);

	printList(l);

	//尾删
	l.pop_back();
	printList(l);
	//头删
	l.pop_front();
	printList(l);

	//insert插入
	l.insert(++l.begin(), 1000);
	printList(l);

	//删除
	l.erase(l.begin());
	printList(l);

	//移除
	l.push_back(10);
	printList(l);
	l.remove(10);
	printList(l);

	//清空
	l.clear();
	printList(l);
}

int main4()
{
	test04();

	system("pause");
	return 0;
}