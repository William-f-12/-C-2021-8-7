#include<iostream>
#include<vector>
using namespace std;

//Ԥ���ռ䣺����vector�ڶ�̬��չ����ʱ����չ����
//����ԭ�ͣ� reserve(int len); ����Ԥ��len��Ԫ�س��� Ԥ��λ�ò���ʼ�� Ԫ�ز��ɷ���

void test07()
{
	vector<int> v;

	//����reserveԤ���ռ�
	v.reserve(100000);

	int num = 0;
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);

		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << "num = " << num << endl;
}

int main()
{
	test07();

	system("pause");
	return 0;
}