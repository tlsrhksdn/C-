//함수 중복
//동일한 이름의 함수가 공존
//다형성
//C언어에서는 불가능

//function overloading
//함수 중복이 가능한 범위
//보통 함수들 사이
//클래스의 멤버 함수들 사이
//상속 관계에 있는 기본 클래스와 파생 클래스의 멤버 함수들 사이

//함수 중복 성공 조건
//중복된 함수들의 이름 동일
//중복된 함수들의 매개 변수 타입이 다르거나 개수가 달라야 함
//리턴 타입은 함수 중복과 무관

//함수 중복 성공 사례(성공적으로 중북된 sum() 함수들)
//int sum(int a, int b, int c) {
//	return a + b + c;
//}
//double sum(double a, double b) {
//	return a + b;
//}
//int sum(int a, int b) {
//	return a + b;
//}

//중복된 sum()함수 호출,컴파일러가 구분
//int main() {
//	cout << sum(2, 5, 33);
//	cout << sum(12.5, 33.6);
//	cout << sum(2, 6);
//}

//리턴 타입이 다르다고 함수 중복이 성공하지 않는다
//int sum(int a, int b) {
//	return a + b;
//}
//double sum(int a, int b) {
//	return (double)(a + b);
//}
//
// 컴파일러는 어떤 sum() 함수를 호출하는지 구분할 수 없음
//int main() {
//	cout << sum(2, 5);
//}

//함수 중복의 편리함
//동일한 이름을 사용하면 함수 이름을 구분하여 기억할 필요 없고, 함수 호출을 잘못하는 실수를 줄일 수 있음

//함수 중복하지 않는 경우
//void msg1() {
//	cout << "Hello";
//}
//void msg2(string name) {
//	cout << "Hello." << name;
//}
// 
//void msg3(int id,string name){
//	cout << "Hello. " << id << " " << name;
//}
//함수 중복한 경우
//void msg() {
//	cout << "Hello";
//}
//void msg(string name) {
//	cout << "Hello. " << name;
//}
//void msg(int id, string name) {
//	cout << "Hello. " << id << " " << name;
//}

//예제 6-1.big()함수 중복 연습
//큰 수를 리턴하는 다음 두 개의 big 함수를 중복 구현하라

//int big(int a, int b);  //a와 b 중 큰 수 리턴
//int big(int a[], int size);  //배열 a[]에서 가장 큰 수 리턴
//
//#include<iostream>
//using namespace std;
//
//int big(int a, int b) { //a와 b 중 큰 수 리턴
//	if (a > b) return a;
//	else return b;
//}
//
//int big(int a[], int size) { //배열 a[]에서 가장 큰 수 리턴
//	int res = a[0];
//	for (int i = 0;i < size;i++) {
//		if (res < a[i]) res = a[i];
//	}
//	return res;
//}
//int main() {
//	int array[5] = { 1,9,-2,8,6 };
//	cout << big(2, 3) << endl;
//	cout << big(array, 5) << endl;
//}

//예제 6-2.sum()함수 중복 연습

//함수 sum()을 호출하는 경우가 다음과 같을 때,함수 sum()을 중복 구현하라
//sum()의 첫 번째 매개변수는 두 번째 매개변수보다 작은 정수 값으로 호출된다고 가정한다

//sum(3, 5);   //3~5까지의 합을 구하여 리턴
//sum(3);      //0~3까지의 합을 구하여 리턴 
//sum(100);    //0~100까지의 합을 구하여 리턴

//#include<iostream>
//using namespace std;
//
//int sum(int a, int b) {
//	int s = 0;
//	for (int i = a;i <= b;i++)
//		s += i;
//	return s;
//}
//int sum(int a) {
//	int s = 0;
//	for (int i = 0;i <= a;i++)
//		s += i;
//	return s;
//}
//int main() {
//	cout << sum(3, 5) << endl;
//	cout << sum(3) << endl;
//	cout << sum(100) << endl;
//	return 0;
//}

