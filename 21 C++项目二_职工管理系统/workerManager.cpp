#include"workerManager.h"

//构造函数
workerManager::workerManager()
{
	ifstream ifs;
	ifs.open(FileName, ios::in); //读文件

	//1. 文件不存在
	if (!ifs.is_open()) {

		//初始化记录人数
		this->m_WorkerNum = 0;
		//初始化数组指针
		this->m_WorkerArray = NULL;
		//初始化文件是否为空
		this->m_FileIsEmpty = true;

		ifs.close();
		return;
	}

	//2. 文件存在且数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof()) {

		//初始化记录人数
		this->m_WorkerNum = 0;
		//初始化数组指针
		this->m_WorkerArray = NULL;
		//初始化文件是否为空
		this->m_FileIsEmpty = true;

		ifs.close();
		return;
	}

	//3. 文件存在且数据不为空
	
	//初始化记录人数
	this->m_WorkerNum = this->getWorkerNum();
	//初始化数组指针
	this->m_WorkerArray = new Worker*[this->m_WorkerNum];
	this->initWorker();
	//初始化文件是否为空
	this->m_FileIsEmpty = false;

	ifs.close();
}

//析构函数
workerManager::~workerManager()
{
	if (this->m_WorkerArray != NULL) {
		for (int i = 0; i < this->m_WorkerNum; i++) {
			if (this->m_WorkerArray[i] != NULL) {
				delete this->m_WorkerArray[i];
			}
		}
		delete[] this->m_WorkerArray;
		this->m_WorkerArray = NULL;
	}
}

//显示菜单
void workerManager::showMenu()
{
	cout << "*********************************************" << endl;
	cout << "*********** 欢迎使用职工管理系统! ***********" << endl;
	cout << "************* 0. 退出管理系统 ***************" << endl;
	cout << "************* 1. 增加职工信息 ***************" << endl;
	cout << "************* 2. 显示职工信息 ***************" << endl;
	cout << "************* 3. 删除离职职工 ***************" << endl;
	cout << "************* 4. 修改职工信息 ***************" << endl;
	cout << "************* 5. 查找职工信息 ***************" << endl;
	cout << "************* 6. 按照编号排序 ***************" << endl;
	cout << "************* 7. 清空所有文档 ***************" << endl;
	cout << "*********************************************" << endl;
}

//退出系统
void workerManager::exitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0); //退出
}

//添加职工
void workerManager::addWorker()
{
	int addNum = 0;
	cout << "请输入增加职员数目：" << endl;
	cin >> addNum;

	if (addNum > 0) {
		//添加
		//计算添加新空间大小
		int newSize = this->m_WorkerNum + addNum; //新空间人数 = 原来人数 + 新增人数

		//开辟新空间
		Worker** newSpace = new Worker * [newSize];

		//将原来空间下数据 拷贝到新空间下
		if (this->m_WorkerArray != NULL) {
			for (int i = 0; i < this->m_WorkerNum; i++) {
				newSpace[i] = this->m_WorkerArray[i];
			}
		}

		//添加新数据
		for (int i = 0; i < addNum; i++) {
			int id; //职工编号
			string name; //职工姓名
			int dSelect; //部门选择

			cout << "请输入第" << i + 1 << "个新职工编号：" << endl;
			bool run = true;
			while (run) {
				run = false;
				cin >> id;
				for (int j = 0; j < this->m_WorkerNum + i; j++) {
					if (id == newSpace[j]->m_Id) {
						cout << "id重复， 请重新输入id：" << endl;
						run = true;
					}
				}
			}

			cout << "请输入第" << i + 1 << "个新职工姓名：" << endl;
			cin >> name;

			cout << "请选择该职工岗位" << endl;
			cout << "1 - 普通员工" << endl;
			cout << "2 - 经理" << endl;
			cout << "3 - 老板" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				cout << "未识别选项..." << endl;
				cout << "默认为普通员工..." << endl;
				cout << "如果有误 请稍后修改" << endl;

				worker = new Employee(id, name, 1);
				break;
			}

			//将创建职工职责 保存到数组中
			newSpace[this->m_WorkerNum + i] = worker;
		}

		//释放原有空间
		delete[] this->m_WorkerArray;

		//更改新空间指向
		this->m_WorkerArray = newSpace;

		//更新职工人数
		this->m_WorkerNum = newSize;

		//提示
		cout << "成功添加" << addNum << "名新职工" << endl;

		//保存文件
		this->save();

		//更新职工不为空标志
		this->m_FileIsEmpty = false;
	}
	else {
		cout << "输入数据有误" << endl;
	}
}

