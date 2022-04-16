//객체 포인터

//객체에 대한 포인터
//객체의 주소 값을 가지는 변수

//포인터로 멤버를 접근할 때
//객체포인터->멤버

//#include<iostream>
//using namespace std;
// 
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }
//	double getArea();
//};
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle donut;
//	Circle pizza(30);
//
//	//객체 이름으로 멤버 접근
//	cout << donut.getArea() << endl;
//
//	//객체 포인터로 멤버 접근
//	Circle* p;
//	p = &donut;
//	cout << p->getArea() << endl;  //donut의 getArea() 호출
//	cout << (*p).getArea() << endl;  //donut의 getArea() 호출
//
//	p = &pizza; 
//	cout << p->getArea() << endl;   //pizza의 getArea() 호출
//	cout << (*p).getArea() << endl; //pizza의 getArea() 호출
//}

//객체 배열 생성 및 소멸

//객체 배열 선언 가능

//기본 타입 배열 선언과 형식 동일

//int n[3];  //정수형 배열 선언
//Circle c[3];   //Circle 타입의 배열 선언

//객체 배열 선언 
//1.객체 배열을 위한 공간 할당
//2.배열의 각 원소 객체마다 생성자 실행
//c[0]의 생성자,c[1]의 생성자,c[2]의 생성자 실행
//매개 변수 없는 생성자 호출

//매개 변수 있는 생성자를 호춣할 수 없음
//Circle circleArray[3](5);  //오류

//배열 소멸
//배열의 각 객체마다 소멸자 호출, 생성의 반대순으로 소멸
//c[2]의 소멸자,c[1]의 소멸자, c[0]의 소멸자 실행

//예제 4-2.Circle 클래스의 배열 선언 및 활용
//#include<iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }
//	void setRadius(int r) { radius = r; }
//	double getArea();
//};
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle circleArray[3];
//
//	//뱅려의 각 원소 객체의 멤버 접근
//	circleArray[0].setRadius(10);
//	circleArray[1].setRadius(20);
//	circleArray[2].setRadius(30);
//
//	for (int i = 0;i < 3;i++)
//		cout << "Circle " << i << " 의 면적은 " << circleArray[i].getArea() << endl;


//객체 배열 생성시 기본 생성자 호출
//#include<iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	double getArea() {
//		return 3.14 * radius * radius;
//	}
//};
//
//int main() {
//	Circle circleArray[3];
//}
//
//#include<iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle(int r) { radius = r; }
//	double getArea() {
//		return 3.14 * radius * radius;
//	}
//};
//
//int main() {
//	Circle waffle(15);
//	Circle circleArray[3]; //기본 생성자 Circle() 호출, 기본 생성자가 없으므로 컴파일 오류
//}

//객체 배열 초기화
//배열의 각 원소 객체당 생성자 지정하는 방법
//Circle circleArray[3] = { Circle(10),Circle(20),Circle() };
//circleArray[0] 객체가 생성될 때, 생성자 Circle(10) 호출
//circleArray[1] 객체가 생성될 때, 생성자 Circle(20) 호출
//circleArray[2] 객체가 생성될 때, 생성자 Circle() 호출

//예제 4-3. 객체 배열 초기화
//#include<iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }
//	void setRadius(int r) { radius = r; }
//	double getArea();
//};
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle circleArray[3] = { Circle(10),Circle(20),Circle() };  //Circle 배열 초기화
//
//	for (int i = 0;i < 3;i++) {
//		cout << "Circle" << i << "의 면적은 " << circleArray[i].getArea() << endl;
//	}
//}

//예제 4-4.Circle 클래스의 2차원 배열 선언 및 활용
//#include<iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }
//	void setRadius(int r) { radius = r; }
//	double getArea();
//};
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle circle[2][3];
//	circle[0][0].setRadius(1);
//	circle[0][1].setRadius(2);
//	circle[0][2].setRadius(3);
//	circle[1][0].setRadius(4);
//	circle[1][1].setRadius(5);
//	circle[1][2].setRadius(6);
//
//	for(int i=0;i<2;i++)   //배열의 각 원소 객체의 멤버 접근
//		for (int j = 0;j < 3;j++) {
//			cout << "Circle [" << i <<"," << j << "]의 면적은 ";
//			cout << circle[i][j].getArea() << endl;
//		}
//
//}

