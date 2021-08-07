#include<iostream>
#include<string>
using namespace std;

//结构体数组
//语法： struct 结构体名 数组名[元素个数] = { {}, {}, ... };

struct Student
{
	string name;
	int age;
	int score;
};

int main2()
{
	//创建结构体数组
	struct Student stuArray[3] =
	{
		{"张三", 18, 100},
		{"李四", 28, 99},
		{"王五", 38, 66}
	};

	//给结构体中元素赋值
	stuArray[2].name = "赵六";
	stuArray[2].age = 80;
	stuArray[2].score = 60;

	//遍历结构体数组
	for (int i = 0; i < 3; i++) {
		cout << " 姓名： " << stuArray[i].name 
			 << " 年龄： " << stuArray[i].age
			 << " 分数： " << stuArray[i].score << endl;
	}

	system("pause");

	return 0;
}