#include"workerManager.h"

//���캯��
workerManager::workerManager()
{
	ifstream ifs;
	ifs.open(FileName, ios::in); //���ļ�

	//1. �ļ�������
	if (!ifs.is_open()) {

		//��ʼ����¼����
		this->m_WorkerNum = 0;
		//��ʼ������ָ��
		this->m_WorkerArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;

		ifs.close();
		return;
	}

	//2. �ļ�����������Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof()) {

		//��ʼ����¼����
		this->m_WorkerNum = 0;
		//��ʼ������ָ��
		this->m_WorkerArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;

		ifs.close();
		return;
	}

	//3. �ļ����������ݲ�Ϊ��
	
	//��ʼ����¼����
	this->m_WorkerNum = this->getWorkerNum();
	//��ʼ������ָ��
	this->m_WorkerArray = new Worker*[this->m_WorkerNum];
	this->initWorker();
	//��ʼ���ļ��Ƿ�Ϊ��
	this->m_FileIsEmpty = false;

	ifs.close();
}

//��������
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

//��ʾ�˵�
void workerManager::showMenu()
{
	cout << "*********************************************" << endl;
	cout << "*********** ��ӭʹ��ְ������ϵͳ! ***********" << endl;
	cout << "************* 0. �˳�����ϵͳ ***************" << endl;
	cout << "************* 1. ����ְ����Ϣ ***************" << endl;
	cout << "************* 2. ��ʾְ����Ϣ ***************" << endl;
	cout << "************* 3. ɾ����ְְ�� ***************" << endl;
	cout << "************* 4. �޸�ְ����Ϣ ***************" << endl;
	cout << "************* 5. ����ְ����Ϣ ***************" << endl;
	cout << "************* 6. ���ձ������ ***************" << endl;
	cout << "************* 7. ��������ĵ� ***************" << endl;
	cout << "*********************************************" << endl;
}

//�˳�ϵͳ
void workerManager::exitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0); //�˳�
}

//���ְ��
void workerManager::addWorker()
{
	int addNum = 0;
	cout << "����������ְԱ��Ŀ��" << endl;
	cin >> addNum;

	if (addNum > 0) {
		//���
		//��������¿ռ��С
		int newSize = this->m_WorkerNum + addNum; //�¿ռ����� = ԭ������ + ��������

		//�����¿ռ�
		Worker** newSpace = new Worker * [newSize];

		//��ԭ���ռ������� �������¿ռ���
		if (this->m_WorkerArray != NULL) {
			for (int i = 0; i < this->m_WorkerNum; i++) {
				newSpace[i] = this->m_WorkerArray[i];
			}
		}

		//���������
		for (int i = 0; i < addNum; i++) {
			int id; //ְ�����
			string name; //ְ������
			int dSelect; //����ѡ��

			cout << "�������" << i + 1 << "����ְ����ţ�" << endl;
			bool run = true;
			while (run) {
				run = false;
				cin >> id;
				for (int j = 0; j < this->m_WorkerNum + i; j++) {
					if (id == newSpace[j]->m_Id) {
						cout << "id�ظ��� ����������id��" << endl;
						run = true;
					}
				}
			}

			cout << "�������" << i + 1 << "����ְ��������" << endl;
			cin >> name;

			cout << "��ѡ���ְ����λ" << endl;
			cout << "1 - ��ͨԱ��" << endl;
			cout << "2 - ����" << endl;
			cout << "3 - �ϰ�" << endl;
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
				cout << "δʶ��ѡ��..." << endl;
				cout << "Ĭ��Ϊ��ͨԱ��..." << endl;
				cout << "������� ���Ժ��޸�" << endl;

				worker = new Employee(id, name, 1);
				break;
			}

			//������ְ��ְ�� ���浽������
			newSpace[this->m_WorkerNum + i] = worker;
		}

		//�ͷ�ԭ�пռ�
		delete[] this->m_WorkerArray;

		//�����¿ռ�ָ��
		this->m_WorkerArray = newSpace;

		//����ְ������
		this->m_WorkerNum = newSize;

		//��ʾ
		cout << "�ɹ����" << addNum << "����ְ��" << endl;

		//�����ļ�
		this->save();

		//����ְ����Ϊ�ձ�־
		this->m_FileIsEmpty = false;
	}
	else {
		cout << "������������" << endl;
	}
}

//�����ļ�
void workerManager::save()
{
	ofstream ofs;
	ofs.open(FileName, ios::out);

	//��ÿ���˵�����д�뵽�ļ���
	for (int i = 0; i < this->m_WorkerNum; i++) {
		ofs << this->m_WorkerArray[i]->m_Id << "\t"
			<< this->m_WorkerArray[i]->m_Name << "\t"
			<< this->m_WorkerArray[i]->m_DeptId << endl;
	}

	//�ر��ļ�
	ofs.close();
}

//ͳ������
int workerManager::getWorkerNum()
{
	ifstream ifs;
	ifs.open(FileName, ios::in);

	int id;
	string name;
	int did;

	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> did) {
		//ͳ������
		num++;
	}
	return num;
}

//��ʼ������
void workerManager::initWorker()
{
	ifstream ifs;
	ifs.open(FileName, ios::in);

	int id;
	string name;
	int did;

	//�������
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

	//�ر��ļ�
	ifs.close();
}

