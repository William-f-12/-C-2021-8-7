#include<iostream>
#include<deque>
using namespace std;

//����ԭ��
//���˲���ɾ����
// - push_back(elem);
// - push_front(elem);
// - pop_back();
// - pop_front();
//ָ��λ�ò�����
// - insert(pos, elem); ��posλ�ò���һ��elemԪ�صĿ��� ���������ݵ�λ��
// - insert(pos, n, elem); ��posλ�ò���n��elem���� �޷���ֵ
// - insert(pos, beg, end); ��posλ�ò���[beg, end)��������� �޷���ֵ
// - clear(); ���������������
// - erase(beg, end); ���[beg, end)��������� ������һ�����ݵ�λ��
// - erase(pos); ���posλ�õ����� ������һ�����ݵ�λ��

template<typename T>
void printDeque(const deque<T>& d)
{
	for (typename deque<T>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test04()
{
	//���˲���
	deque<int> d1;
	//β��
	d1.push_back(10);
	d1.push_back(20);
	//ͷ��
	d1.push_front(30);
	d1.push_front(40);
	//40 30 10 20
	printDeque(d1);

	//βɾ
	d1.pop_back();
	printDeque(d1);
	//ͷɾ
	d1.pop_front();
	printDeque(d1);

	//ָ��λ�ò���
	//insert
	d1.insert(d1.begin(), 100);
	printDeque(d1);
	d1.insert(d1.begin(), 2, 200);
	printDeque(d1);
	//��������в���
	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d1.insert(d1.begin(), d2.begin(), d2.end());
	printDeque(d1);

	//ɾ��
	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);
	printDeque(d1);

	//��������ɾ��
	//d1.erase(d1.begin(), d1.end());
	//���
	d1.clear();
	printDeque(d1);
}

int main4()
{
	test04();

	system("pause");
	return 0;
}