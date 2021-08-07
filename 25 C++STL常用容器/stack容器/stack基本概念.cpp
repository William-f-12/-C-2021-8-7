//stack��һ���Ƚ����(First In Last Out, FILO)�����ݽṹ ��ֻ��һ������
//������������� 
//������empty�ж������Ƿ�Ϊ��
//������size��������Ԫ�ظ���

#include<iostream>
#include<stack>
using namespace std;

//���ýӿ�
//���캯����
// - stack<T> stk; Ĭ�Ϲ���
// - stack(const stack& stk) ��������
//��ֵ����:
// - stack& operator=(const stack& stk); ���صȺŲ�����
//���ݴ�ȡ��
// - push(elem); ��ջ�����Ԫ��
// - pop(); ��ջ���Ƴ���һ��Ԫ��
// - top(); ����ջ��Ԫ��
//��С����:
// - empty(); �ж�ջ�Ƿ�Ϊ��
// - size(); ����ջ�Ĵ�С

void test01()
{
	stack<int> s;
	//��ջ
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	cout << "ջ�Ĵ�С�� " << s.size() << endl;

	//ֻҪջ��Ϊ�� �鿴ջ�� ��ִ�г�ջ����
	while (!s.empty())
	{
		//�鿴ջ��Ԫ��
		cout << "ջ��Ԫ��Ϊ�� " << s.top() << endl;
		//��ջ
		s.pop();
	}
	cout << "ջ�Ĵ�С�� " << s.size() << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}