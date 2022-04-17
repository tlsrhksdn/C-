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
//
//	cout << "문자열을 입력하세요(한글 안됨) "<<endl;
//	getline(cin,s);
//	int len = s.length();  //문자열의 길이
//	
//	for (int i = 0;i < len;i++) {
//		string first = s.substr(0, 1);  //맨 앞의 문자 1개를 문자열로 분리
//		string sub = s.substr(1, len - 1); //나머지 문자들을 문자열로 분리
//		s = sub + first; //두 문자열을 연결하여 새로운 문자열로 만듬
//		cout << s << endl;
//	}
//}