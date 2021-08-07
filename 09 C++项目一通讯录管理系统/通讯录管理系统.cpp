#include<iostream>
#include<string>
using namespace std;
#define MAX 100 //定义宏常量，不能有分号

//联系人结构体
struct Person
{
	string m_Name; //姓名
	int m_Sex; //性别:1-男 2-女
	int m_Age; //年龄
	string m_Phone; //电话
	string m_Addr; //地址
};


//通讯录结构体
struct Addressbooks
{
	//联系人数组
	Person personArray[ MAX ];

	//联系人个数
	int m_Size;
};


//菜单界面
void showMenu()
{
	cout << "************************" << endl;
	cout << "***** 1. 添加联系人 *****" << endl;
	cout << "***** 2. 显示联系人 *****" << endl;
	cout << "***** 3. 删除联系人 *****" << endl;
	cout << "***** 4. 查找联系人 *****" << endl;
	cout << "***** 5. 修改联系人 *****" << endl;
	cout << "***** 6. 清空联系人 *****" << endl;
	cout << "***** 0. 退出通讯录 *****" << endl;
	cout << "************************" << endl;
}


//检测联系人是否存在，存在返回具体位置，不存在返回-1
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++) {
		if (abs->personArray[i].m_Name == name) {
			return i;
		}
	}
	return -1;
}


//显示单个联系人
void showAPerson(Addressbooks* abs, int pos)
{
	cout << "姓名：" << abs->personArray[pos].m_Name << "\t";
	cout << "性别：" << (abs->personArray[pos].m_Sex == 1 ? "男" : "女") << "\t";
	cout << "年龄：" << abs->personArray[pos].m_Age << "\t";
	cout << "电话：" << abs->personArray[pos].m_Phone << "\t";
	cout << "地址：" << abs->personArray[pos].m_Addr << "\n\n";
}


//1. 添加联系人
void addPerson(Addressbooks* abs)
{
	//判断通讯录是否已满
	if (abs->m_Size == MAX) {
		cout << "通讯录已满" << endl;
		return;
	}
	else {
		//添加联系人
		string name; //姓名
		cout << "请输入姓名：" << endl;
		cin >> name;
		if (isExist(abs, name) != -1) {
			cout << "已存在联系人" << endl;
			return;
		}
		abs->personArray[abs->m_Size].m_Name = name;

		int sex = 0; //性别
		while (!(sex == 1 || sex == 2)) {
			cout << "请输入性别：" << endl;
			cout << "1 --- 男" << endl;
			cout << "2 --- 女" << endl;
			cin >> sex;
		}
		abs->personArray[abs->m_Size].m_Sex = sex;

		int age = 0; //年龄
		cout << "请输入年龄：" << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		string phone; //电话
		cout << "请输入联系电话：" << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		string address; //地址
		cout << "请输入家庭住址：" << endl;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//更新通讯录人数
		abs->m_Size++;

		cout << "添加成功" << endl;
	}
}


//2. 显示联系人
void showPerson(Addressbooks* abs)
{
	//判断通讯录中人数是否为0
	if (abs->m_Size == 0) {
		cout << "当前纪录为空" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			showAPerson(abs, i);
		}
	}
}


//3. 删除联系人
void deletePerson(Addressbooks* abs)
{
	string name;
	cout << "请输入删除联系人姓名：" << endl;
	cin >> name;
	int ret = isExist(abs, name);

	if (ret == -1) {
		cout << "查无此人" << endl;
	}
	else {
		for (int i = ret; i < abs->m_Size - 1; i++) {
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "成功删除联系人" << endl;
	}
}


//4. 查找联系人
void findPerson(Addressbooks* abs)
{
	string name;
	cout << "请输入查找联系人姓名：" << endl;
	cin >> name;
	int ret = isExist(abs, name);

	if (ret == -1) {
		cout << "查无此人" << endl;
	}
	else {
		showAPerson(abs, ret);
	}
}


//5. 修改联系人
void modifyPerson(Addressbooks* abs)
{
	string name;
	cout << "请输入修改联系人姓名：" << endl;
	cin >> name;
	int ret = isExist(abs, name);

	if (ret == -1) {
		cout << "查无此人" << endl;
	}
	else {
		//修改联系人
		string name; //姓名
		cout << "请输入姓名：" << endl;
		cin >> name;
		if (isExist(abs, name) != -1) {
			cout << "已存在联系人" << endl;
			return;
		}
		abs->personArray[ret].m_Name = name;

		int sex = 0; //性别
		while (!(sex == 1 || sex == 2)) {
			cout << "请输入性别：" << endl;
			cout << "1 --- 男" << endl;
			cout << "2 --- 女" << endl;
			cin >> sex;
		}
		abs->personArray[ret].m_Sex = sex;

		int age = 0; //年龄
		cout << "请输入年龄：" << endl;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		string phone; //电话
		cout << "请输入联系电话：" << endl;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		string address; //地址
		cout << "请输入家庭住址：" << endl;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "修改成功" << endl;
	}
}


//6. 清空联系人
void clearPerson(Addressbooks* abs)
{
	//Person person;
	//for (int i = 0; i < abs->m_Size; i++) {
	//	abs->personArray[i] = person;
	//}
	abs->m_Size = 0;
	cout << "通讯录已清空" << endl;
}


int main()
{
	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化成员个数
	abs.m_Size = 0;

	int select = 0; //创建用户选择输入的变量

	while (true) {
		//显示菜单
		showMenu();

		cin >> select;

		switch (select) {
		case 1: //1. 添加联系人
			addPerson(&abs);
			break;
		case 2: //2. 显示联系人
			showPerson(&abs);
			break;
		case 3: //3. 删除联系人
			deletePerson(&abs);
			break;
		case 4: //4. 查找联系人
			findPerson(&abs);
			break;
		case 5: //5. 修改联系人
			modifyPerson(&abs);
			break;
		case 6: //6. 清空联系人
			clearPerson(&abs);
			break;
		case 0: //0. 退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
		default:
			cout << "未找到该选项" << endl;
			break;
		}

		system("pause"); //请按任意键继续
		system("cls"); //清屏操作
	}
}