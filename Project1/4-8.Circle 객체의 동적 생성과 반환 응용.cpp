////정수 반지름을 입력 받고
////Circle 객체를 동적 생성하여 면적을 출력한다
////음수가 입력되면 프로그램을 종료
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
////정수 반지름 입력(음수이면 종료) >> 5
////생성자 실행 radius = 5
////원의 면적은 78.5
////소멸자 실행 radius = 5
////정수 반지름 입력(음수이면 종료) >> 9
////생성자 실행 radius = 9
////원의 면적은 254.34
////소멸자 실행 radius = 9
////정수 반지름 입력(음수이면 종료) >> -1
//
//int main() {
//	while (true) {
//		int r;
//		cout << "정수 반지름 입력(음수이면 종료) >> ";
//		cin >> r;
//		if (r < 0)
//			break;
//		Circle* p = new Circle;
//		p->setRadius(r);
//		cout << "원의 면적은 " << p->getArea() << endl;
//		delete p;
//	}
//}