//동적 메모리 할당 및 변환
//정적 할당
//변수 선언을 통해 필요한 메모리 할당
//많은 양의 메모리는 배열 선언을 통해 할당

//동적 할당
//필요한 양이 예측되지 않는 경우 프로그램 작성 시 할당 받을 수 없다
//실행 중에 힙 메모리에서 할당
//힙:운영체제가 프로세스(프로그램)의 실행을 시작시킬 때 동적 할당 공간으로 준 메모리 공간

//C언어의 동적 메모리 할당:malloc()/free() 라이브러리 함수 사용
//C++의 동적 메모라 할당/반환

//new 연산자
//기본 타입 메모리 할당, 배열 할당, 객체 할당. 객체 배열 할당
//객체의 동적 생성-힙 메모리로부터 객체를 위한 메모리 할당 요청
//객체 할당 시 생성자 호출

//delete 연산자
//new로 할당 받은 메모리 반환
//객체의 동적 소멸-소멸자 호출 뒤 객체를 힙에 반환

//new/delete 연산자의 사용 형식
//데이터타입 *포인터변수=new 데이터타입;
// delete 포인터변수;

//new/delete의 사용
//int* pint = new int;  //int 타입의 메모리 동적 할당
//char* pChar = new char;  //char 타입의 메모리 동적 할당
//Circle* pCircle = new Circle();  //Circle 클래스 타입의 메모리 동적 할당
//
//delete pint;   //할당 받은 정수 공간 반환
//delete pChar;  //할당 받은 문자 공간 반환
//delete pCircle;  //할당 받은 객체 공간 반환

//기본 타입의 메모리 동적 할당 및 반환

//예제 4-5.정수형 공간의 동적 할당 및 반환 예
// *p = 5
//n = 5

//#include<iostream>
//using namespace std;
//
//int main() {
//	int* p = new int;
//	if (!p) {
//		cout << "메모리를 할당할 수 없습니다.";
//		return 0;
//	}
//	*p = 5;//할당받은 정수 공간에 5 삽입
//	int n = *p;
//	cout << "*p = " << *p << "\n";
//	cout << "n = " << n << "\n";
//
//	delete p;
//}

//delete 사용 시 주의 사항
//적절치 못한 포인터로 delete하면 실행 시간 오류 발생

//동적으로 할당 받지 않는 메모리 반환-오류
//int n;
//int* p = &n;
//delete p;  //실행 시간 오류
//포인터 p가 가리키는 메모리는 동적으로 할당받은 것이 아님

//동일한 메모리 두 번 반환-오류
//int* p = new int;
//delete p;  //정상적인 메모리 반환
//delete p;  //실행 시간 오류,이미 반환한 메모리를 중복 반환할 수 없음

//배열의 동적 할당 및 반환
//new/delete 연산자의 사용 형식
//데이터타입 *포인터변수=new 데이터타입[배열의 크기];  //동적 배열 할당
//delete []  포인터변수;  //배열 반환

//예제 4-6.정수형 배열의 동적 할당 및 반환
//사용자로부터 입력할 정수의 개수를 입력받아 배열을 동적할당 받고, 하나씩 정수를 입력받은 후 합을 출력하는 프로그램을 작성하라.

//#include<iostream>
//using namespace std;
//
//int main() {
//	
//	int n;
//	cout << "입력할 정수의 개수는 ?";
//	cin >> n;
//
//	int* p = new int[n];
//
//	for (int i = 0;i < n;i++) {
//		cout << i + 1 << "번쨰 정수 : ";
//		cin >> p[i];
//	}
//
//	int hap = 0;
//	for (int i = 0;i < n;i++) {
//		hap += p[i];
//	}
//
//	cout << "입력한 수들의 합: " << hap << endl;
//
////	delete[] p;
//}

//동적 할당 메모리 초기화 및 delete 시 유의 사항

//동적 할당 메모리 초기화
//동적 할당 시 초기화
//데이터타입 *포인터변수=new 데이터타입(초기값);

//int *pint=new int[20];  //20으로 초기화된 int 타입 할당
//char *pChar=new Char('a');  //'a'로 초기화된 char 타입 할당

