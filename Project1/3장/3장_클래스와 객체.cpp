//세상의 모든 물체들은 객체로 표현할 수 있다

//캡슐화
//객체의 본질적인 특성
//객체를 캡슐로 싸서 그 내부를 보호하고 볼 수 없게 한다

//캡슐화의 목적
//객체 내 데이터에 대한 보안,보호,외부 접근 제한

//객체의 일부 요소는 공개된다
//외부와의 인터페이스(정보 교환 및 통신)을 위해 객체의 일부분 공개


//객체는 상태와 행동으로 구성

//ex)TV 객체 사례
//상태
//on/off 속성-현재 작동 중인지 표시
//채널-현재 방송중인 채널
//음량-현재 출력되는 소리 크기

//행동
//켜기
//끄기
//채널 증가
//채널 감소
//음량 증가
//음량 줄이기

//클래스
//객체를 만들어내기 위해 정의된 설계도,틀
//맴버 변수와 멤버 함수 선언

//객체
//생성될 때 클래스의 모양을 그대로 가지고 탄생
//멤버 변수와 멤버 함수로 구성
//메모리에 생성,실체라고 부름
//하나의 클래스 틀에서 여러 개의 객체 생성 가능
//상호 별도의 공간에 생성


//예제 3-1.Circle 클래스의 객체 생성 및 활용
//#include<iostream>
//using namespace std;
//
//class Circle {
//public:
//	int radius;
//	double getArea();
//};
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle donut;  //객체 donut 생성
//	donut.radius = 1;  //객체 donut의 멤버변수접근,donut 객체의 면적 알아내기
//	double area = donut.getArea(); //donut의 멤버함수 호출,donnut 객체의 면적 알아내기
//	cout << "donut 면적은 " << area << endl;
//
//	Circle pizza;
//	pizza.radius = 30; //pizza 객체의 반지름을 30으로 설정
//	area = pizza.getArea();  //pizza 객체의 면적 알아내기
//	cout << "pizza 면적은 " << area << endl;
//}

//예제 3-2.Rectangle 클래스 만들기  (성공!)
//#include<iostream>
//using namespace std;
//
//class Rectangle {
//public:
//	int width;
//	int height;
//	int getArea();
//};
//
//int Rectangle::getArea()
//{
//	return width * height;
//}
//
//int main() {
//	Rectangle rect;
//	rect.width = 3;
//	rect.height = 5;
//	cout << "사각형의 면적은 " << rect.getArea() << endl;
//	return 0;
//}

//생성자
//객체가 생성되는 시점에서 자동으로 호출되는 멤버 함수
//클래스 이름과 동일한 멤버 함수

//생성자의 목적
//객체가 생성될 때 객체가 필요한 초기화를 위해

//생성자의 이름
//반드시 클래스 이름과 동일

//생성자는 리턴 타입을 선언하지 않는다
//리턴 타입 없음.void 타입도 안됨

//객체 생성 시 오직 한 번만 호출
//자동으로 호출됨,임의로 호출할 수 없음,각 객체마다 생성자 실행

//생성자는 중복 가능
//생성자는 한 클래스 내에 여러 개 가능
//중복된 생성자 중 하나만 실행

//생성자가 선언되어 있지 않으면 기본 생성자 자동으로 생성
//기본 생성자-매개변수 없는 생성자
//컴파일러에 의해 자동 생성


//예제 3-3.2개의 생성자를 가진 Circle 클래스
//#include<iostream>
//using namespace std;
//
//class Circle {
//public:
//	int radius;
//	Circle(); //매개 변수 없는 생성자
//	Circle(int r);  //매개 변수 있는 생성자
//	double getArea();
//};
//Circle::Circle() {
//	radius = 1;
//	cout << "반지름 " << radius << " 원 생성" << endl;
//}
//Circle::Circle(int r) {
//	radius = r;
//	cout << "반지름 " << radius << " 원 생성" << endl;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle donut;    //매개 변수 없는 생성자 호출
//	double area = donut.getArea();
//	cout << "donut 면적은 " << area << endl;
//
//	Circle pizza(30);  //매개 변수 있는 생성자 호출
//	area = pizza.getArea();
//	cout << "pizza 면적은 " << area << endl;
//
//	return 0;
//}

//생성자가 다른 생성자를 호출(위임 생성자)
// 여러 생성자에 중복 작성된 코드를 최소화
// 타겟 생성자와 위임 생성자로 나누어 작성
// 타겟 생성자:객체 초기화를 전담하는 생성자
//위임 생성자:타겟 생성자를 호출하는 생성자,객체 초기화를 타겟 생성자에 위임


