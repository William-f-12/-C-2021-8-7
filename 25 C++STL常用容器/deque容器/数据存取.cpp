#include<iostream>
#include<deque>
using namespace std;

//����ԭ�ͣ�
// - at(int idx); ��������idx��ָ������
// - operator[];
// - front();
// - back();

void test05()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	//ͨ��[]��ʽ����Ԫ��
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";
	}
	cout << endl;

	//ͨ��at��ʽ����Ԫ��
	for (int i = 0; i < d.size(); i++) {
		cout << d.at(i) << " ";
	}
	cout << endl;

	//front
	cout << "��һ��Ԫ��: " << d.front() << endl;
	//back
	cout << "���һ��Ԫ��: " << d.back() << endl;
}

int main5()
{
	test05();

	system("pause");
	return 0;
}