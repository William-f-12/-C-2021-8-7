#include<iostream>
#include<vector>
using namespace std;

//����ԭ�ͣ�
// - empty(); �ж������Ƿ�Ϊ��
// - capacity(); ����������
// - size(); ����������Ԫ�ظ���
// - resize(int num); ����ָ�������ĳ���Ϊnum �������䳤 ����Ĭ��ֵ�����λ��
//					  ��������� ��ĩβ�����������ȵ�Ԫ�ر�ɾ��
// - resize(int num, elem); ����ָ�������ĳ���Ϊnum �������䳤 ����elem�����λ��
//							��������� ��ĩβ�����������ȵ�Ԫ�ر�ɾ��

template<typename T>
void printVector(vector<T>& v)
{
	for (typename vector<T>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test03()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	if (v1.empty()) // Ϊ�� ��������Ϊ��
	{
		cout << "v1Ϊ��" << endl;
	}
	else
	{
		cout << "v1��Ϊ��" << endl;
		cout << "v1������Ϊ�� " << v1.capacity() << endl;
		cout << "v1�Ĵ�СΪ�� " << v1.size() << endl;
	}

	//����ָ����С
	v1.resize(15, 100);
	printVector(v1);
	cout << "v1������Ϊ�� " << v1.capacity() << endl;
	cout << "v1�Ĵ�СΪ�� " << v1.size() << endl;

	v1.resize(5);
	printVector(v1);
	cout << "v1������Ϊ�� " << v1.capacity() << endl;
	cout << "v1�Ĵ�СΪ�� " << v1.size() << endl;
}

int main3()
{
	test03();

	system("pause");
	return 0;
}