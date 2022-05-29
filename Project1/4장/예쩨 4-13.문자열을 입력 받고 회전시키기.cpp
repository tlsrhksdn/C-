//빈칸을 포함하는 문자열을 입력받고,
//한 문자씩 왼쪽으로 회전하도혹 문자열을 변경하고 출력한다

//문자열을 입력하세요(한글 안됨)
//I love you
//love youI
//love youI
//ove youI l
//ve youI lo
//e youI lov
//youI love
//youI love
//ouI love y
//uI love yo
//I love you

//#include<iostream>
//#include<string>
//using namespace std;
//
//int main() {
//	string s;
//	cout << "문자열을 입력하세요(한글 안됨)" << endl;
//	getline(cin, s);
//
//	int len = s.length();
//
//	for (int i = 0;i < len;i++)
//	{
//		string first = s.substr(0, 1);
//		string last = s.substr(1, len-1);
//		s = last + first;
//		cout << s << endl;
//	}
//}