//예제 3-4.생성자에서 다른 생성자 호출 연숩
//#include<iostream>
//using namespace std;
//
//class Circle {
//public:
//	int radius;
//	Circle();  //위임 생성자
//	Circle(int r);  //타겟 생성자
//	double getArea();
//};
//
//Circle::Circle() :Circle(1) {}  //위임 생성자
//
//Circle::Circle(int r) {   //호출 생성자
//	radius = r;
//	cout << "반지름 " << radius << " 원 생성" << endl;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main()
//{
//	Circle donut; //매개 변수 없는 생성자 호출
//	double area = donut.getArea(); 
//	cout << "dount 면적은" << area << endl;
//
//	Circle pizza(30);  //매개 변수 있는 생성자 호출
//	area = pizza.getArea();
//	cout << "pizza 면적은 " << area << endl;
//}

//다양한 생성자의 멤버 변수 초기화 방법
//class Point {
//	int x, y;
//public:
//	Point();
//	Point(int a, int b);
//};

//1.생성자 코드에서 멤버 변수 초기화
//Point::Point() { x = 0, y = 0; }
//Point::Point(int a, int b) { x = a, y = b };

//2.생성자 서두에 초깃값으로 초기화
/*Point::Point() :x(0), y(0) {}  *///멤버 변수 x,y를 0으로 초기화
/*Point::Point(int a, int b) : x(a), y(b) {} */ //멤버 변수 x=a로,y=b로 초기화
            
 
//3.클래스 선언부에서 직접 초기화
//class Point { 
//	int x = 0, y = 0;     //클래스 선언부에서 x,y를 0으로 직접 초기화
//public:
//};

//예제 3-5.멤버변수의 초기화와 위임 생성자 활용
//#include<iostream>
//using namespace std;
//
//class Point {
//	int x, y;
//public:
//	Point();
//	Point(int a, int b);
//	void show() {
//		cout << "(" << x << ", " << y << ")" << endl;
//	}
//};
//
//Point::Point() { x = 0, y = 0; } //위임 생성자
//
//Point::Point(int a, int b) { x = a, y = b;}  //타겟 생성자
//
//int main()
//{
//	Point origin;
//	Point target(10, 20);
//	origin.show();
//	target.show();
//}

//기본 생성자
//클래스에 생성자가 하나도 선언되어 있지 않은 경우 컴파일러가 대신 삽입해주는 생성자
//매개변수 없는 생성자
//디폴트 생성자라고도 불린다

//기본 생성자가 자동으로 생성되는 경우
//생성자가 하나도 작성되어 있지 않은 클래스의 경우 컴파일러가 기본 생성자를 자동 생성한다

//기본 생성자가 자동으로 생성되지 않는 경우
//생성자가 하나라도 선언된 클래스의 경우 컴파일러는 기본 생성자를 자동 생성하지 않는다

//#include<iostream>
//using namespace std;
//
//class Rectangle {
//public:
//	int width;
//	int height;
//	Rectangle();
//	Rectangle(int a, int b);
//	Rectangle(int x);
//	bool isSquare();
//};
//Rectangle::Rectangle() {
//	width = height = 1;
//}
//Rectangle::Rectangle(int a, int b) {
//	width = a;
//	height = b;
//}
//Rectangle::Rectangle(int x) {
//	width = height = x;
//}
//bool Rectangle::isSquare()
//{
//	if (width == height)
//		return true;
//	else
//		return false;
//}
//
//int main() {
//	Rectangle rect1;
//	Rectangle rect2(3, 5);
//	Rectangle rect3(3);
//
//	if (rect1.isSquare())cout << "rect1은 정사각형이다." << endl;
//	if (rect2.isSquare())cout << "rect2은 정사각형이다." << endl;
//	if (rect3.isSquare())cout << "rect3은 정사각형이다." << endl;
//}

//소멸자
//객체가 소먈되는 시점에서 자동으로 호출되는 함수
//오직 한번만 자동 호출,임의로 호출할 수 없듬
//객체 메모리 소멸 직전 호출된다

//class Circle {
//    Circle();
//    Circle(int r);
//
//    ~Circle();  //리턴 타빕 x,매개 변수 x
//};

//Circle::~Circle() {
//    //소멸자 함수 구현
//}

