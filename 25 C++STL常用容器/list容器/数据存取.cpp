#include<iostream>
#include<list>
using namespace std;

//����ԭ�ͣ�
// - front(); ���ص�һ��Ԫ��
// - back(); �������һ��Ԫ��
//��������[]��at��ʽ����

void test05()
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	cout << "��һ��Ԫ��Ϊ��" << l1.front() << endl;
	cout << "���һ��Ԫ��Ϊ��" << l1.back() << endl;

	//��֤�������ǲ�֧��������ʵ�
	list<int>::iterator it = l1.begin();
	//it += 1; //����
	it++; //û����
	it--; //û����
	//֧��˫��
}

int main5()
{
	test05();

	system("pause");
	return 0;
}