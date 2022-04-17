////5개의 string 배열을 선언하고
////getline()을 이용하여 문자열을 입력받아
////사전 순으로 가장 뒤에 나오는 문자열을 출력하라
////문자열 비교는 <,> 연산자를 간단히 이용하면 된다
//
//#include<iostream>
//#include<string>
//using namespace std;
//
////이름 >> Kim Nam Yun
////이름 >> Chang Jae Young
////이름 >> Lee Jae Moon
////이름 >> Han Won Sun
////이름 >> Hwang Su hee
////사전에서 가장 뒤에 나오는 문자열은 Lee Jae Moon
//
//
//int main() {
//	string names[5];
//	
//	for (int i = 0;i < 5;i++) {
//		cout << "이름 >> ";
//		getline(cin, names[i]);
//	}
//	string latter = names[0];
//	for (int i = 0;i < 5;i++) {
//		if (latter < names[i])
//			latter = names[i];
//	}
//	cout << "사전에서 제일 뒤에 나오는 문자열은 " << latter << endl;
//}