//소멸자 특징
// 소멸자 목적
// 
// 객체가 사라질 때 마무리 작업을 위함
// 실행 도중 동적으로 할당 받은 메모리 해제,파일 저장 및 닫기,네트워크 닫기 등
// 
// 소멸자 함수의 이름은 클래스 이름 앞에 ~를 붙인다
// 
// 소멸자는 리턴 타입이 없고,어떤 값도 리턴하면 안됨
// 
// 중복 불가능
// 소멸자는 한 클래스 내에 오직 한 개만 작성 가능
// 소멸자는 매개 변수 없는 함수
// 
// 소멸자가 선언되어 있지 않으면 기본 소멸자가 자동 생성
// 컴파일러에 의해 기본 소멸자 코드 생성
// 컴파일러가 생성한 기본 소멸자:아무 것도 하지 않고 단순 리턴
// 
//#include<iostream>
//using namespace std;
//
//class Circle {
//public:
//    int radius;
//
//    Circle();
//    Circle(int r);
//    ~Circle();
//    double getArea();
//};
//
//Circle::Circle() {
//    radius = 1;
//    cout << "반지름" << radius << "원 생성" << endl;
//}
//
//Circle::Circle(int r) {
//    radius = r;
//    cout << "반지름" << radius << "원 생성" << endl;
//}
//Circle::~Circle() {
//    cout << "반지름" << radius << "원 소멸" << endl;
//}
//
//double Circle::getArea() {
//    return 3.14 * radius * radius;
//}
//
//int main() {
//    Circle donut;
//    Circle pizza(30);
//
//    return 0;
//}

//생성자/소멸자 실행 순서
//객체가 선언된 위치에 따른 분류

//지역 객체
//함수 내에 선언된 객체로서 함수가 종료하면 소멸된다

//전역 객체
//함수의 바깥에 선언된 객체로서 프로그램이 종료할 때 소멸된다

//객체 생성 순서
//전역 객체는 프로그램에 선언된 순서로 생성
//지역 객체는 함수가 호출되는 순간에 순서대로 생성

//객체 소멸 순서
//함수가 종료하면 지역 객체가 생성된 순서의 역순으로 소멸
//프로그램이 종료하면 전역 객체가 생성된 순서의 역순으로 소멸

//new를 이용하여 동적으로 생성된 객체의 경우
//new를 실행하는 순간 객체 생성
//delete 연산자를 실행할 때 객체 소멸

//예제 3-8.지역 객체와 전역 객체의 생성 및 소멸 순서
//#include<iostream>
//using namespace std;
//
//class Circle {
//public:
//    int radius;
//    Circle();
//    Circle(int r);
//    ~Circle();
//    double getArea();
//};
//
//Circle::Circle() {
//    radius = 1;
//    cout << "반지름" << radius << "원 생성" << endl;
//}
//Circle::Circle(int r) {
//    radius = r;
//    cout << "반지름" << radius << "원 생성" << endl;
//}
//Circle::~Circle() {
//    cout << "반지름" << radius << "원 소멸" << endl;
//}
//double Circle::getArea() {
//    return 3.14 * radius * radius;
//}
//
//Circle globalDonut(1000);
//Circle globalPizza(2000);
//
//void f() {
//    Circle fDonut(100);
//    Circle fPizza(200);
//}
//
//int main() {
//    Circle mainDonut;
//    Circle mainPizza(30);
//    f();
//}

//접근 지정자
//캡슐화의 목적
//객체 보호,보안
//C++에서 객체의 캡슐화 전략
//객체의 상태를 나타내는 데이터 멤버(멤버 변수)에 대한 보호
//중요한 멤버는 다른 클래스나 객체에서 접근할 수 없도록 보호
//외부와의 인터페이스를 위해서 일부 멤버는 외부에 접근 허용

//멤버에 대한 3가지 접근 지정자
//private
//동일 클래스의 멤버 함수에만 제한함
//public
//모든 다른 클래스에 허용
//protected
//클래스 자신과 상속받은 자식 클래스에만 허용

//멤버 변수는 private 지정이 바람직함

//예제 3-9.코드에서 컴파일 오류가 발생하는 곳 찾기
//#include<iostream>
//using namespace std;
//
//class PrivateAccessError {
//private:
//    int a;
//    void f();
//    PrivateAccessError();
//public:
//    int b;
//    PrivateAccessError(int x);
//    void g();
//};
//PrivateAccessError::PrivateAccessError() {
//    a = 1;
//    b = 1;
//}
//PrivateAccessError::PrivateAccessError(int x) {
//    a = x;
//    b = x;
//}
//void PrivateAccessError::f() {
//    a = 5;
//    b = 5;
//}
//void PrivateAccessError::g() {
//    a = 6;
//    b = 6;
//}
//
//int main() {
//    PrivateAccessError objA;     //생성자 PrivateAccessError()는 private이므로 main()에서 호출할 수 없다
//    PrivateAccessError objB(100);  
//    objB.a = 10;       //a는 PrivateAccessError 클래스의 private 멤버이므로 main()에서 접근할 수 없다
//    objB.b = 20; 
//    objB.f();          //f는 PrivateAccessError 클래스의 private 멤버이므로 main()에서 호출할 수 없다
//    objB.g();
//
//}

