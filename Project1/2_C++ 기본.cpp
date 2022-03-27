//예제 2-1.기본적인 C++ 프로그램

//#include <iostream> // cout과 << 연산자 포함​
//// C++ 프로그램은 main() 함수에서부터 실행을 시작한다.​
//int main() {
//
//	std::cout << "Hello\n"; // 화면에 Hello를 출력하고 다음 줄로 넘어감​
//	std::cout << "첫 번째 맛보기입니다." << std::endl;
//	return 0;
//}

//#include<iostream>
//전처리기에게 내리는 지시
//<iostream>헤더 파일을 컴파일 전에 소스에 확장하도록 지시

//<iostream> 헤더 파일
//표준 입출력을 위한 클래스와 객체, 변수 등이 선언됨

//화면 출력
//cout와 << 연산자 이용

//cout 객체
//스크린 출력 장치에 연결된 표준 C++ 출력 스트림 객체
//<iostream> 헤더 파일에 선언
//std 이름 공간에 선언:std::cout로 사용

//<<연산자
//스트링 삽입 연산자
//C++ 기본 산술 시프트 연산자(<<) 가 스트림 삽입 연산자로 재정의됨

//#include <iostream>​​
//
//double area(int r); // 함수의 원형 선언​​
//
//double area(int r) { // 함수 구현​
//	return 3.14 * r * r; // 반지름 r의 원면적 리턴​
//}​
//
//int main() {​
//
//		int n = 3;​
//		char c = '#';​
//		std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;​
//		std::cout << "n + 5 = " << n + 5 << '\n'; ​
//		std::cout << "면적은 " << area(n); // 함수 area()의 리턴 값 출력​
//}​


////예제 2-2.cout와 <<를 이용한 화면 출력
//#include <iostream>
//
//double area(int r);  //함수의 원형 선언
//
//double area(int r) {
//	return 3.14 * r * r;
//}
//
//int main()
//{
//	int n = 3;
//	char c = '#';
//	std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;   //true는 1로 출력됨
//	std::cout << "n+5=" << n + 5 << "\n";
//	std::cout << "면적은" << area(n);  //함수 area()의 리턴 값 출력
//}
//

//namespace 개념
//이름 충돌이 발생하는 경우
//여러 명이 서로 나누어 프로젝트를 개발하는 경우
//오픈 소스 혹은 다른 사람이 작성한 소스나 목적파일을 가져와서 컴파일하거나 링크하는 경우
//해결하는 데 많은 시간과 노력이 필요

//namespace 키워드
//개발자가 자신만의 이름공간을 생성할 수 있도록 함

//std
//C++ 표준에서 정의한 이름 공간 중 하나
//<iostream>헤더 파일에 선언된 모든 이름:std 이름공간 내부에 존재
//std 이름공간에 선언된 이름을 접근하기 위해 std:: 접두어 사용
//using 지시어를 사용해 std:: 생략가능

//예제 2-3.C++ 프로그램에서 키 입력받기
//#include<iostream>
//using namespace std;
//
//int main() {
//	cout << "너비를 입력하세요 >> ";
//
//	int width;
//	cin >> width;  //키보드로부터 너비를 읽어 width 변수에 저장
//
//	cout << "높이를 입력하세요 >> ";
//
//	int height;
//	cin >> height; //키보드로부터 높이를 읽어 height 변수에 저장
//
//	int area = width * height;  //사각형의 면적 계산
//	cout << "면적은 " << area << "\n";  //면적을 출력하고 다음 줄로 넘어감
//}


//cin과 >> 연산자를 이용한 키 입력
//cin
//표준 입력 장치인 키보드를 연결하는  C++ 입력 스트림 객체

//>>연산자
//스트림 추출 연산자
//C++ 산술 시프트 연산자(>>)가 <iostream> 헤더 파일에 스트림 추출 연산자로 재정의됨
//입력 스트림에서 값을 읽어 변수에 저장
//연속된 >> 연산자를 사용하여 여러 값 입력 가능

