#include<iostream>
#include<vector>
using namespace std;

//函数原型：
// - vector& operator=(const vector& vec); 重载等号运算符
// - assign(beg, end); 将[beg, end]区间中的数据赋值给本身
// - assign(n, elem); 将n个elem赋值给本身

template<typename T>
void printVector(vector<T>& v)
{
	for (typename vector<T>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test02()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	// operator=
	vector<int> v2;
	v2 = v1;
	printVector(v2);

	//assign
	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	printVector(v3);

	vector<int> v4;
	v4.assign(10, 100);
	printVector(v4);
}

int main2()
{
	test02();

	system("pause");
	return 0;
}