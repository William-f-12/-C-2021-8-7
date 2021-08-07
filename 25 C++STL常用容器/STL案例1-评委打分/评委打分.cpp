#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<algorithm>
#include<ctime>
using namespace std;

class Person
{
public:
	string m_name;
	int m_score;

	Person(string name, int score)
	{
		this->m_name = name;
		this->m_score = score;
	}
};

void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];
		int score = 0;

		Person p(name, score);
		v.push_back(p);
	}
}

//���
void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) 
	{
		//����ί�ķ�������deque������
		deque<int> d;
		for (int i = 0; i < 10; i++) 
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}

		//����
		sort(d.begin(), d.end());

		//ȥ�������ͷ�
		d.pop_back();
		d.pop_front();

		//ȡƽ����
		int sum = 0;
		for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
		{
			sum += *it;
		}
		int avg = sum / d.size();

		//��ƽ���ָ�ѡ��
		it->m_score = avg;
	}
}

void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << it->m_name << " ������" << it->m_score << endl;
	}
}

int main()
{
	//���������
	srand((unsigned int)time(NULL));

	//1. ��������ѡ��
	vector<Person> v;
	createPerson(v);

	//2. ������ѡ�ִ��
	setScore(v);

	//3. ��ʾ���÷�
	showScore(v);

	system("pause");
	return 0;
}