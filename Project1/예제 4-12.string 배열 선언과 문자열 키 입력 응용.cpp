////5���� string �迭�� �����ϰ�
////getline()�� �̿��Ͽ� ���ڿ��� �Է¹޾�
////���� ������ ���� �ڿ� ������ ���ڿ��� ����϶�
////���ڿ� �񱳴� <,> �����ڸ� ������ �̿��ϸ� �ȴ�
//
//#include<iostream>
//#include<string>
//using namespace std;
//
////�̸� >> Kim Nam Yun
////�̸� >> Chang Jae Young
////�̸� >> Lee Jae Moon
////�̸� >> Han Won Sun
////�̸� >> Hwang Su hee
////�������� ���� �ڿ� ������ ���ڿ��� Lee Jae Moon
//
//
//int main() {
//	string names[5];
//	
//	for (int i = 0;i < 5;i++) {
//		cout << "�̸� >> ";
//		getline(cin, names[i]);
//	}
//	string latter = names[0];
//	for (int i = 0;i < 5;i++) {
//		if (latter < names[i])
//			latter = names[i];
//	}
//	cout << "�������� ���� �ڿ� ������ ���ڿ��� " << latter << endl;
//}