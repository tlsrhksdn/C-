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
		cout << "계좌ID: " << accID << endl;
		cout << "이 름: " << cusName << endl;
		cout << "잔 액: " << balance << endl;
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
		cout << "선택: ";
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
	cout << "1.계좌개설" << endl;
	cout << "2.입 금" << endl;
	cout << "3.출 금" << endl;
	cout << "4.계좌정보 전체 출력" << endl;
	cout << "5.프로그램 종료" << endl;
}

void MakeAccount() {
	int id;
	char *name;
	int money;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "이름 : ";  cin >> name;
	cout << "입금액: "; cin >> money;
	cout << endl;

	accArr[accNum++] = new Account(id, money, name);
}

void DepositMoney() {
	int money;
	int id;
	cout << "[입 금]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "입금액: "; cin >> money;

	for (int i = 0;i < accNum;i++)
	{
		if (accArr[i]->GetAccID() == id)
			accArr[i]->Deposit(money);
		cout << "입금완료" << endl;
		return;
	}
	cout << "유효하지 않은 ID입니다." << endl << endl;
}

void WithdrawMoney() {
	int id;
	int money;
	cout << "[출 금]" << endl;
	cout << "계좌 ID: "; cin >> id;
	cout << "출금액: "; cin >> money;
	for (int i = 0;i < accNum;i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			if (accArr[i]->WithDraw(money) == 0)
			{
				cout << "잔액이 부족합니다." << endl;
				return;
			}
			else
				cout << "출금완료" << endl;
			return;

		}
		else
			cout << "유효하지 않은 ID입니다." << endl;
	}

}


void ShowAllAccInfo() {
	for (int i = 0;i < accNum;i++)
	{
		accArr[i]->ShowAccInfo();
	}

}
