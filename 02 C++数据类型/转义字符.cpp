#include<iostream>
using namespace std;

//转义字符

int main4()
{
	//换行符 \n
	//反斜杠 \\
	//水平制表符 \t :每8个位子后，预留8个位子，用于对齐
	cout << "aaaaaa\thelloworld" << endl;
	cout << "aaaaaaaaaa\thelloworld" << endl;
	cout << "aa\thelloworld" << endl;
	cout << "aaaaaaaa\thelloworld" << endl;

	system("pause");

	return 0;
}