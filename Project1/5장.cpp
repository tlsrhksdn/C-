//함수의 인자 전달 방식 리뷰

//인자 전달 방식

//값에 의한 호출, call by value
//함수가 호출되면 매개 변수가 스택에 생성됨
//호출하는 코드에서 값을 넘겨줌
//호출하는 코드에서 넘어온 값이 매개 변수에 복사됨

//주소에 의한 호출, call by address
//함수의 매개 변수는 포인터 타입
//함수가 호출되면 포인터 타입의 매개 변수가 스택에 생성된다
//호출하는 코드에서는 명시적으로 주소를 넘겨준다
//기본 타입 변수나 객체의 경우 주소를 전달한다
//배열의 경우 배열의 이름

//호출하는 코드에서 넘어온 주소 값이 매개 변수에 저장된다

//'값에 의한 호출'로 객체 전달

//함수를 호출하는 쪽에서 객체 전달
//객체 이름만 사용

//함수의 매개 변수 객체 생성
//매개 변수 객체의 공간이 스택에 할당
//호출하는 쪽의 객체가 매개 변수 객체에 그대로 복사됨
//매개 변수 객체의 생성자는 호출되지 않는다

//함수 종료
//매개 변수 객체의 소멸자 호출

//값에 의한 호출 시 매개 변수 객체의 생성자가 실행되지 않는 이유
//호출되는 순간의 실인자 객체 상태를 매개 변수 객체에 그대로 전달하기 위함


//예제 5-1.'값에 의한 호출'시 매개 변수의 생성자 실행되지 않음
//#include<iostream>
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	~Circle();
//	double getArea() { return 3.14 * radius * radius; }
//	int getRadius() { return radius; }
//	void setRadius(int radius) { this->radius = radius; }
//};
//Circle::Circle() {
//	radius = 1;
//	cout << "생성자 실행 radius = " << radius << endl;
//}
//Circle::Circle(int radius) {
//	this->radius = radius;
//	cout << "생성자 실행 radius = " << radius << endl;
//}
//Circle::~Circle() {
//	cout << "소멸자 실행 radius = " << radius << endl;
//}
//void increase(Circle c) //waffle의 내용이 그대로 c에 복사
//{
//	int r = c.getRadius();  
//	c.setRadius(r + !);
//}
//int main() {
//	Circle waffle(30);
//	increase(waffle);
//	cout << waffle.getRadius() << endl;
//}

//함수에 객체 전달-'주소에 의한 호출'로

//함수 호출시 객체의 주소만 전달
//함수의 매개 변수는 객체에 대한 포인터 변수로 선언
//함수 호출 시 생성자 소멸자가 실행되지 않는 구조

//객체 치환 및 객체 리턴

//객체 치환
//동일한 클래스 타입의 객체끼리 치환 가능
//객체의 모든 데이터가 비트 단위로 복사

//Circle c1(5);
//Circle c2(30);
//c1=c2;  //c2객체를 c1 객체에 비트 단위 복사. c1의 반지름 30됨

//객체 리턴
//객체의 복사본 리턴

//Circle getCircle(){
//Circle tmp(30);
//return tmp;  //객체 tmp 리턴
//}

//Circle c;  //c의 반지름 1
//c=getCircle(); //tmp 객체의 복사본이 c에 치환,c의 반지름은 30이 됨

////예제 5-3.객체 리턴
//#include<iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle() { radius - 1; }
//	Circle(int radius) { this->radius = radius; }
//	void setRadius(int radius) { this->radius = radius; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//
//Circle getCircle() {
//	Circle tmp(30);
//	return tmp;  //객체 tmp를 리턴한다.
//}
//
//int main() {
//	Circle c; //객체가 생성된다. radius=1로 초기화된다
//	cout << c.getArea() << endl;
//
//	c = getCircle(); //tmp 객체가 c에 복사된다. c의 radius는 30이 된다.
//	cout << c.getArea() << endl;
//}

//참조란?
//참조란 가리킨다는 뜻으로, 이미 존재하는 객체나 변수에 대한 설명

//참조 활용

//참조 변수
//참조에 의한 호출
//참조 리턴

//참조변수

//참조 변수 선언
//참조자 &의 도입
//이미 존재하는 변수에 대한 다른 이름(별명)을 선언
//참조변수는 이름만 생기며, 참조 변수에는 새로운 공간을 할당하지 않는다.
//초기화로 지정된 기존 변수를 공유한다.

//int n = 2;
//int& refn = n;  //참조 변수 refn 선언, refn은 n에 대한 별명
//
//Circle circle;
//Circle& refc = circle;  //참조 변수 refc 선언, refc는 circle에 대한 별명

//참조 변수 선언 및 사용 사례
//
//int n = 2;
//int& refn = n;  //refn은 n에 대한 별명
//refn = 3;

//Circle circle;
//Circle& refc = circle;  //refc는 circle 객체에 대한 별명
//
//refc.setRadius(30); //refc->setRadius(30)으로 하면 안됨.

