#include<iostream>
#include<vector>
using namespace std;

//����ԭ�ͣ�
// - at(int idx); ��������idx��ָ������
// - operator[]; ��������idx��ָ������
// - front(); ���������е�һ������Ԫ��
// - back(); �������������һ������Ԫ��

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

	//����[]����������Ԫ��
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	//����at��ʽ����Ԫ��
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	//��һ��Ԫ�غ����һ��Ԫ��
	cout << "��һ��Ԫ�أ� " << v1.front() << endl;
	cout << "���һ��Ԫ�أ� " << v1.back() << endl;
}

int main5()
{
	test05();

	system("pause");
	return 0;
}