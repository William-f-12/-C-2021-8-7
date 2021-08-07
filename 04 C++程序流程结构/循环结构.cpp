#include<iostream>
#include<ctime>//time系统时间头文件
using namespace std;

int main2()
{
	//while循环

	//int num = 0;
	//while (num < 10) {
	//	cout << num << endl;
	//	num++;
	//}

	//添加随机数种子，利用当前系统时间生成随机数
	srand((unsigned int)time(NULL));
	//生成随机数
	int num = rand() % 100 + 1;
	cout << num << endl;

	double val = 0;
	cin >> val;

	while (val != num) {
		if (val > num) { cout << "猜测过大" << endl; }
		else { cout << "猜测过小" << endl; }
		cin >> val;
	}
	cout << "恭喜！" << endl;

	//do...while循环
	//先执行循环语句，再判断循环条件
	int num1 = 100;
	int ge = 0;
	int shi = 0;
	int bai = 0;

	do {
		ge = num1 % 10;
		shi = num1 / 10 % 10;
		bai = num1 / 100;

		if ((ge*ge*ge + shi*shi*shi + bai*bai*bai) == num1) { cout << num1 << endl; }
		num1++;
	} 	while (num1 < 1000);

	//for循环
	for (int i = 0/*0*/; i < 10/*1*/; i++/*3*/) { cout << i << endl;/*2*/ }
	//执行顺序： 0123123123...

	for (int a = 1; a <= 100; a++) {
		if (a % 7 == 0 || a % 10 == 7 || a / 10 == 7) {
			cout << "敲桌子" << endl;
		}
		else { cout << a << endl; }
	}

	//嵌套循环
	for (int n = 1; n < 10; n++) {
		for (int m = 1; m <= n; m++) {
			cout << m << "x" << n << "=" << m * n << "\t";
		}
		cout << endl;
	}
	

	system("pause");

	return 0;
}