#include<iostream>
using namespace std;

int main()
{
	//break: 
	//	1. 在switch条件语句中，作用是终止case并跳出switch
	cout << "选择副本难度:" << endl;
	cout << "1. 普通" << endl;
	cout << "2. 中等" << endl;
	cout << "3. 困难" << endl;

	int select = 0;
	cin >> select;

	switch (select) {
	case 1:
		cout << "您选择的是普通难度" << endl;
		break;
	case 2:
		cout << "您选择的是中等难度" << endl;
		break;
	case 3:
		cout << "您选择的是困难难度" << endl;
		break;
	}

	//	2. 在循环语句中，作用是跳出当前的循环语句
	for (int i = 0; i < 10; i++) {
		if (i == 5) { break; }
		cout << i << endl;
	}

	//	3. 在嵌套循环中，跳出最近的内层循环语句
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 5) { break; }
			cout << "* ";
		}
		cout << endl;
	}

	//continue: 在循环语句中，跳过本次循环中余下尚未执行的语句，执行下一次循环
	for (int i = 0; i <= 100; i++) {
		if (i % 2 == 0) { continue; }
		cout << i << endl;
	}

	//goto 标记: 如果标记的名称存在，执行到goto语句时，会跳转到标记的位子
	cout << "1. xxxx" << endl;

	cout << "2. xxxx" << endl;
	
	goto FLAG;
	
	cout << "3. xxxx" << endl;
	
	cout << "4. xxxx" << endl;

	FLAG:
	
	cout << "5. xxxx" << endl;

	system("pause");

	return 0;
}