//��ʾְ��
void workerManager::showWorker()
{
	//�ж��ļ��Ƿ�Ϊ��
	if (this->m_FileIsEmpty) {
		cout << "�ļ������ڻ��ļ�Ϊ��" << endl;
		return;
	}

	//���ö�̬���ó���ӿ�
	for (int i = 0; i < this->m_WorkerNum; i++) {
		this->m_WorkerArray[i]->showInfo();
	}
}

//�ж�ְ���Ƿ���� ���ڷ���λ�� �����ڷ���-1
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

//ɾ��ְ��
void workerManager::deleteWorker()
{
	if (this->m_FileIsEmpty) {
		cout << "�ļ������ڻ��ļ�Ϊ��" << endl;
		return;
	}

	int deleteId;
	cout << "������Ҫɾ��ְ���ı�ţ�" << endl;
	cin >> deleteId;

	int deleteIndex = this->IsExist(deleteId);
	if (deleteIndex == -1) {
		cout << "ɾ��ʧ�ܣ����޴���" << endl;
		return;
	} 

	//����ǰ��
	for (int i = deleteIndex; i < this->m_WorkerNum - 1; i++) {
		this->m_WorkerArray[i] = this->m_WorkerArray[i + 1];
	}
	this->m_WorkerNum--; //���������м�¼����Ա����
	
	//���±�־
	if (this->m_WorkerNum == 0) {
		this->m_FileIsEmpty = true;
	}

	//���浽�ļ���
	this->save();

	cout << "ɾ���ɹ�" << endl;
}

//�޸�ְ��
void workerManager::modWorker()
{
	if (this->m_FileIsEmpty) {
		cout << "�ļ������ڻ��ļ�Ϊ��" << endl;
		return;
	}

	int modId;
	cout << "������Ҫ�޸�ְ���ı�ţ�" << endl;
	cin >> modId;

	int modIndex = this->IsExist(modId);
	if (modIndex == -1) {
		cout << "���޴���" << endl;
		return;
	}

	int newId;
	string newName;
	int newDid;

	delete this->m_WorkerArray[modIndex];

	cout << "�������µ�ְ�����:" << endl;
	cin >> newId;

	cout << "�������µ�ְ������:" << endl;
	cin >> newName;

	cout << "��ѡ���µ�ְ����λ" << endl;
	cout << "1 - ��ͨԱ��" << endl;
	cout << "2 - ����" << endl;
	cout << "3 - �ϰ�" << endl;
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
		cout << "δʶ��ѡ��..." << endl;
		cout << "Ĭ��Ϊ��ͨԱ��..." << endl;
		cout << "������� ���Ժ��޸�" << endl;

		worker = new Employee(newId, newName, 1);
		break;
	}

	this->m_WorkerArray[modIndex] = worker;

	cout << "�޸ĳɹ�" << endl;
}

//����ְ��
void workerManager::findWorker()
{
	if (this->m_FileIsEmpty) {
		cout << "�ļ������ڻ��ļ�Ϊ��" << endl;
		return;
	}

	int select;
	cout << "��ѡ����ҷ�ʽ��" << endl;
	cout << "1 - ����Ų���" << endl;
	cout << "2 - ����������" << endl;
	cin >> select;

	if (select == 1) {
		//����Ų���
		int id;
		cout << "������Ҫ����ְ���ı��:" << endl;
		cin >> id;
		
		int index = this->IsExist(id);
		if (index == -1) {
			cout << "���޴���" << endl;
			return;
		}

		cout << "���ҳɹ�" << endl;
		this->m_WorkerArray[index]->showInfo();
	}
	else if (select == 2) {
		//����������
		string name;
		cout << "������Ҫ����ְ��������:" << endl;
		cin >> name;

		//�����ж��Ƿ�鵽�ı�־
		bool flag = false;

		for (int i = 0; i < this->m_WorkerNum; i++) {
			if (this->m_WorkerArray[i]->m_Name == name) {
				flag = true; //�ҵ�����
				this->m_WorkerArray[i]->showInfo();
			}
		}
		if (!flag) {
			cout << "���޴���" << endl;
		}
	}
	else {
		cout << "��������" << endl;
	}
}

//����ְ��
void workerManager::sortWorker()
{
	if (this->m_FileIsEmpty) {
		cout << "�ļ������ڻ��ļ�Ϊ��" << endl;
		return;
	}

	int select = 0;
	cout << "��ѡ������ʽ:" << endl;
	cout << "1 - ���������" << endl;
	cout << "2 - ����Ž���" << endl;
	cin >> select;

	if (select != 1 && select != 2) {
		cout << "��������" << endl;
		return;
	}

	for (int i = 0; i < this->m_WorkerNum; i++) {
		//������Сֵ�����ֵ�±�
		int MinOrMax = i;

		for (int j = i + 1; j < this->m_WorkerNum; j++) {
			//����
			if (select == 1) {
				if (this->m_WorkerArray[j]->m_Id < this->m_WorkerArray[i]->m_Id) {
					MinOrMax = j;
				}
			}
			//����
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

	//��������
	this->save();

	cout << "����ɹ�" << endl;
}

//����ļ�
void workerManager::clearFile()
{
	int select;
	cout << "ȷ����գ�" << endl;
	cout << "1 - ȷ��" << endl;
	cout << "2 - ����" << endl;
	cin >> select;

	if (select == 1) {
		//����ļ�
		ofstream ofs(FileName, ios::trunc); //ɾ���ļ������´���
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

		cout << "��ճɹ�" << endl;
	}
	else if (select != 2) {
		cout << "��������" << endl;
	}
}