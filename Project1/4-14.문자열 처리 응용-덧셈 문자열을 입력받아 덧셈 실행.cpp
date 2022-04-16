//#include<iosteam>
//#include<string>
//using namespace std;
//
////7 + 23 + 5 + 100 + 25와 같이 덧셈 문자열을 입력하세요.
////66 + 2 + 8 + 55 + 100
////66
////2
////8
////55
////100
////숫자들의 합은 231
//
//int main() {
//	string s;
//	cout << "7 + 23 + 5 + 100 + 25와 같이 덧셈 문자열을 입력하세요." << endl;
//	getline(cin, s, '\n');
//	int sum = 0;
//	int startindex = 0;
//	while (true) {
//		int findex = s.find('+', startindex);
//		if (findex == -1) { //'+'문자 발견할 수 없음
//			string part = s.substr(startindex);
//			if (part == "") break; //"2+3+",즉 +로 끝나는 경우
//			cout << part << endl;
//			sum += stoi(part); //문자열을 수로 변환하여 더하기
//			break;
//		}
//		int count = findex - startindex; //서브스트링으로 자를 문자 개수
//		string part = s.substr(startindex, count);  //startIndex부터 count개의 문자로 서브스트링 만들기
//		cout << part << endl;
//		sum += stoi(part); //문자열을 수로 변환하여 더하기
//		startindex = findex + 1;  //검색을 시작할 인덱스 전진시킴
//	}
//	cout << "숫자들의 합은 " << sum;
//}