#include<iostream>

using namespace std;

void showMenu();


class BankAccount {
	int Account_ID;
	char* customer_name;
	int balance;
public:
	BankAccount(int ID, char* name, int money);
	void DepositMoney();
	void WithdrawMoney();
	void ShowAllAccInfo();
};

BankAccount::BankAccount(int ID,char *name,int money) {
	cout << "[���°���]" << endl;
	cout << "����ID: ";
	cin >> Account_ID;
	cout << endl;
	cout << "�� ��";
	cin >> name;
	cout << endl;
	cout << "�Աݾ�: ";
	cin >> balance;
}

void BankAccount::DepositMoney() {
	cout << "[�� ��]";
	cout << "����ID: ";
	cin >> Account_ID;
	cout << "�Աݾ� : ";
	cin >> balance;
}

void BankAccount::WithdrawMoney() {

}

void BankAccount::ShowAllAccInfo() {

}



int main()
{


	while (true)
	{
		int number;
		showMenu();
		cout << "����:";
		cin >> number;

		switch (number) {
		case 1:
			
		case 2:

			
		case 3:

		case 4:

		case 5:

		}
	}
}

void showMenu()
{
	cout << "-----Menu-----" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. �� ��" << endl;
	cout << "3. �� ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
}