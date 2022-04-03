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
#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle circleArray[3];    //Circle 객체 배열 생성

	//배열의 각 원소 객체의 멤버 접근
	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0;i < 3;i++)   //배열의 각 원소 객체의 멤버 접근 
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;

	Circle * p;
	p = circleArray;

	for (int i = 0;i < 3;i++) { //객체 포인터로 배열 접근
		cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
		p++;
	}
	
}