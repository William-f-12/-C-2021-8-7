#include<iostream>
#include<list>
using namespace std;

//����ԭ��:
// - push_back(elem); ������β������һ��Ԫ��
// - pop_back(); ɾ�����������һ��Ԫ��
// - push_front(elem); ������ͷ����һ��Ԫ��
// - pop_front(); ������ͷɾ��һ��Ԫ��
// - insert(pos, elem); ��posλ�ò���elemԪ�صĿ��� ���������ݵ�λ��
// - insert(pos, n, elem); ��posλ�ò���n��elem���� �޷���ֵ
// - insert(pos, beg, end); ��posλ�ò���[beg, end)��������� �޷���ֵ
// - clear(); �Ƴ������е���������
// - erase(beg, end); ɾ��[beg, end)��������� ������һ�����ݵ�λ��
// - erase(pos); ɾ��posλ�õ����� ������һ�����ݵ�λ��
// - remove(elem); ɾ��������������elemֵƥ���Ԫ��

template<typename T>
void printList(const list<T>& l)
{
	for (typename list<T>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test04()
{
	list<int> l;
	//β��
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	//ͷ��
	l.push_front(10);
	l.push_front(20);
	l.push_front(30);

	printList(l);

	//βɾ
	l.pop_back();
	printList(l);
	//ͷɾ
	l.pop_front();
	printList(l);

	//insert����
	l.insert(++l.begin(), 1000);
	printList(l);

	//ɾ��
	l.erase(l.begin());
	printList(l);

	//�Ƴ�
	l.push_back(10);
	printList(l);
	l.remove(10);
	printList(l);

	//���
	l.clear();
	printList(l);
}

int main4()
{
	test04();

	system("pause");
	return 0;
}