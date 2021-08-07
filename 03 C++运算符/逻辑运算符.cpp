#include<iostream>
using namespace std;

int main()
{
	//非: !
	int a = 10;
	//在C++中，除了0都为真
	cout << !a << endl;
	cout << !!a << endl;

	//与: &&
	a = 10;
	int b = 10;
	cout << (a && b) << endl;

	a = 0;
	cout << (a && b) << endl;

	b = 0;
	cout << (a && b) << endl;

	//或: ||
	a = 10;
	b = 10;
	cout << (a || b) << endl;

	a = 0;
	cout << (a || b) << endl;

	b = 0;
	cout << (a || b) << endl;

	system("pause");

	return 0;
}