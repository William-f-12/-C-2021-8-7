//deque: ˫������ �ɶ�ͷ�˽��в���ɾ������
//deque��vector����
// vector����ͷ������ɾ��Ч�ʵ� ������Խ�� Ч��Խ��
// deque��Զ��� ��ͷ���Ĳ���ɾ���ٶȱ�vector��
// vector����Ԫ��ʱ���ٶȻ��deque�� ��������ڲ�ʵ���й�
//deque ���п����ͻ���������
//dequeҲ֧���������

#include<iostream>
#include<deque>
using namespace std;

//���캯���ĺ���ԭ�ͣ�
// - deque<T> deqT; Ĭ�Ϲ�����ʽ
// - deque(beg, end); ��[beg, end]�����Ԫ�ؿ���������
// - deque(n, elem); ���캯����n��elem����������
// - deque(const deque& deq) �������캯��

template<typename T>
void printDeque(const deque<T>& d)
{
	for (typename deque<T>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	//Ĭ�Ϲ���
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	printDeque(d1);

	//���䷽ʽ
	deque<int> d2(d1.begin(), d1.end());
	printDeque(d2);

	//�����ַ�ʽ
	deque<int> d3(10, 100);
	printDeque(d3);

	//��������
	deque<int> d4(d3);
	printDeque(d4);
}

int main1()
{
	test01();

	system("pause");
	return 0;
}