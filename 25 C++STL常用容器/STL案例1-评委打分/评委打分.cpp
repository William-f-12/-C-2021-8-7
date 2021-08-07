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
		string name = "选手";
		name += nameSeed[i];
		int score = 0;

		Person p(name, score);
		v.push_back(p);
	}
}

//打分
void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) 
	{
		//将评委的分数放入deque容器中
		deque<int> d;
		for (int i = 0; i < 10; i++) 
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}

		//排序
		sort(d.begin(), d.end());

		//去除最高最低分
		d.pop_back();
		d.pop_front();

		//取平均分
		int sum = 0;
		for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
		{
			sum += *it;
		}
		int avg = sum / d.size();

		//将平均分给选手
		it->m_score = avg;
	}
}

void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << it->m_name << " 分数：" << it->m_score << endl;
	}
}

int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));

	//1. 创建五名选手
	vector<Person> v;
	createPerson(v);

	//2. 给五名选手打分
	setScore(v);

	//3. 显示最后得分
	showScore(v);

	system("pause");
	return 0;
}