//保存文件
void workerManager::save()
{
	ofstream ofs;
	ofs.open(FileName, ios::out);

	//将每个人的数据写入到文件中
	for (int i = 0; i < this->m_WorkerNum; i++) {
		ofs << this->m_WorkerArray[i]->m_Id << "\t"
			<< this->m_WorkerArray[i]->m_Name << "\t"
			<< this->m_WorkerArray[i]->m_DeptId << endl;
	}

	//关闭文件
	ofs.close();
}

//统计人数
int workerManager::getWorkerNum()
{
	ifstream ifs;
	ifs.open(FileName, ios::in);

	int id;
	string name;
	int did;

	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> did) {
		//统计人数
		num++;
	}
	return num;
}

//初始化数组
void workerManager::initWorker()
{
	ifstream ifs;
	ifs.open(FileName, ios::in);

	int id;
	string name;
	int did;

	//添加数组
	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> did) {
		Worker* worker = NULL;

		switch (did)
		{
		case 1:
			worker = new Employee(id, name, did);
			break;
		case 2:
			worker = new Manager(id, name, did);
			break;
		case 3:
			worker = new Boss(id, name, did);
			break;
		}

		this->m_WorkerArray[index] = worker;
		index++;
	}

	//关闭文件
	ifs.close();
}

//显示职工
void workerManager::showWorker()
{
	//判断文件是否为空
	if (this->m_FileIsEmpty) {
		cout << "文件不存在或文件为空" << endl;
		return;
	}

	//利用多态调用程序接口
	for (int i = 0; i < this->m_WorkerNum; i++) {
		this->m_WorkerArray[i]->showInfo();
	}
}

//判断职工是否存在 存在返回位置 不存在返回-1
int workerManager::IsExist(int id)
{
	int index = -1;

	for (int i = 0; i < this->m_WorkerNum; i++) {
		if (this->m_WorkerArray[i]->m_Id == id) {
			index = i;
			break;
		}
	}

	return index;
}

//删除职工
void workerManager::deleteWorker()
{
	if (this->m_FileIsEmpty) {
		cout << "文件不存在或文件为空" << endl;
		return;
	}

	int deleteId;
	cout << "请输入要删除职工的编号：" << endl;
	cin >> deleteId;

	int deleteIndex = this->IsExist(deleteId);
	if (deleteIndex == -1) {
		cout << "删除失败，查无此人" << endl;
		return;
	} 

	//数据前移
	for (int i = deleteIndex; i < this->m_WorkerNum - 1; i++) {
		this->m_WorkerArray[i] = this->m_WorkerArray[i + 1];
	}
	this->m_WorkerNum--; //更新数组中记录的人员个数
	
	//更新标志
	if (this->m_WorkerNum == 0) {
		this->m_FileIsEmpty = true;
	}

	//保存到文件中
	this->save();

	cout << "删除成功" << endl;
}

//修改职工
void workerManager::modWorker()
{
	if (this->m_FileIsEmpty) {
		cout << "文件不存在或文件为空" << endl;
		return;
	}

	int modId;
	cout << "请输入要修改职工的编号：" << endl;
	cin >> modId;

	int modIndex = this->IsExist(modId);
	if (modIndex == -1) {
		cout << "查无此人" << endl;
		return;
	}

	int newId;
	string newName;
	int newDid;

	delete this->m_WorkerArray[modIndex];

	cout << "请输入新的职工编号:" << endl;
	cin >> newId;

	cout << "请输入新的职工姓名:" << endl;
	cin >> newName;

	cout << "请选择新的职工岗位" << endl;
	cout << "1 - 普通员工" << endl;
	cout << "2 - 经理" << endl;
	cout << "3 - 老板" << endl;
	cin >> newDid;

	Worker* worker = NULL;
	switch (newDid)
	{
	case 1:
		worker = new Employee(newId, newName, 1);
		break;
	case 2:
		worker = new Manager(newId, newName, 2);
		break;
	case 3:
		worker = new Boss(newId, newName, 3);
		break;
	default:
		cout << "未识别选项..." << endl;
		cout << "默认为普通员工..." << endl;
		cout << "如果有误 请稍后修改" << endl;

		worker = new Employee(newId, newName, 1);
		break;
	}

	this->m_WorkerArray[modIndex] = worker;

	cout << "修改成功" << endl;
}

