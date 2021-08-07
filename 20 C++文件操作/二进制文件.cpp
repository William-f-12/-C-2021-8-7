#include<iostream>
#include<fstream>
using namespace std;

//二进制方式写文件主要利用流对象调用成员函数write
//函数原型： ostream& write(const char* buffer, int len);

//二进制方式读文件主要利用流对象调用成员函数read
//函数原型： istream& read(char* buffer, int len);

class Person
{
public:
	char m_Name[64];
	int m_Age;
};

void writeBinary()
{
	//1. 包含头文件

	//2， 创建流对象
	ofstream ofs("person.txt", ios::out | ios::binary);

	//3. 打开文件
	//ofs.open("person.txt", ios::out | ios::binary);

	//4. 写文件
	Person p = { "张三", 18 };
	ofs.write((const char*)&p, sizeof(p));

	//5. 关闭文件
	ofs.close();
}

void readBinary()
{
	//1. 包含头文件

	//2， 创建流对象
	ifstream ifs("person.txt", ios::in | ios::binary);

	//3. 打开文件 判断文件是否成功打开
	//ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return;
	}

	//4. 读文件
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "姓名: " << p.m_Name << " 年龄: " << p.m_Age << endl;

	//5. 关闭文件
	ifs.close();
}

int main()
{
	writeBinary();
	readBinary();

	system("pause");
	return 0;
}