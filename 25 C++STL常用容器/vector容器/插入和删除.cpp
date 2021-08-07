#include<iostream>
#include<vector>
using namespace std;

//����ԭ��
// - push_back(ele); β������Ԫ��ele
// - pop_back(); ɾ�����һ��Ԫ��
// - insert(const_iterator pos, ele) ������ָ��λ��pos����Ԫ��ele
// - insert(const_iterator pos, int count, ele); ������ָ��λ��pos����count��Ԫ��ele
// - erase(const_iterator pos); ɾ��������ָ��Ԫ��
// - erase(const_iterator start, const_iterator end); ɾ����������start��end֮���Ԫ��
// - clear(); ɾ������������Ԫ��

template<typename T>
void printVector(vector<T>& v)
{
	for (typename vector<T>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test04()
{
	vector<int> v1;
	//β�巨
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	printVector(v1);
	
	//βɾ
	v1.pop_back();
	printVector(v1);

	//���� ��һ�������ǵ�����
	v1.insert(v1.begin(), 100);
	printVector(v1);

	v1.insert(v1.begin(), 2, 120);
	printVector(v1);

	//ɾ��
	v1.erase(v1.begin());
	printVector(v1);

	//���
	//v1.erase(v1.begin(), v1.end());
	v1.clear();
	printVector(v1);
}

int main4()
{
	test04();

	system("pause");
	return 0;
}