//예제 5-3.기본 타입 변수에 대한 참조
//#include<iostream>
//using namespace std;
//
//int main() {
//	cout << "i" << "\t" << "n" << "\t" << "refn" << endl;
//	int i = 1;
//	int n = 2;
//	int& refn = n;  //참조 변수 refn 선언.refn은 n에 대한 별명
//	n = 4;
//	refn++; //refn=5,n=5
//	cout << i << "\t" << n << "\t" << refn << endl;
//
//	refn = 1; //refn=1,n=1
//	refn++; //refn=2,n=2
//	cout << i << "\t" << n << "\t" << refn << endl;
//
//	//참조에 대한 포인터 변수 선언
//	int* p = &refn;  //p는 n의 주소를 가짐
//	*p = 20;  //refn=20,n=20
//	cout << i << "\t" << n << "\t" << refn << endl;
//}

//예제 5-4. 객체에 대한 참조
//#include<iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int radius) { this->radius = radius; }
//	void setRadius(int radius) { this->radius = radius; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//
//int main() {
//	Circle circle;
//	Circle& refc = circle;  //circle 객체에 대한 참조 변수 refc 선언
//	refc.setRadius(10);
//	cout << refc.getArea() << " " << circle.getArea();
//}

//참조에 의한 호출
//참조를 가장 많이 활용하는 사례
//call by reference라고 부름

//함수 형식
//함수의 매개 변수를 참조 타입으로 선언
//참조 매개 변수라고 부름(참조 매개 변수는 실인자 변수를 참조함)
//참조 매개 변수의 이름만 생기고 공간이 생기지 않음
//참조 매개 변수는 실인자 변수 공간 공유
//참조 매개 변수에 대한 조작은 실인자 변수 조작 효과

////참조에 의한 호출 사례
//#include<iostream>
//using namespace std;
//
//void swap(int& a, int& b) { //참조 매개 변수 a,b
//	int tmp;
//
//	tmp = a;
//	a = b;       //참조 매개 변수를 보통 변수처럼 사용
//	b = tmp;
//}
//
//int main() {
//	int m = 2, n = 9;
//	swap(m, n);  //함수가 호출되면 m,n에 대한 참조 변수 a,b가 생긴다.
//	cout << m << ' ' << n;
//}

//참조 매개변수가 필요한 사례

//다음 코드의 문제점은 무엇일까
//int average(int a[], int size) {
//	if (size <= 0) return 0;
//	int sum = 0;
//	for (int i = 0;i < size;i++)
//		sum += a[i];
//	return sum / size;
//}
//int x[] = { 1,2,3,4 };
//int avg = average(x, 4);
//
//average() 함수의 작동
//계산에 오류가 있으면 0 리턴, 아니면 평균 리턴
//만일 average()의 반환값이 0이라면?
//평균이 0인지, 아니면 오류가 발생했는지 확인 불가능

//예제 5-5.참조 매개 변수로 평균 리턴하기

//참조 매개 변수를 통해 평균을 리턴하고 
//리턴문을 통해서는 함수의 성공 여부를 리턴하도록 average 함수를 작성하라
//
//#include<iostream>
//using namespace std;
//
//bool average(int a[], int size, int& avg)
//{
//	int sum = 0;
//	if (size <= 0)
//		return false;
//	else
//		for (int i = 0;i < size;i++) {
//			sum += a[i];
//		}
//	avg = sum / size;
//	return true;
//}
//
//int main(){
//	int x[] = { 0,1,2,3,4,5 };
//	int avg;
//	if (average(x, 6, avg))
//		cout << "평군은 " << avg << endl;
//	else
//		cout << "매개 변수 오류" << endl;
//
//	if (average(x, -2, avg))cout << "평균은 " << avg << endl;
//	else cout << "매개 변수 오류 " << endl;
//}

//예제 5-6.참조에 의한 호출로 Circle 객체에 참조 전달
//#include<iostream>
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	~Circle();
//	double getArea() { return 3.14 * radius * radius; }
//	int getRadius() { return radius; }
//	void setRadius(int radius) { this->radius = radius; }
//};
//
//Circle::Circle() {
//	radius = 1;
//	cout<<"생성자 실행 radius = " <<radius<<endl;
//}
//Circle::Circle(int radius) {
//	this->radius = radius;
//	cout << "생성자 실행 radius = " << radius << endl;
//}
//Circle::~Circle() {
//	cout << "소멸자 실행 radius = " << radius << endl;
//}
//
//void increaseCircle(Circle& c) {
//	int r = c.getRadius();
//	c.setRadius(r + 1);
//}

//int main() {
//	Circle waffle(30);
//	increaseCircle(waffle);
//	cout << waffle.getRadius() << endl;
//}

//예제 5-7.참조 매개 변수를 가진 함수 만들기 연습

//키보드로부터 반지름 값을 읽어 Circle 객체에 반지름을 설정하는 readRadius() 함수를 작성하라.

#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	~Circle();
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

void readRadius(Circle& c) {
	int radius;
	cout << "정수 값으로 반지름을 입력하세요>>";
	cin >> radius;
	c.setRadius(radius);
}

int main() {
	Circle donut;
	readRadius(donut);
	cout << "donut의 면적 = " << donut.getArea() << endl;
}