#include<iostream>
#include<deque>
using namespace std;

//����ԭ�ͣ�
// - deque& operator=(const deque& deq); ���صȺŲ�����
// - assign(beg, end); ��[beg, end]��������ݿ���������
// - assign(n, elem); ��n��elem��ֵ������

template<typename T>
void printDeque(const deque<T>& d)
{
	for (typename deque<T>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test02()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	//�Ⱥ�
	deque<int> d2;
	d2 = d1;
	printDeque(d2);

	//assign
	deque<int> d3;
	d3.assign(d1.begin(), d1.end());
	printDeque(d3);

	deque<int> d4;
	d4.assign(10, 100);
	printDeque(d4);
}

int main2()
{
	test02();

	system("pause");
	return 0;
}