//cin의 특징
//입력 버퍼를 내장하고 있다
//Enter키가 입력될 때까지 입력된 키를 입력 버퍼에 저장

//>> 연산자
//<Enter>키가 입력되면 비로소 cin의 입력 버퍼에서 키 값을 읽어 변수에 전달

//실행문 중간에 변수 선언
//C++의 변수 선언
//변수 선언은 아무 곳이나 가능
//C++ 변수 선언 방식의 장점
//변수를 사용하기 직전 선언함으로써 변수 이름에 대한 타이핑 오류 줄임

//C++ 변수 선언 방식의 단점
//선언된 변수를 일괄적으로 보기 힘듬
//코드 사이에 있는 변수 찾기 어려움


//타이핑 오류 가능성 해소
//선언부에 모든 변수를 선언하는 경우, 타이핑 오류 가능
//변수 사용 전에 변수를 선언하면 타이핑 오류 사전 발견

//C++ 문자열
//C++의 문자열 표현 방식:2가지
//C-스트링 방식:'\0'로 끝나는 문자 배열

//char name1[6] = { 'G', 'r', 'a', 'c', 'e', '\0' }; // name1은 문자열 “Grace”​
//
//char name2[5] = { 'G', 'r', 'a', 'c', 'e' }; // name2는 문자열이 아니고 단순 문자 배열

//char name5[10]="Grace"

//string 클래스 이용
//<string> 헤더 파일에 선언됨
//다양한 멤버 함수 제공,문자열 비교,복사,수정 등

//C-스트링 방식으로 문자열 다루기 
//C언어에서 사용한 함수 사용 가능
//strcmp,strlen,strcpy등

//<cstring>이나 <string.h> 헤더 파일 include
//<cstring> 헤더 파일을 사용하는 것이 바람직함

//cin을 이용한 문자열 입력
//char name[6]; //5개의 문자를 저장할 수 있는 char 배열
//cin >> name; //키보드로부터 문자열을 읽어 name 배열에 저장한다


//예제 2-4.키보드에서 문자열 입력 받고 출력
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	cout << "이름을 입력하세요>>";
//
//	char name[11];  //한글은 5개 글자,영문은 10까지 저장할 수 있다
//	cin >> name;    //키보드로부터 문자열을 읽는다
//
//	cout << "이름은 " << name << "입니다.\n";  //이름을 출력
//}

//예제 2-5. C스트링을 이용해 암호가 입력되면 프로그램을 종료

//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int main() {
//	char password[11];
//	cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
//	while (true) {
//		cout << "암호>>";
//		cin >> password;
//		if (strcmp(password, "C++") == 0) {
//			cout << "프로그램을 정상 종료합니다." << endl;
//			break;
//		}
//		else
//			cout << "암호가 틀립니다." << endl;
//	}
//}

//cin.getline()으로 공백이 낀 문자열 입력
//공백이 낀 문자열을 입력 받는 방법
//cin.getline(char buf[],int size,char delimitChar)
//buf에 최대 size-1개의 문자 입력,끝에 '\0' 붙임
//delimitChar을 만나면 입력 중단,끝에 '\0 붙임
//delimitChar의 디폴트 값은 '\n'(<Enter키)

//C++에서 문자열을 다루는 string 클래스
//string클래스:C++표준 클래스
//문자열의 크기에 따른 제약이 없다
//문자열 복사,비교,수정 등을 위한 다양한 함수와 연산자를 제공


//예제 2-7.string 클래스를 이용한 문자열 입력 및 다루기
#include<iostream>
#include<string>
using namespace std;

int main() {
	string song("Falling in love with you");  //문자열 song
	string elvis("Elvis Presley");  //문자열 elvis
	string singer;       //문자열

	cout << song + "를 부른 가수는";  //+로 문자열 연결
	cout << "(힌트 : 첫글자는 " << elvis[0] << ")?";  //[]연산자 사용

	getline(cin, singer);  //문자열 입력
	if(singer == elvis)    //문자열 비교
		cout << "맞았습니다";
	else
		cout << "틀렸습니다. " + elvis + "입니다" << endl;   //+로 문자열 연결
	
}