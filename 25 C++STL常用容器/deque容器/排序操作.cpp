#include<iostream>
#include<deque>
#include<algorithm> // ��׼�㷨ͷ�ļ�
using namespace std;

//�㷨�� sort(iterator beg, iterator end); ��beg��end����Ԫ�ؽ�������

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
	cout << "����ǰ" << endl;
	printDeque(d);

	cout << "�����" << endl;
	//Ĭ������ ��С���� ����
	//����֧��������ʵĵ����������� ����������sort�㷨ֱ�Ӷ����������
	sort(d.begin(), d.end());
	printDeque(d);
}

int main()
{
	test06();

	system("pause");
	return 0;
}