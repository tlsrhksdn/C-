//#include<iosteam>
//#include<string>
//using namespace std;
//
////7 + 23 + 5 + 100 + 25�� ���� ���� ���ڿ��� �Է��ϼ���.
////66 + 2 + 8 + 55 + 100
////66
////2
////8
////55
////100
////���ڵ��� ���� 231
//
//int main() {
//	string s;
//	cout << "7 + 23 + 5 + 100 + 25�� ���� ���� ���ڿ��� �Է��ϼ���." << endl;
//	getline(cin, s, '\n');
//	int sum = 0;
//	int startindex = 0;
//	while (true) {
//		int findex = s.find('+', startindex);
//		if (findex == -1) { //'+'���� �߰��� �� ����
//			string part = s.substr(startindex);
//			if (part == "") break; //"2+3+",�� +�� ������ ���
//			cout << part << endl;
//			sum += stoi(part); //���ڿ��� ���� ��ȯ�Ͽ� ���ϱ�
//			break;
//		}
//		int count = findex - startindex; //���꽺Ʈ������ �ڸ� ���� ����
//		string part = s.substr(startindex, count);  //startIndex���� count���� ���ڷ� ���꽺Ʈ�� �����
//		cout << part << endl;
//		sum += stoi(part); //���ڿ��� ���� ��ȯ�Ͽ� ���ϱ�
//		startindex = findex + 1;  //�˻��� ������ �ε��� ������Ŵ
//	}
//	cout << "���ڵ��� ���� " << sum;
//}