//함수 호출에 따른 시간 오버헤드

//함수 호출->돌아올 리턴 주소 저장->CPU 레지스터 값 저장->함수의 매개 변수를 스텍에 저장->함수 실행->함수 리턴값을 임시 장소에 저장->저장한 레지스터 값 CPU에 복귀->돌아갈 주소값을 알아내어 리턴
//작은 크기의 함수를 호출하면 함수 실행 시간에 비해 호출을 위해 소요되는 부가적인 시간 오버헤드가 상대적으로 크다

//인라인 함수
//inline 키워드로 선언된 함수

//인라인 함수에 대한 처리
//인라인 함수를 호출하는 곳에 인라인 함수 코드를 확장 삽입
//매크로와 유사
//코드 확장 후 인라인 함수는 사라짐
//인라인 함수 호출
//함수 호출에 따른 오버헤드 존재하지 않음
//프로그램의 실행 속도 개선

//인라인 함수의 목적
//C++ 프로그램의 실행 속도 향상
//자주 호출되는 짧은 코드의 함수 호출에 대한 시간 소모를 줄임
//C++에는 짧은 코드의 멤버 함수가 많기 때문

//인라인 함수 사례
//#include<iostream>
//using namespace std;
//
//inline int odd(int x) {
//    return (x % 2);
//}
//
//int main() {
//    int sum = 0;
//
//    for (int i = 0;i <= 10000;i++) {
//        if (odd(i))
//            sum += i;
//    }
//    cout << sum;
//}

//인라인 함수 장단점 및 자동 인라인
//장점
//프로그램의 실행 시간이 빨라진다

//단점
//인라인 함수 코드의 삽입으로 컴파일된 전체 코드 크기 증가

//자동 인라인 함수
//클래스 선언부에 구현된 멤버 함수
//inline으로 선언할 필요 없음
//컴파일러에 의해 자동으로 인라인 처리
//생성자를 포함한 모든 함수가 자동 인라인 함수 가능

//class Circle {
//private:
//    int radius;
//public:
//    Circle();
//    Circle(int r);
//    double getArea();
//};
//
//inline Circle::Circle() {
//    radius = 1;
//}//inline 멤버함수
//
//Circle::Circle(int r) {
//    radius = r;
//}
//
//inline double Circle::getArea() {
//    return 3.14 * radius * radius;
//}

//C++ 구조체
//상속,멤버,접근 지정 등 모든 것이 클래스와 동일
//클래스와 유일하게 다른 점
//구조체의 디폴트 접근 지정-public
//클래스의 디폴트 접근 지정-private

//C++에서 구조체를 수용한 이유
//C언어와의 호환성
//C의 구조체 100% 호환 수용
//C 소스를 그대로 가져다 쓰기 위해

//구조체 객체 생성
//struct 키워드 생략

//구조체와 클래스의 디폴트 접근 지정 비교

//예제 3-10.Circle 클래스를 C++ 구조체를 이용해 재작성

//#include<iostream>
//using namespace std;
//
////C++ 구조체 선언
//struct StructCircle {
//private:
//    int radius;
//public:
//    StructCircle(int r) {
//        radius = r;         //구조체의 생성자
//    }
//    double getArea();
//};
//
//double StructCircle::getArea() {
//    return 3.14 * radius * radius;
//}
//int main()
//{
//    StructCircle waffle(3);
//    cout << "면적은" << waffle.getArea();
//}

//바람직한 C++ 프로그램 작성법
//클래스를 헤더 파일과 cpp 파일로 분리하여 작성
//클래스마다 분리 저장
//클래스 선언 부:헤더 파일에 저장
//클래스 구현 부:cpp 파일에 저장
//main()등 전역 함수나 변수는 다른 cpp 파일에 분산 저장

//헤더 파일의 중복 문제:조건 컴파일로 해결한다

//예제 3-11.헤더 파일과 cpp 파일로 분리하기
//#include<iostream>
//using namespace std;
//
//class Adder {  //덧셈 모듈 클래스
//    int op1, op2;
//public:
//    Adder(int a, int b);
//    int process();
//};
//
//Adder::Adder(int a, int b) {
//    op1 = a, op2 = b;
//}
//
//int Adder::process() {
//    return op1 + op2;
//}
//
//class Calculator { //계산기 클래스
//public:
//    void run();
//};
//
//void Calculator::run() {
//    cout << "두 개의 수를 입력하세요>>";
//    int a, b;
//    cin >> a >> b;            //정수 두 개 입력
//    Adder adder(a, b);        //덧셈기 생성
//    cout << adder.process();  //덧셈 계산
//}
//
//int main() {
//    Calculator calc;  //calc 객체 생성
//    calc.run();       //계산기 시작
//}