//배열은 동적 할당 시 초기화 불가능
//int *pArray=new int[10](20);  //구문 오류,컴파일 오류 발생
//int *pArray=new int(20)[10];  //구문 오류,컴파일 오류 발생

//delete 시 [] 생략
//컴파일 오류는 아니지만 비정상적인 반환
//int *p=new int[10];
//delete p;  //비정상 반환. delete[] p;로 해야한다

//int *q=new int;
//delete []q; //비정상 반환,delete q로 해야 한다

//객체의 동적 생성 및 반환
//클래스이름 * 포인터변수=new 클래스이름;
//클래스이름 * 포인터변수=new 클래스이름(생성자 매개변수리스트);
//delete 포인터변수;

//예제 4-7.Circle 객체의 동적 생성 및 반환
//#include<iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	~Circle();
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//
//Circle::Circle() {
//	radius = 1;
//	cout << "생성자 실행 radius = " << radius << endl;
//}
//Circle::Circle(int r) {
//	radius = r;
//	cout << "생성자 실행 radius = " << radius << endl;
//}
//Circle::~Circle() {
//	cout << "소멸자 실행 radius = " << radius << endl;
//}
//
//int main() {
//	Circle* p, * q;
//	p = new Circle;
//	q = new Circle(30);
//	cout << p->getArea() << endl << q->getArea() << endl;
//	delete p;
//	delete q;
//}

//예제 4-8.Circle 객체의 동적 생성과 반환 응용
//함수 반지름을 입력받고 Circle 객체를 동적 생성하여 면적을 출력
//음수가 입력되면 프로그램은 종료


//#include<iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	~Circle();
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//Circle::Circle() {
//	radius = 1;
//	cout << "생성자 실행 radius = " << radius << endl;
//}
//Circle::Circle(int r) {
//	radius = r;
//	cout << "생성자 실행 radius = " << radius << endl;
//}
//Circle::~Circle() {
//	cout << "소멸자 실행 radius = " << radius << endl;
//}
//
//int main() {
//	int radius;
//	while (true) {
//		cout << "정수 반지름 입력(음수이면 종료) >> ";
//		cin >> radius;
//		if (radius < 0)
//			break;
//		Circle* circle = new Circle(radius);
//
//		cout << "원의 면적은 " << circle->getArea() << endl;
//		delete circle;
//	}
//}

//객체 배열의 동적 생성 및 반환
//클래스이름 *포인터변수=new 클래스이름[배열 크기];
//delete [] 포인터변수;// 포인터변수가 가리키는 객체 배열을 반환

//객체 배열의 사용, 배열의 반환과 소멸자
//동적으로 생성된 배열도 보통 배열처럼 사용

//포인터로 배열 접근
//배열 소멸

//예제 4-9.Circle 배열의 동적 생성 및 반환
//
//#include<iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	~Circle();
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//
//Circle::Circle() {
//	radius = 1;
//	cout << "생성자 실행 radius = " << radius << endl;
//}
//
//Circle::Circle(int r) {
//	radius = r;
//	cout << "생성자 실행 radius = " << radius << endl;
//}
//
//Circle::~Circle() {
//	cout << "소멸자 실행 radius = " << radius << endl;
//}
//
//int main() {
//	Circle* pArray = new Circle[3]; //객체 배열 생성
//
//	pArray[0].setRadius(10);
//	pArray[1].setRadius(20);
//	pArray[2].setRadius(30);
//
//	for (int i = 0;i < 3;i++) {
//		cout << pArray[i].getArea() << endl;
//	}
//	Circle* p = pArray;
//	for (int i = 0;i < 3;i++) {
//		cout << p->getArea() << "\n";
//		p++;
//	}
//	delete[]pArray;
//}

//예제 4-10. 객체 배열의 동적 생성과 반환 응용

//#include<iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle();
//	~Circle(){}
//	void setRadius(int r) { radius = r; }
//	double getArea() {
//		return 3.14 * radius * radius;
//	}
//};
//Circle::Circle() {
//	radius = 1;
//}

//원의 개수를 입력받고 Circle 배열을 동적 생성하라
//반지름 값을 입력받아 Circle 배열에 저장하고
//면적이 100부터 200 사이인 원의 개수를 출력

