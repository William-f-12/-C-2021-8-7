#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//文件类型分为两种
//1. 文本文件 - 文件以文本的ASCII码形式存储在计算机中
//2. 二进制文件 - 文件以文本的二进制形式存储在计算机中 用户一般不能直接读懂他们

//操作文件的三大类
//1. ofstream：写操作
//2. ifstream：读操作
//3. fstream：读写操作

//写文件
void write()
{
	//1. 包含头文件<fstream>

	//2. 创建流对象
	ofstream ofs;

	//3. 打开文件 ofs.open(文件路径, 打开方式);
		// ios::in -	只读
		// ios::out -	只写
		// ios::ate -	初始位子为文件尾
		// ios::app -	追加
		// ios::trunc - 如果文件存在 先删除 再创建
		// ios::binary -二进制方式
		// 文件打开方式可以配合使用 利用 | 操作符
	ofs.open("test.txt", ios::out); 

	//4. 写数据
	ofs << "写入的数据" << endl;

	//5. 关闭文件
	ofs.close();
}

//读文件
void read()
{
	//1. 包含头文件

	//2. 创建流对象
	ifstream ifs;

	//3. 打开文件并判断文件是否打开成功
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return;
	}

	//4. 读数据 - 四种方式
	// 第一种
	/*char buf[1024] = { 0 };
	while (ifs >> buf) {
		cout << buf << endl;
	}*/

	// 第二种
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf))) {
		cout << buf << endl;
	}*/

	// 第三种
	string buf;
	while (getline(ifs, buf)) {
		cout << buf << endl;
	}

	// 第四种
	/*char c;
	while ((c = ifs.get()) != EOF) {
		cout << c;
	}*/

	//5. 关闭文件
	ifs.close();
}

int main1()
{
	write();
	read();

	system("pause");
	return 0;
}