#include<iostream>
using namespace std;

//交换的函数模板
template<typename T>
void swapArr(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}


//排序的函数模板
template<typename T>
void sort(T Arr[], int Arr_size)
{
	for (int i = 0; i < Arr_size; i++)
	{
		int max = i; //默认最大的下标
		for (int j = i + 1; j < Arr_size; j ++)
		{
			if (Arr[j] > Arr[max]) {
				max = j;
			}
		}
		if (max != i) {
			//交换元素
			swapArr(Arr[max], Arr[i]);
		}
	}
}


//打印的函数模板
template<typename T>
void print(T Arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << Arr[i];
	}
	cout << endl;
}

void test01()
{
	//测试char数组
	char charArr[] = "babcfe";
	int num = sizeof(charArr) / sizeof(char);
	sort(charArr, num);
	print(charArr, num);

	//测试int数组
	int intArr[] = { 7, 6, 0, 3, 9, 1, 4 };
	int num2 = sizeof(intArr) / sizeof(int);
	sort(intArr, num2);
	print(intArr, num2);
}

int main2()
{
	test01();

	system("pause");
	return 0;
}