//생성하고자 하는 원의 개수 ? 4​
//원1 : 5​
//원2 : 6​
//원3 : 7​
//원4 : 8​
//78.5 113.04 153.86 200.96​
//면적이 100에서 200 사이인 원의 개수는 2​
//int main() {
//	int n, radius;
//
//	cout << "생성하고자 하는 원의 개수 ? ";
//	cin >> n;
//
//	Circle* pArray = new Circle[n];
//	for (int i = 0;i < n;i++) {
//		cout << "원" << i + 1 << " : ";
//		cin >> radius;
//		pArray[i].setRadius(radius);
//	}
//	int count = 0;
//	for (int i = 0;i < n;i++) {
//		cout << pArray[i].getArea()<<" ";
//		if ((pArray[i].getArea() >= 100) && (pArray[i].getArea() <= 200))
//			count++;
//	}
//	cout << "\n" << "면적이 100에서 200 사이인 원의 개수는 " << count << endl;
//	delete[] pArray;
//}

//this 포인터
//this
//포인터, 객체 자신 포인터
//클래스의 멤버 함수 내에서만 사용
//개발자가 선언하는 변수가 아니고, 컴파일러가 선언한 변수
//멤버 함수에 컴파일러에 의해 묵시적으로 삽입 선언되는 매개 변수

//class Circle {
//	int radius;
//public:
//	Circle() { this->radius = 1; }
//	Circle(int radius) { this->radius = radius; }
//	void setRadius(int radius) { this->radius = radius; }
//};
//

//this와 객체
//각 객체 속의 this는 다른 객체의 this와 다름

//this가 필요한 경우
//매개변수의 이름과 멤버 변수의 이름이 같은 경우

//멤버 함수가 객체 자신의 주소를 리턴할 때
//연산자 중복 시에 매우 필요

//this의 제약 사항
//멤버 함수가 아닌 함수에서 this 사용 불가
//static 멤버 함수에서 this 사용 불가

//string 클래스를 이용한 문자열
//C++ 문자열

//string 클래스
//C++표준 라이브러리,<string>헤더 파일에 선언
//가변 크기의 문자열
//다양한 문자열 연산을 실행하는 연산자와 멤버 함수 포함
//뮨자열,스트링,문자열 객체,string 객체 등으로 혼용

//문자열 생성
// string str;  //빈 문자열을 가진 스트링 객체
// string address("서울시 성북구 삼선동 389") //문자열 리터럴로 초기화
// string copyAddress(address); //address를 복사한 copyAddress 생성
// 
// C-스트링으로부터 스트링 객체 생성
// char text[]={'L','o','v','e',' ','C','+','+','\0'};
// strint title(text); //"Love C++" 문자열을 가진 title 생성
// 
// 문자열 출력-cout와 << 연산자
// cout<<address<<endl; //"서울시 성북구 삼선동 389" 출력
// cout<<title<<endl;  //"Love C++" 출력
// 
// 문자열 입력-cin과 >> 연산자
// string name;
// cin>>name;   //공백이 입력되면 하나의 문자열로 입력
// 
// 문자열 숫자 변환-stoi() 함수 이용
// string s="123";
// int n=stoi(s);  //n은 정수 123
// 
//string 객체의 동적 생성
//new/delete를 이용하여 문자열을 동적 생성/반환 가능
//
//string* p = new string("C++");  //스트링 객체 동적 생성
//
//cout << *p;  //"C++"출력
//p->append("Great!");   //p가 가리키는 스트림이 "C++ Great!!"이 됨
//cout << *p;  //"C++ Great!" 출력
//
//delete* p; //스트림 객체 반환

//예제 4-11.string 클래스를 이용한 문자열 생성 및 출력
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main() {
//	string str; //빈 문자열을 가진 스트링 객체 생성
//	string address("서울시 성북구 삼선동 389");
//	string copyAddress(address);  //address의 문자열을 복사한 스트링 객체 생성
//	
//	char text[] = { 'L','o','v','e','C','+','+','\0' };
//	string title(text);  //"Love C++"문자열을 가진 스트링 객체 생성
//
//	cout << str << endl; //빈 스트링. 아무 값도 출력되지 않음
//	cout << address << endl;
//	cout << copyAddress << endl;
//	cout << title << endl;
//}



