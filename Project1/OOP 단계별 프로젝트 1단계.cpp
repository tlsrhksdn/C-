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
	cout << "[계좌개설]" << endl;
	cout << "계좌ID: ";
	cin >> Account_ID;
	cout << endl;
	cout << "이 름";
	cin >> name;
	cout << endl;
	cout << "입금액: ";
	cin >> balance;
}

void BankAccount::DepositMoney() {
	cout << "[입 금]";
	cout << "계좌ID: ";
	cin >> Account_ID;
	cout << "입금액 : ";
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
		cout << "선택:";
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
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}