//생성자 함수 중복
//생성자 함수 중복 가능
//생성자 함수 중복 목적
//객체 생성 시, 매개 변수를 통해 다양한 형태의 초깃값 전달

//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1;}
//	Circle(int r) { radius = r; }
//};
//
//int main() {
//	Circle donut;
//	Circle pizza(30);
//}

//string 클래스의 생성자 중복 사례
//class string {
//public:
//	string(); //빈 문자열을 가진 스트링 객체 생성
//	string(string& str); //str을 복사한 새로운 스트링 객체 생성
//	string(char* s); //"\0"으로 끝나는 C-스트링 s를 스트링 객체로 생성
//};

//소멸자 함수 중복
//소멸자 함수 중복 불가
//소멸자는 매개 변수를 가지지 않음
//한 클래스 내에서 소멸자는 오직 하나만 존재

//디폴트 매개 변수
//디폴트 매개 변수
//매개 변수에 값이 넘어오지 않는 경우, 디폴트 값을 받도록 선언된 매개변수
//매개변수=디폴트값 형태로 선언

//디폴트 매개 변수 선언 사례
//void star(int a = 5); //a의 디폴트 값은 5

//디폴트 매개 변수를 가진 함수 호출
//star();  //매개 변수 a에 디폴트 값 5가 전달됨. star(5);와 동일
//star(10); //매개 변수 a에 10을 넘겨줌

//디폴트 매개 변수 사례

//사례 1
//void msg(int id, string text = "Hello"); //text의 디폴트 값은 "Hello"
//msg(10); //msg(10,"Hello"); 호출과 동일,id에 10, text에 "Hello"전달
//msg(20, "Good Morning"); //id에 20,text에 "Good Morning" 전달
//msg(); //컴파일 오류, 첫 번째 매개변수 id에 반드시 값을 전달하여야 함
//msg("Hello"); //컴파일 오류, 첫 번째 매개변수 id에 값이 전달되지 않았음

//디폴트 매개 변수에 관한 제약 조건
//디폴트 매개 변수는 매개 변수 앞에 선언될 수 없다
//끝 쪽에 몰려 선언되어야 함

//void calc(int a,int b=5,int c,int d=0); //컴파일 오류
//void sum(int a=0,int b,int c); //컴파일 오류
//void calc(int a,int b=5,int c=0,int d=0); //컴파일 성공

//예제 6-3. 디폴트 매개 변수를 가진 함수 선언 및 호출

//#include<iostream>
//#include<string>
//using namespace std;
//
//void star(int a = 5;)
//void msg(int id, string text = "");
//
//void star(int a) {
//	for (int i = 0;i < a;i++)
//		cout << "*";
//	cout << endl;
//}
//
//void msg(int id, string text) {
//	cout << id << ' ' << text << endl;
//}
//
//int main() {
//	//star() 호출
//	star();
//	star(10);
//
//	//msg() 호출
//	msg(10);
//	msg(10, "Hello");
//}

//에제 6-4.디폴트 매개 변수를 가진 함수 만들기 연습
//함수 f()를 호출하는 경우가 다음과 같을 때 
//f()를 디폴트 매개 변수를 가진 함수로 작성하라

//f(); 한 줄에 빈칸을 10개 출력한다
//f('%'); 한 줄에 '%'를 10개 출력한다
//f('@',5); 다섯 줄에 '@'를 10개 출력한다

//#include<iostream>
//using namespace std;
//
//void f(char ch= ' ', int line = 1);
//
//void f(char ch, int line) {
//	for (int i = 0;i < line;i++) {
//		for (int j = 0;j < 10;j++) {
//			cout << ch;
//		}
//		cout << endl;
//	}
//}
//int main() {
//	f(); //한줄에 빈칸을 10개 출력한다
//	f('%'); //한줄에 '%'를 10개 출력한다
//	f('@', 5);  //5줄에 '@' 문자를 10개 출력한다.
//}

