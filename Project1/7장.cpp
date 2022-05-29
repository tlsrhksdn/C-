//프랜드 함수
// 
//클래스의 멤버 함수가 아닌 외부 함수 
//전역 함수,다른 클래스의 멤버 함수
// 
//friend 키워드로 클래스 내에 선언된 함수
//클래스의 모든 멤버를 접근할 수 있는 권한 부여
//프렌드 함수라고 부름
//
//프랜드 선언의 필요성
//클래스의 멤버로 선언하기에는 무리가 있고
//클래스의 모든 멤버를 자유롭게 접근할 수 있는 일부 외부 함수 선언 시

//프렌드로 초대하는 3가지 유형
//프렌드 함수가 되는 3가지

//전역 함수:클래스 외부에 선언된 전역 함수
//다른 클래스의 멤버 함수:다른 클래스의 특정 멤버 함수
//다른 클래스 전체:다른 클래스의 모든 멤버 함수

//프렌드 선언 3종류
////1.외부 함수 equals()를 Rect 클래스에 프렌드로 선언
//class Rect{ //Rect 클래스 선언
//	friend bool equals();
//};
////2.RectManager 클래스의 equals()멤버 함수를 Rect 클래스에 프렌드로 선언
//class Rect {
//	friend bool RectManager::equals(Rect r, Rect s);
//};
////3.RectManager 클래스의 모든 멤버 함수를 Rect 클래스에 프렌드로 선언
//class Rect {
//	friend RectManager;
//};

//에제 7-1.프렌드 함수 만들기
//#include<iostream>
//using namespace std;
//
//class Rect;
//bool equals(Rect r, Rect s); //equals() 함수 선언
//
//class Rect { //Rect 클래스 선언
//	int width, height;
//public:
//	Rect(int width, int height) {
//		this->width = width;
//		this->height = height;
//	}
//	friend bool equals(Rect r, Rect s);
//
//};
//bool equals(Rect r, Rect s) { //외부 함수
//	if (r.width == s.width && r.height == s.height)
//		return true;
//	else
//		return false;
//}
//
//int main() {
//	Rect a(3, 4), b(4, 5);
//	if (equals(a, b))
//		cout << "equal" << endl;
//	else
//		cout << "not equal" << endl;
//}

//예제 7-2.다른 클래스의 멤버 함수를 프렌드로 선언
//#include<iostream>
//using namespace std;
//
//class Rect;
//
//class RectManager {
//public:
//	bool equals(Rect r, Rect s);
//};
//
//class Rect {
//	int width, height;
//public:
//	Rect(int width, int height) {
//		this->width = width;
//		this->height = height;
//	}
//	friend bool RectManager::equals(Rect r, Rect s);
//};
//
//bool RectManager::equals(Rect r, Rect s) {
//	if (r.width == s.width && r.height == s.height)
//		return true;
//	else
//		return false;
//}
//
//int main() {
//	Rect a(3, 4), b(3, 4);
//	RectManager man;
//
//	if (man.equals(a, b))
//		cout << "equal" << endl;
//	else
//		cout << "not equal" << endl;
//}

//예쩨 7-3.다른 클래스 전체를 프렌드로 선언
//#include<iostream>
//using namespace std;
//
//class Rect;
//
//class RectManager { //RectManager 클래스 선언
//public:
//	bool equals(Rect r, Rect s);
//	void copy(Rect& dest, Rect& src);
//};
//
//class Rect { //Rect 클래스 선언
//	int width, height;
//public:
//	Rect(int width, int height) {
//		this->width = width;
//		this->height = height;
//	}
//	friend RectManager; //RectManager() 클래스를 프렌드 함수로 선언
//};
//bool RectManager::equals(Rect r, Rect s) {
//	if (r.width == s.width && r.height == s.height)
//		return true;
//	else
//		return false;
//}
//void RectManager::copy(Rect& dest, Rect& src) { //src를 dest에 복사
//	dest.width == src.width;
//	dest.height == src.height;
//}
//
//int main() {
//	Rect a(3, 4), b(5, 6);
//	RectManager man;
//
//	man.copy(b, a);
//	if (man.equals(a, b))
//		cout << "equal" << endl;
//	else
//		cout << "not equal" << endl;
//}

//연산자 중복
//일상 생활에서의 기호 사용
//+기호의 사례
//숫자 더하기:2+3=5
//색 혼합:빨강+파랑=보라
//생활:남자+여자=결혼

//+ 기호를 숫자와 물체에 적용,중복 사용
//+ 기호를 숫자가 아닌 곳에도 사용
//간결한 의미 전달
//다형성

//C++언어에서도 연산자 중복 가능
//C++ 언어에 본래부터 있던 연산자에 새로운 의미 정의
//높은 프로그램 가독성

//연산자 중복의 사례:+ 연산자에 대해
//정수 더하기
//int a=2,b=3,c;
//c=a+b; //+ 결과 5, 정수가 피연산자일 때 2와 3을 더하기

//문자열 합치기
//string a="C",c;
//c=a+ "++"; //+ 결과 "C++" 문자열이 피연산자일때 두 개의 문자열 합치기

//색 섞기
//Color a(BLUE),b(RED),c;
//c=a+b; //c=VIOLET. a,b의 두 색을 섞은 새로운 Color 객체 c

//배열 합치기
//SortedArray a(2,5,9),b(3,7,10),c;
//c=a+b; //c={2,3,5,7,9,10}; 정렬된 두 배열을 결합한 새로운 배열 생성

//연산자 중복의 특징
//c++에 본래 있는 연산자만 중복 가능
//피 연산자 타입이 다른 새로운 연산 정의
//연산자는 함수 형태로 구현-연산자 함수
//반드시 클래스와 관계를 가짐
//피연산자의 개수를 바꿀 수 없음
//연산의 우선 순위 변경 안됨
//모든 연산자가 중복 가능하지 않음

//연산자 함수

//연산자 함수 구현 방법 2가지
//1.클래스의 멤버 함수로 구현
//2.외부 함수로 구현하고 클래스에 프렌드 함수로 선언

//연산자 함수 형식
//리턴타입 operator연산자(매개변수리스트);

//+와 ==연산자의 작성 사례

//외부 함수로 구현되고 클래스에 프렌드로 선언되는 경우
//Color operator + (Color op1, Color op2); //외부 함수
//bool operator ==(Color op1, Color op2);  //외부 함수
//
//class Color {
//	friend Color operator+(Color op1, Color op2);
//	friend bool operator==(Color op1, Color op2);
//};
//
////클래스의 멤버 함수로 작성되는 경우
//class Color {
//	Color operator+(Color op2);
//	bool operator==(Color op2);
//};
