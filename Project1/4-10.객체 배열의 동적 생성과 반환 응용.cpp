

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
////���� ������ �Է¹ް�  Circle �迭�� ���� ����
////������ ���� �Է� �޾� Circle �迭�� �����ϰ�
////������ 100���� 200 ������ ���� ������ ����϶�
////
////
////�����ϰ��� �ϴ� ���� ���� ? 4
////��1 : 5
////��2 : 6
////��3 : 7
////��4 : 8
////78.5 113.04 153.86 200.96
////������ 100���� 200 ������ ���� ������ 2
//
//int main() {
//	int n;
//	cout << "�����ϰ��� �ϴ� ���� ���� ? ";
//	cin >> n;
//
//	Circle* p = new Circle[n];
//	for (int i = 0;i < n;i++) {
//		int radius;
//		cout << "�� " << i + 1 << " : ";
//		cin >> radius;
//		p[i].setRadius(radius);
//	}
//	int count = 0;
//	for (int i = 0;i < n;i++) {
//		cout << p[i].getArea() << " ";
//		if ((p[i].getArea() >= 100) && (p[i].getArea() <= 200))
//			count++;
//	}
//	cout <<endl<< "������ 100���� 200 ������ ���� ������ " << count << endl;
//}