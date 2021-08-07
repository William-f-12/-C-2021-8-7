#include<iostream>
#include<deque>
using namespace std;

// - deque.empty() �ж������Ƿ�Ϊ��
// - deque.size() ����������Ԫ�ظ���
// - deque.resize(num) ͬvector
// - deque.resize(num, elem) ͬvector

template<typename T>
void printDeque(const deque<T>& d)
{
	for (typename deque<T>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test03()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	printDeque(d1);
	if (d1.empty()) {
		cout << "d1Ϊ��" << endl;
	}
	else {
		cout << "d1��Ϊ��" << endl;
		cout << "d1�Ĵ�СΪ" << d1.size() << endl;
		//deque����û����������
	}

	//����ָ����С
	d1.resize(15, 1);
	printDeque(d1);

	d1.resize(5);
	printDeque(d1);
}

int main3()
{
	test03();

	system("pause");
	return 0;
}