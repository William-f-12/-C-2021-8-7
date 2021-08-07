//queue��һ���Ƚ��ȳ�(First in First Out, FIFO)�����ݽṹ ������������
//���������
//ֻ�ж�ͷ�Ͷ�β�ܱ�������

#include<iostream>
#include<queue>
#include<string>
using namespace std;

//���ⳣ�ýӿ�
//���캯��:
// - queue<T> que;
// - queue(const queue& que);
//��ֵ����:
// - queue& operator=(const queue& que);
//���ݴ�ȡ:
// - push(elem); ����β���Ԫ��
// - pop(); �Ӷ�ͷ�Ƴ���һ��Ԫ��
// - back(); �������һ��Ԫ��
// - front(); ���ص�һ��Ԫ��
//��С������
// - empty(); �ж������Ƿ�Ϊ��
// - size(); ���ض��д�С

class Person
{
public:
	string m_name;
	int m_age;

	Person(int age, string name)
	{
		this->m_age = age;
		this->m_name = name;
	}
};

void test01()
{
	//��������
	queue<Person> q;

	//׼������
	Person p1(30, "��ɮ");
	Person p2(1200, "С��");
	Person p3(1000, "С��");

	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	cout << "���д�С�� " << q.size() << endl;

	//ֻҪ���в�Ϊ�� �鿴��ͷ �鿴��β ����
	while (!q.empty())
	{
		//�鿴��ͷ
		cout << "��ͷ- ����: " << q.front().m_name << " ����: " << q.front().m_age << endl;

		//�鿴��β
		cout << "��β- ����: " << q.back().m_name << " ����: " << q.back().m_age << endl;

		//����
		q.pop();
	}
	cout << "���д�С�� " << q.size() << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}