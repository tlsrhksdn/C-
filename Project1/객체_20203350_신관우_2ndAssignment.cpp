#include<iostream>
#include<string>
using namespace std;

class Ascending {
	int output[5] = { 0, };
public:
	Ascending(int input[5]) {
		for (int i = 0;i < 5;i++)
			output[i] = input[i];
	};
	void AscendingOrderFunction();
};
class Descending {
	int output[5] = { 0, };
public:
	Descending(int input[5]) {
		for (int i = 0;i < 5;i++)
			output[i] = input[i];
	};
	void DescendingOrderFunction();
};
class DoubleValue {
	int output[5] = { 0, };
public:
	DoubleValue(int input[5]){
		for (int i = 0;i < 5;i++)
			output[i] = input[i];
	};
	void DoubleValueFunction();
};

void Ascending::AscendingOrderFunction() {
	int temp;
	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 5;j++) {
			if (output[i] < output[j]) {
				temp = output[i];
				output[i] = output[j];
				output[j] = temp;
			}
		}
	}
	for (int i = 0;i < 5;i++)
		cout << output[i] << ' ';
	cout << endl;
}

void Descending::DescendingOrderFunction() {
	int temp;
	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 5;j++) {
			if (output[i] > output[j]) {
				temp = output[i];
				output[i] = output[j];
				output[j] = temp;
			}
		}
	}
	for (int i = 0;i < 5;i++)
		cout << output[i] << ' ';
	cout << endl;
}

void DoubleValue::DoubleValueFunction() {
	for (int i = 0;i < 5;i++) {
		output[i] *= 2;
	}
	for (int i = 0;i < 5;i++)
		cout << output[i] << ' ';
	cout << endl;
}

int main() {
	int n[5];
	int count = 0;
	string str;

	cout << "[[ 2nd Coding Assignment ]]" << endl;
	cout << "Write the five integer between 0 and 100: ";
	for (int i = 0;i < 5;i++) {
		cin >> n[i];
	}
	cin.ignore();
	for (int i = 0;i < 5;i++) {
		if (n[i] < 0 || n[i]>100) {
			count++; break;
		}
		for (int j = i+1;j < 5;j++) {
			if (n[i] == n[j])
				count++;	break;
		}
	}
	if (count > 0) {
		cout << "Input is incorrect. So, this program is over. " << endl;
	}
	else {
		for (int i = 0;i < 5;i++)
			cout << n[i] << ' ';
		cout << endl;
		cout << "Please select the mode(ascending or descending or double): ";
		getline(cin, str);
		if (str.compare("ascending") == 0) {
			Ascending a(n);
			a.AscendingOrderFunction();
		}
		else if (str.compare("descending") == 0) {
			Descending a(n);
			a.DescendingOrderFunction();
		}
		else if (str.compare("double") == 0) {
			DoubleValue a(n);
			a.DoubleValueFunction();
		}
		else {}
	}

}