////&�� �Էµ� ������ ���� ���� ���� ���ڿ��� �Է¹ް�
////ã�� ���ڿ��� ��ġ�� ���ڿ��� ���� �Է¹޾� ���ڿ��� �����϶�
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main() {
//	string s;
//	cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�." << endl;
//	getline(cin, s, "&");
//	cin.ignore();  //&�ڿ� ������� <Ebter>Ű�� �����ϱ� ���� �ڵ�
//	strint f, r;
//	cout << < endl << "find:";
//	getline(cin, f, '\n');  //�˻��� ���ڿ� �Է�
//	cout << "replace: "; 
//	getline(cin, r, "\n");  //��ġ�� ���ڿ� �Է�
//
//	int startIndex = 0;
//	while (true) {
//		int findex = s.find(f, startIndex);  //startIndex���� ���ڿ� f �˻�
//		if (findex == -1)
//			break;
//		s.replace(findex, f.length(), r);  //findex�κ��� ���ڿ� f�� ���̸�ŭ ���ڿ� r�� ����
//		startindex = findex + r.length();
//	}
//	cout << s << endl;
//}