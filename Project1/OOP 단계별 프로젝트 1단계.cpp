#include<iostream>
#include<cstring>


using namespace std;
const int NAME_LEN = 20;

void ShowMenu();
void MakeAccount();
void DepositMoney();
void WithdrawMoney();
void ShowAllAccInfo();

enum{MAKE=1,DEPOSIT,WITHDRAW,INQUIRE,EXIT};

class Account {
private:
	int accID;
	char *cusName;
	int balance;

public:
	Account(int ID, int money, char* name) 
	{
		accID = ID;
		cusName = new char[strlen(name) + 1];
		strcpy(cusName, name);
		balance = money;
	}

	int GetAccID() { return accID; }

	void Deposit(int money)
	{
		balance += money;
	}

	int WithDraw(int money) {
		if (balance < 0)
			return 0;
		balance -= money;
		return money;
	}

	void ShowAccInfo()
	{
		cout << "����ID: " << accID << endl;
		cout << "�� ��: " << cusName << endl;
		cout << "�� ��: " << balance << endl;
	}

	~Account() {
		delete[] cusName;
	}
};

Account* accArr[100];
int accNum = 0;

int main() {
	int choice;

	while (1)
	{
		ShowMenu();
		cout << "����: ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case MAKE:
			MakeAccount();
			break;
		case DEPOSIT:
			DepositMoney();
			break;
		case WITHDRAW:
			WithdrawMoney();
			break;
		case INQUIRE:
			ShowAllAccInfo();
			break;
		case EXIT:
			for (int i = 0;i < accNum;i++)
				delete accArr[accNum];
			break;
		}		
	}
}

void ShowMenu() {
	cout << "-----Menu-----" << endl;
	cout << "1.���°���" << endl;
	cout << "2.�� ��" << endl;
	cout << "3.�� ��" << endl;
	cout << "4.�������� ��ü ���" << endl;
	cout << "5.���α׷� ����" << endl;
}

void MakeAccount() {
	int id;
	char *name;
	int money;

	cout << "[���°���]" << endl;
	cout << "����ID: "; cin >> id;
	cout << "�̸� : ";  cin >> name;
	cout << "�Աݾ�: "; cin >> money;
	cout << endl;

	accArr[accNum++] = new Account(id, money, name);
}

void DepositMoney() {
	int money;
	int id;
	cout << "[�� ��]" << endl;
	cout << "����ID: "; cin >> id;
	cout << "�Աݾ�: "; cin >> money;

	for (int i = 0;i < accNum;i++)
	{
		if (accArr[i]->GetAccID() == id)
			accArr[i]->Deposit(money);
		cout << "�ԱݿϷ�" << endl;
		return;
	}
	cout << "��ȿ���� ���� ID�Դϴ�." << endl << endl;
}

void WithdrawMoney() {
	int id;
	int money;
	cout << "[�� ��]" << endl;
	cout << "���� ID: "; cin >> id;
	cout << "��ݾ�: "; cin >> money;
	for (int i = 0;i < accNum;i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			if (accArr[i]->WithDraw(money) == 0)
			{
				cout << "�ܾ��� �����մϴ�." << endl;
				return;
			}
			else
				cout << "��ݿϷ�" << endl;
			return;

		}
		else
			cout << "��ȿ���� ���� ID�Դϴ�." << endl;
	}

}


void ShowAllAccInfo() {
	for (int i = 0;i < accNum;i++)
	{
		accArr[i]->ShowAccInfo();
	}

}
