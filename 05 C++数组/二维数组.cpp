#include<iostream>
#include<string>
using namespace std;

int main()
{
	//二位数组创建方式
	//1. 数据类型 数组名[ 行数 ][ 列数 ];
	int arr1[2][3];
	arr1[0][0] = 1;
	arr1[0][1] = 2;
	arr1[0][2] = 3;
	arr1[1][0] = 4;
	arr1[1][1] = 5;
	arr1[1][2] = 6;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) { cout << arr1[i][j] << " "; }
		cout << endl;
	}

	//2. 数据类型 数组名[ 行数 ][ 列数 ] = { {数据1，数据2}，{数据3，数据4} };
	int arr2[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) { cout << arr2[i][j] << " "; }
		cout << endl;
	}

	//3. 数据类型 数组名[ 行数 ][ 列数 ] = { 数据1，数据2，数据3，数据4 };
	int arr3[2][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) { cout << arr3[i][j] << " "; }
		cout << endl;
	}

	//4. 数据类型 数组名[][ 列数 ] = { 数据1，数据2，数据3，数据4 };
	int arr4[][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) { cout << arr3[i][j] << " "; }
		cout << endl;
	}


	//二维数组名称的作用：
	//1. 查看二维数组所占内存空间
	cout << "二维数组占用的内存空间为: " << sizeof(arr1) << endl;
	cout << "二维数组第一行占用的内存空间为: " << sizeof(arr1[0]) << endl;
	cout << "二维数组第一个元素占用的内存空间为: " << sizeof(arr1[0][0]) << endl;

	cout << "二维数组行数为： " << sizeof(arr1) / sizeof(arr1[0]) << endl;
	cout << "二维数组列数为： " << sizeof(arr1[0]) / sizeof(arr1[0][0]) << endl;

	//2. 查看二维数组的首地址
	cout << "二维数组的首地址为：" << (int)arr1 << endl;
	cout << "二位数组第一行首地址为" << (int)arr1[0] << endl;
	cout << "二位数组第二行首地址为" << (int)arr1[1] << endl;
	cout << "二位数组第一个元素首地址为" << (int)&arr1[0][0] << endl;
	cout << "二位数组第二个元素首地址为" << (int)&arr1[0][1] << endl;


	//案例1： 考试成绩统计
	int scores[3][3] = {
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string names[3] = { "张三", "李四", "王五" };

	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) { 
			sum += scores[i][j]; 
		}
		cout << "第" << names[i] << "的总分是" << sum << endl;
	}


	system("pause");

	return 0;
}