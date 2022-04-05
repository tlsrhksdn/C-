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

//예쩨4-2.Circle 클래스의 배열 선언 및 활용
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
//	Circle circleArray[3];    //Circle 객체 배열 생성
//
//	//배열의 각 원소 객체의 멤버 접근
//	circleArray[0].setRadius(10);
//	circleArray[1].setRadius(20);
//	circleArray[2].setRadius(30);
//
//	for (int i = 0;i < 3;i++)   //배열의 각 원소 객체의 멤버 접근 
//		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
//
//	Circle * p;
//	p = circleArray;
//
//	for (int i = 0;i < 3;i++) { //객체 포인터로 배열 접근
//		cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
//		p++;
//	}
//	
//}

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
//#include<iostream>
//using namespace std;
//
//int main() {
//	int* p;
//
//	p = new int;  //int 타입 1개 할당
//	if (!p) {  //p가 NUL이면 메모리 할당 실패
//		cout << "메모리를 할당할 수 없습니다.";
//		return 0;
//	}
//
//	*p = 5;  //할당 받은 정수 공간에 5 삽입
//	int n = *p;
//	cout << "*p = " << *p << "\n";
//	cout << "n = " << n << "\n";
//
//	delete p;  //할당 받은 메모리 반환
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
//	delete[]p;
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


#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};
Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
	int radius;
	while (true) {
		cout << "정수 반지름 입력(음수이면 종료) >> ";
		cin >> radius;
		if (radius < 0)
			break;
		Circle* circle = new Circle(radius);

		cout << "원의 면적은 " << circle->getArea() << endl;
		delete circle;
	}
}