#include<iostream>
#include<vector>
using namespace std;

//����ԭ�ͣ�
// - swap(vec); ��vec�뱾���Ԫ�ػ���

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
	//����
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

	cout << "������" << endl;

	v1.swap(v2);
	printVector(v1);
	cout << v1.capacity() << endl;
	printVector(v2);
	cout << v2.capacity() << endl;

	//ʵ����;
	//����swap���������ڴ�ռ�
	vector<int> v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}

	cout << "\nv������Ϊ: " << v.capacity() << endl;
	cout << "v�Ĵ�СΪ: " << v.size() << endl;

	v.resize(3);
	cout << "v������Ϊ: " << v.capacity() << endl;
	cout << "v�Ĵ�СΪ: " << v.size() << endl;

	//����swap�����ڴ�
	vector<int>(v).swap(v);
	cout << "v������Ϊ: " << v.capacity() << endl;
	cout << "v�Ĵ�СΪ: " << v.size() << endl;
}

int main6()
{
	test06();

	system("pause");
	return 0;
}