//예제 6-5.디폴트 매개 변수를 이용하여 중복 함수 간소화 연습
//다음 두 개의 중복 함수를 디폴트 매개 변수를 가진 하나의 함수로 작성하라
//
//void fillLine() { //25개의 '*'문자를 한 라인에 출력
//	for (int i = 0;i < 25;i++) cout << "*";
//	cout << endl;
//}
//void fillLine(int n, char c) { //n개의 c문자를 한 라인에 출력
//	for (int i = 0;i < n;i++) cout << c;
//	cout << endl;
//}

//#include<iostream>
//using namespace std;
//
//void fillLine(int n=25,char c='*'){//n개의 c문자를 한 라인에 출력
//	for (int i = 0;i < n;i++)
//		cout << c;
//	cout << endl;
//}
//int main() {
//	fillLine(); //25개의 '*'을 한 라인에 출력
//	fillLine(10, '%'); //10개의 '%'을 한 라인에 출력
//}

//예제 6-6(실습). 생성자 함수의 중복 간소화
//다음 클래스에 중복된 생성자를 디폴트 매개 변수를 가진 하나의 생성자로 작성하라

//#include<iostream>
//using namespace std;
//
//class MyVector {
//	int* p;
//	int size;
//public:
//	MyVector(int n = 100) {
//		p = new int[n];
//		size = n;
//	}
//	~MyVector() { delete[]p; }
//};
//
//int main() {
//	MyVector* v1, * v2;
//	v1 = new MyVector(); //디폴트로 정수 1-
//}

//예제 6-7.형 변환으로 인해 함수 중복이 모호한 경우
//#include<iostream>
//using namespace std;
//
//float square(float a) {
//	return a * a;
//}
//double square(double a) {
//	return a * a;
//}
//int main() {
//	cout << square(3.0); //square(double a); 호출
//	cout << square(3);   //컴파일 오류
//}

//예제 6-8.참조 매개 변수로 인한 함수 중복의 모호성
//#include<iostream>
//using namespace std;
//
//int add(int a, int b) {
//	return a + b;
//}
//int add(int a, int& b) {
//	b = b + a;
//	return b;
//}
//int main() {
//	int s = 10, t = 20;
//	cout << add(s, t); //컴파일 오류->call by value인지 call by reference인지 모호
//}

//예제 6-9.디폴트 매개 변수로 인한 함수 중복의 모호성
//#include<iostream>
//#include<string>
//using namespace std;
//
//void msg(int id) {
//	cout << id << endl;
//}
//void msg(int id, string s = "") {
//	cout << id << "," << s << endl;
//}
//
//int main() {
//	msg(5, :"Good Morning"); //정상 컴파일, 두 번째 msg() 호출
//	msg(6); //함수 호출 모호,컴파일 오류
//}

//static 멤버와 non-static 멤버의 특성
//static
//변수와 함수에 대한 기억 부류의 한 종류
//생명 주기-프로그램이 시작될 때 생성, 프로그램 종료 시 소멸
//사용 범위-선언된 범위, 접근 지정에 따름

//클래스의 멤버
//static 멤버
//프로그램이 시작할 때 생성
//클래스 당 하나만 생성, 클래스 멤버라고 불림
//클래스의 모든 인스턴스(객체)들이 공유하는 멤버

//non-static 멤버
//객체가 생성될 때 함께 생성
//객체마다 객체 내에 생성
//인스턴스 멤버라고 불림

//static 멤버 선언
//멤버의 static 선언
//class Person {
//public:
//	int money; //개인 소유의 돈
//	void addMoney(int money) {
//		this->money = money;
//	}
//	static int sharedMoney; //공금
//	static void addShared(int  n) {
//		sharedMoney += n;
//	}
//};
//
//int Person::sharedMoney = 10;  //sharedMoney를 10으로 초기화

