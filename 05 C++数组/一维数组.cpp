#include<iostream>
using namespace std;

//数组特点：
//放在一块连续的内存空间中
//数组的每个元素都是相同数据类型

int main1()
{
	//一维数组的三种定义方式
	//1. 数据类型 数组名[ 数组长度 ]；
	int arr[5];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;

	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;

	//2. 数据类型 数组名[ 数组长度 ] = { 值1， 值2 ...}；
	//如果初始化数据时，没有全部填写完，会用0来填补剩余数据
	int arr2[5] = { 10, 20, 30 };

	for (int i = 0; i < 5; i++) { cout << arr2[i] << endl; }

	//3. 数据类型 数组名[] = { 值1， 值2 ...}；
	//定义数组的时候，必须有初始长度
	int arr3[] = { 11, 22, 33, 44, 55, 66 };
	for (int i = 0; i < 6; i++) { cout << arr3[i] << endl; }


	//一维数组数组名称的用途：
	//1. 可以统计整个数组在内存中的长度 - sizeof(arr)
	cout << "整个数组arr的长度： " << sizeof(arr) << endl;
	cout << "数组中单个元素的长度: " << sizeof(arr[0]) << endl;

	//2. 可以获取数组在内存中的首地址 - cout << arr << endl;
	cout << "数组的地址为： " << (int)arr << endl; //加(int)从16进制转为10进制
	cout << "数组第一个元素地址为: " << (int)&arr[0] << endl; //&取值符，获取一个元素的地址
	//此数组中每个元素占4字节空间
	//数组名是常量，不可以进行赋值操作


	//案例1：五只小猪称体重
	int pigs[5] = { 300, 350, 200, 400, 250 };
	int max = 0;

	for (int i = 0; i < 5; i++) {
		if (pigs[i] > max) { max = pigs[i]; }
	}

	cout << "最重的小猪体重为： " << max << endl;


	//案例2：数组元素逆置
	int Arr[5] = { 1,3,2,5,4 };
	int start = 0; //起始元素下标
	int end = sizeof(Arr) / sizeof(Arr[0]) - 1; //末尾元素下标
	int temp = 0; //临时内存
	cout << "数组逆置前: ";
	for (int i = 0; i < 5; i++) { cout << Arr[i] << " "; }
	cout << endl;

	while (start < end) {
		temp = Arr[start];
		Arr[start] = Arr[end];
		Arr[end] = temp;
		start++;
		end--;
	}
	cout << "数组逆置后: ";
	for (int i = 0; i < 5; i++) { cout << Arr[i] << " "; }
	cout << endl;


	//冒泡排序：
	//作用：做常用的排序算法，对数组内元素进行排序
	int arr0[9] = { 4,2,8,0,5,7,1,3,9 };
	int temp0 = 0;
	int end0 = sizeof(arr0) / sizeof(arr0[0]); //数组中总元素个数
	cout << "数组排序前: ";
	for (int i = 0; i < 9; i++) { cout << arr0[i] << " "; }
	cout << endl;

	//1. 比较相邻元素，如果第一个比第二个大，就交换他们两个
	//2. 对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值
	//3. 重复以上步骤，每次比较次数-1，直到不需要比较
	//排序的总轮数 = 元素个数 - 1
	//每轮对比个数 = 元素个数 - 排序轮数 - 1
	for (int i = 0; i < end0 - 1; i++) {
		for (int j = 0; j < end0 - i - 1; j++) {
			if (arr0[j] > arr0[j + 1]) {
				temp0 = arr0[j];
				arr0[j] = arr0[j + 1];
				arr0[j + 1] = temp0;
			}
		}
	}
	cout << "数组排序后: ";
	for (int i = 0; i < 9; i++) { cout << arr0[i] << " "; }
	cout << endl;

	system("pause");

	return 0;
}