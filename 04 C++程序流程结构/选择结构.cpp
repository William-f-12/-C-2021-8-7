#include<iostream>
using namespace std;

int main1()
{
	//if, else, else-if语句, 嵌套语句
	int score = 0;
	cout << "输入分数" << endl;
	cin >> score;
	cout << "分数为: " << score << endl;

	if (score > 600) {
		cout << "恭喜！一本大学！" << endl;
		if (score > 700) { cout << "北大！" << endl; }
		else if (score > 650) { cout << "清华！" << endl; }
		else { cout << "人大！" << endl; }
	}
	else if (score > 500) {
		cout << "再接再厉!二本。" << endl;
	}
	else if (score > 400) {
		cout << "三本。" << endl;
	}
	else {
		cout << "需要努力！" << endl;
	}

	//三目运算符
	//表达式1 ？ 表达式2 ： 表达式3
	//如果表达式1为真，执行并返回表达式2，否则执行并返回表达式3
	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : b);
	cout << "c = " << c << endl;
	//在C++中三目运算符返回的是变量，可以继续赋值
	(a > b ? a : b) = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//switch语句
	int score1 = 0;
	cout << "请给电影打分： " << endl;
	cin >> score1; 

	switch (score1) 
	{
	case 10:
		cout << "神作" << endl;
		break;
	case 9:	case 8:
		cout << "很好" << endl;
		break;
	case 7:	case 6:
		cout << "一般" << endl;
		break;
	default:
		cout << "烂片" << endl;
		break;
	}
	//switch缺点:判断是只能是整型或者字符型，不可以是一个区间
	//switch优点:结构清晰。执行效率高

	system("pause");

	return 0;
}