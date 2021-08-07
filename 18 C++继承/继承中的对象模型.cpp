#include<iostream>
using namespace std;

//继承中的对象中的

class Base
{
public:
	int a;
protected:
	int b;
private:
	int c;
};

class son :public Base
{
public:
	int d;
};

void test2()
{
	cout << "size of son = " << sizeof(son) << endl; //16
	//父类中所有非静态成员属性都会被子类继承下去
	//父类中所有私有成员属性是被编译器给隐藏了 因此访问不到 但确实被继承下去了
}

//利用开发人员命令提示工具查看对象模型
//转跳盘符 如：F:
//转跳文件路径：cd 具体路径下
//查看命令: cl /d1 reportSingleClassLayout类名 文件名

int main3()
{
	test2();

	system("pause");
	return 0;
}