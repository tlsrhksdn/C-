//#include<iostream>
//#include<string>
//using namespace std;
//
//class Point {
//	int x, y;
//public:
//	void set(int x, int y) { this->x = x; this->y = y; }
//	void showPoint() {
//		cout << "{" << x << "," << y << "}" << endl;
//	}
//};
//class ColorPoint :public Point {
//	string color;
//public:
//	void setColor(string color) { this->color = color; }
//	void showColorPoint();
//};
//void ColorPoint::showColorPoint() {
//	cout << color << ',';
//	showPoint();
//}
//
//int main() {
//	Point p;
//	ColorPoint cp;
//	cp.set(3, 4);
//	cp.setColor("Red");
//	cp.showColorPoint();
//}

//protected 접근 지정

//접근 지정자
//private 멤버
//선언된 클래스 내에서만 접근 가능
//파생 클래스에서도 기본 클래스의 private 멤버 직접 접근 불가

//public 멤버
//선언된 클래스나 외부 어떤 클래스. 모든 외부 함수에 접근 허용
//파생 클래스에서 기본 클래스의 public 멤버 접근 가능

//protected 멤버
//선언된 클래스에서 접근 가능
//파생 클래스에서만 접근 허용
//파생 클래스가 아닌 다른 클래스나 외부 함수에서는 protected 멤버를 접근할 수 없다

//예제 8-2.protected 멤버에 대한 접근
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Point {
//protected:
//	int x, y;
//public:
//	void set(int x, int y);
//	void showPoint();
//};
//void Point::set(int x, int y) {
//	this->x = x;
//	this->y = y;
//}
//void Point::showPoint() {
//	cout << "{" << x << ',' << y << "}" << endl;
//}
//class ColorPoint :public Point {
//	string color;
//public:
//	void setColor(string color);
//	void showColorPoint();
//	bool equals(ColorPoint p);
//};
//void ColorPoint::setColor(string color) {
//	this->color = color;
//}
//void ColorPoint::showColorPoint() {
//	cout << color << ',';
//	showPoint(); //Point 클래스의 showPoint() 호출
//}
//bool ColorPoint::equals(ColorPoint p) {
//	if (x == p.x && y == p.y && color == p.color)
//		return true;
//	else
//		return false;
//}
//
//int main() {
//	Point p;
//	p.set(2, 3);
//	p.x = 5;
//	p.y = 5;
//	p.showPoint();
//
//	ColorPoint cp;
//	cp.x = 10;
//	cp.y = 10;
//	cp.set(3, 4);
//	cp.setColor("Red");
//	cp.showColorPoint();
//
//	ColorPoint cp2;
//	cp2.set(3, 4);
//	cp2.setColor("Red");
//	cout << ((cp.equals(cp2) ? "true" : "false"));
//}

//상속 관계의 생성자와 소멸자 실행

//파생 클래스의 객체가 생성될 때 
//파생 클래스의 생성자와 기본 클래스의 생성자가 모두 생성되는가 
//혹은 파생 클래스의 생성자만 실행되는가?


//둘 다 실행된다

//기본 클래스의 생성자가 먼저 실행된 후 파생 클래스의 생성자가 실행된다


//상속 지정
//상속 선언시 public,private,protected의 3가지 중 하나 지정
//기본 클래스의 멤버의 접근 속성을 어떻게 계승할지 지정한다

//public:기본 클래스의 protected,public 멤버 속성을 그대로 계승
//private:기본 클래스의 protected,public 멤버를 privaet로 계승
//protected:기본 클래스의 protected,public 멤버를 protected로 계승
