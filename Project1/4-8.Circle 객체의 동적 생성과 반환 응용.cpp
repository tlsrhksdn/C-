////���� �������� �Է� �ް�
////Circle ��ü�� ���� �����Ͽ� ������ ����Ѵ�
////������ �ԷµǸ� ���α׷��� ����
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
//	cout << "������ ���� radius = " << radius << endl;
//}
//
//Circle::Circle(int r) {
//	radius = r;
//	cout << "������ ���� radius = " << radius << endl;
//}
//
//Circle::~Circle() {
//	cout << "�Ҹ��� ���� radius = " << radius << endl;
//}
//
////���� ������ �Է�(�����̸� ����) >> 5
////������ ���� radius = 5
////���� ������ 78.5
////�Ҹ��� ���� radius = 5
////���� ������ �Է�(�����̸� ����) >> 9
////������ ���� radius = 9
////���� ������ 254.34
////�Ҹ��� ���� radius = 9
////���� ������ �Է�(�����̸� ����) >> -1
//
//int main() {
//	while (true) {
//		int r;
//		cout << "���� ������ �Է�(�����̸� ����) >> ";
//		cin >> r;
//		if (r < 0)
//			break;
//		Circle* p = new Circle;
//		p->setRadius(r);
//		cout << "���� ������ " << p->getArea() << endl;
//		delete p;
//	}
//}