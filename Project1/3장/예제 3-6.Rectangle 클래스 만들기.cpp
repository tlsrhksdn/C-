//#include<iostream>
//using namespace std;
//
//class Rectangle {
//	int width;
//	int height;
//public:
//	Rectangle() { width = 1, height = 1; }
//	Rectangle(int w, int h) { width = w, height = h; }
//	Rectangle(int x) { width = x, height = x; }
//	bool isSquare();
//};
//bool Rectangle::isSquare() {
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
//	if (rect1.isSquare())
//		cout << "rect1�� ���簢���̴�." << endl;
//	if (rect2.isSquare())
//		cout << "rect2�� ���簢���̴�." << endl;
//	if (rect3.isSquare())
//		cout << "rect3�� ���簢���̴�." << endl;
//}