//查找职工
void workerManager::findWorker()
{
	if (this->m_FileIsEmpty) {
		cout << "文件不存在或文件为空" << endl;
		return;
	}

	int select;
	cout << "请选择查找方式：" << endl;
	cout << "1 - 按编号查找" << endl;
	cout << "2 - 按姓名查找" << endl;
	cin >> select;

	if (select == 1) {
		//按编号查找
		int id;
		cout << "请输入要查找职工的编号:" << endl;
		cin >> id;
		
		int index = this->IsExist(id);
		if (index == -1) {
			cout << "查无此人" << endl;
			return;
		}

		cout << "查找成功" << endl;
		this->m_WorkerArray[index]->showInfo();
	}
	else if (select == 2) {
		//按姓名查找
		string name;
		cout << "请输入要查找职工的姓名:" << endl;
		cin >> name;

		//加入判断是否查到的标志
		bool flag = false;

		for (int i = 0; i < this->m_WorkerNum; i++) {
			if (this->m_WorkerArray[i]->m_Name == name) {
				flag = true; //找到人了
				this->m_WorkerArray[i]->showInfo();
			}
		}
		if (!flag) {
			cout << "查无此人" << endl;
		}
	}
	else {
		cout << "输入有误" << endl;
	}
}

//排序职工
void workerManager::sortWorker()
{
	if (this->m_FileIsEmpty) {
		cout << "文件不存在或文件为空" << endl;
		return;
	}

	int select = 0;
	cout << "请选择排序方式:" << endl;
	cout << "1 - 按编号升序" << endl;
	cout << "2 - 按编号降序" << endl;
	cin >> select;

	if (select != 1 && select != 2) {
		cout << "输入有误" << endl;
		return;
	}

	for (int i = 0; i < this->m_WorkerNum; i++) {
		//申明最小值或最大值下标
		int MinOrMax = i;

		for (int j = i + 1; j < this->m_WorkerNum; j++) {
			//升序
			if (select == 1) {
				if (this->m_WorkerArray[j]->m_Id < this->m_WorkerArray[i]->m_Id) {
					MinOrMax = j;
				}
			}
			//降序
			else {
				if (this->m_WorkerArray[j]->m_Id > this->m_WorkerArray[i]->m_Id) {
					MinOrMax = j;
				}
			}
		}

		if (i != MinOrMax) {
			Worker* temp = this->m_WorkerArray[i];
			this->m_WorkerArray[i] = this->m_WorkerArray[MinOrMax];
			this->m_WorkerArray[MinOrMax] = temp;
		}
	}

	//保存数据
	this->save();

	cout << "排序成功" << endl;
}

//清空文件
void workerManager::clearFile()
{
	int select;
	cout << "确定清空？" << endl;
	cout << "1 - 确定" << endl;
	cout << "2 - 返回" << endl;
	cin >> select;

	if (select == 1) {
		//清空文件
		ofstream ofs(FileName, ios::trunc); //删除文件后重新创建
		ofs.close();

		if (this->m_WorkerArray != NULL) {
			for (int i = 0; i < this->m_WorkerNum; i++) {
				if (this->m_WorkerArray[i] != NULL) {
					delete this->m_WorkerArray[i];
				}
			}
			delete[] this->m_WorkerArray;
			this->m_WorkerArray = NULL;
			this->m_WorkerNum = 0;
			this->m_FileIsEmpty = true;
		}

		cout << "清空成功" << endl;
	}
	else if (select != 2) {
		cout << "输入有误" << endl;
	}
}