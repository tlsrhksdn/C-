

//#include<iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle();
//	~Circle() {};
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//
//Circle::Circle() {
//	radius = 1;
//}
//
////원의 개수를 입력받고  Circle 배열을 동적 생성
////반지름 값을 입력 받아 Circle 배열에 저장하고
////면적이 100에서 200 사이인 원의 개수를 출력하라
////
////
////생성하고자 하는 원의 개수 ? 4
////원1 : 5
////원2 : 6
////원3 : 7
////원4 : 8
////78.5 113.04 153.86 200.96
////면적이 100에서 200 사이인 원의 개수는 2
//
//int main() {
//	int n;
//	cout << "생성하고자 하는 원의 개수 ? ";
//	cin >> n;
//
//	Circle* p = new Circle[n];
//	for (int i = 0;i < n;i++) {
//		int radius;
//		cout << "원 " << i + 1 << " : ";
//		cin >> radius;
//		p[i].setRadius(radius);
//	}
//	int count = 0;
//	for (int i = 0;i < n;i++) {
//		cout << p[i].getArea() << " ";
//		if ((p[i].getArea() >= 100) && (p[i].getArea() <= 200))
//			count++;
//	}
//	cout <<endl<< "면적이 100에서 200 사이인 원의 개수는 " << count << endl;
//}