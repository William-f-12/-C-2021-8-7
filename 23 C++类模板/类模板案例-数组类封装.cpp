#include<iostream>
#include<string>
using namespace std;
#include"myArray.hpp"

void printIntArray(myArray<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}

void test_01()
{
	myArray<int> arr1(5);

	for (int i = 0; i < 5; i++)
	{
		arr1.pushBack(i);
	}
	cout << "arr1: " << endl;
	printIntArray(arr1);
	cout << "arr1的容量为： " << arr1.getCapacity() << endl;
	cout << "arr1的大小为： " << arr1.getSize() << endl;

	arr1.popBack();
	printIntArray(arr1);
	cout << "arr1的容量为： " << arr1.getCapacity() << endl;
	cout << "arr1的大小为： " << arr1.getSize() << endl;
}

//测试自定义数据类型
class PP
{
public:
	PP() {};
	PP(string name, int age)
	{
		this->Age = age;
		this->Name = name;
	}

	int Age;
	string Name;
};

void printPerson(myArray<PP>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "name: " << arr[i].Name << " age: " << arr[i].Age << endl;
	}
}

void test_02()
{
	myArray<PP> arr(10);

	PP p1("孙悟空", 999);
	PP p2("韩星", 14);
	PP p3("赵云", 19);
	PP p4("刘备", 24);

	//将数据插入到数组中
	arr.pushBack(p1);
	arr.pushBack(p2);
	arr.pushBack(p3);
	arr.pushBack(p4);

	printPerson(arr);
	cout << "容量: " << arr.getCapacity() << endl;
	cout << "大小: " << arr.getSize() << endl;
}

int main()
{
	//test_01();
	test_02();

	system("pause");
	return 0;
}