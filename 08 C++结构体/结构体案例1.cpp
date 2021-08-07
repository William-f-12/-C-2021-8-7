#include<iostream>
#include<string>
#include<ctime>
using namespace std;

//注意：定义结构体Teacher时不能以小写t开头，会导致错误，原因未知

//学生结构体
struct Student
{
	string name;
	int score;
};

//老师结构体
struct Teacher
{
	string name;
	Student sArray[5];
};

//给老师学生赋值的函数
void allocateSpace(Teacher tArray[], int len)
{
	string name = "ABCDE";
	string tName = "T_";
	string sName = "S_";
	for (int i = 0; i < len; i++) {
		tArray[i].name = tName + name[i];

		for (int j = 0; j < 5; j++) {
			tArray[i].sArray[j].name = sName + name[j];
			tArray[i].sArray[j].score = rand() % 61 + 40;
		}
	}
}

//打印所有信息
void printInfo(Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++) {
		cout << "老师姓名： " << tArray[i].name << endl;
		for (int j = 0; j < 5; j++) {
			cout << "\t学生姓名： " << tArray[i].sArray[j].name
				<< " 学生成绩： " << tArray[i].sArray[j].score << endl;
		}
	}
}

int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));

	//1. 创建3名老师的数组
	Teacher tArray[3];

	//2. 通过函数给3个老师的信息赋值，并给老师带的学生的信息赋值
	int len = sizeof(tArray) / sizeof(Teacher);
	allocateSpace(tArray, len);

	//3. 打印所有老师学生的信息
	printInfo(tArray, len);

	system("pause");

	return 0;
}