//static 멤버와 non-static 멤버의 관계

//static 멤버는 하나만 생성되고,모든 객체들에 의해 공유된다
//non-static 멤버는 객체마다 생성된다

//static 멤버 사용:객체의 멤버로 접근
//static 멤버는 객체 이름이나 객체 포인터로 접근, 보통 멤버처럼 접근할 수 있다

//#include<iostream>
//using namespace std;
//
//class Person {
//public:
//	int money; //개인 소유의 돈
//	void addMoney(int money) {
//		this->money += money;
//	}
//
//	static int sharedMoney;
//	static void addShared(int n) {
//		sharedMoney += n;
//	}
//};
////static 변수생성.전역 공간에 생성
//int Person::sharedMoney = 10; //10으로 초기화
//
////main()함수
//int main() {
//	Person han;
//	han.money = 100;  //han의 개인 돈=100
//	han.sharedMoney = 200; //static 멤버 접근,공금 =200
//
//	Person lee;
//	lee.money = 150;    //lee의 개인 돈=150
//	lee.addMoney(200);  //lee의 개인 돈 =350
//	lee.addShared(200); //static 멤버 접근,공금=400
//
//	cout << han.money << ' ' << lee.money << endl;
//	cout << han.sharedMoney << ' ' << lee.sharedMoney << endl;
//}

//static 멤버 사용:클래스명과 범위 저정 연산자로 접근
//클래스 이름과 범위 지정 연산자(::)로 접근 가능
//클래스명::static멤버

//han.sharedMoney = 200  < = > Person::sharedMoney = 200;

//non-static 멤버는 클래스 이름을 접근 불가
//Person::money=100; //컴파일 오류,non-static 멤버는 클래스 명으로 접근불가


//static 활용
//static의 주요 활용
//전역 변수나 전역 함수를 클래스에 캡슐화
//전역 변수나 전역 함수를 가능한 사용하지 않도록
//전역 변수나 전역 함수를 static으로 선언하여 클래스 멤버로 선언
//객체 사이에 공유 변수를 만들고자 할 때
//static 멤버를 선언하여 모든 객체들이 공유

//예제 6-11.static 멤버를 공유의 목적으로 사용하는 예

//#include<iostream>
//using namespace std;
//
//class Circle {
//private:
//	static int numOfCircles;
//	int radius;
//
//public:
//	Circle(int r = 1);
//	~Circle() { numOfCircles--; } //생성된 원의 개수 감소
//	double getArea() { return 3.14 * radius * radius; }
//	static int getNumOfCircles() { return numOfCircles; }
//};
//Circle::Circle(int r) {
//	radius = r;
//	numOfCircles++; //생성된 원의 개수 증가
//}
//int Circle::numOfCircles = 0; //0으로 초기화
//
//int main() {
//	Circle* p = new Circle[10]; //10개의 생성자 실행
//	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;
//	
//	delete[]p; //10개의 소멸자 실행
//	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;
//
//	Circle a; //생성자 실행
//	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;
//
//	Circle b;
//	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;
//}

//static 멤버 함수는 static 멤버만 접근 가능
//static 멤버 함수가 접근할 수 있는 것
//static 멤버 함수,static 멤버 변수, 함수 내의 지역 변수

//static 멤버 함수는 non-static 멤버에 접근 불가
//객체가 생성되지 않은 시점에서 static 멤버 함수가 호출될 수 있기 때문

//static 멤버 함수 getMoney()가 non-sattic 멤버변수 money를 접근하는 오류

class PersonError {
	int money;
public:
	static int getMoney() { return money; } //컴파일 오류:static 멤버 함수는 non-static 멤버에 접근할 수 없음

	void setMoney(int money)
		this->moeny = money;
};
int money() {
	int n = PersonError::getMoney();

	PersonError errorKim;
	errorKim.setMoney(100);
}