//��ü ������

//��ü�� ���� ������
//��ü�� �ּ� ���� ������ ����

//�����ͷ� ����� ������ ��
//��ü������->���

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
//	//��ü �̸����� ��� ����
//	cout << donut.getArea() << endl;
//
//	//��ü �����ͷ� ��� ����
//	Circle* p;
//	p = &donut;
//	cout << p->getArea() << endl;  //donut�� getArea() ȣ��
//	cout << (*p).getArea() << endl;  //donut�� getArea() ȣ��
//
//	p = &pizza;
//	cout << p->getArea() << endl;   //pizza�� getArea() ȣ��
//	cout << (*p).getArea() << endl; //pizza�� getArea() ȣ��
//}

//��ü �迭 ���� �� �Ҹ�

//��ü �迭 ���� ����

//�⺻ Ÿ�� �迭 ����� ���� ����

//int n[3];  //������ �迭 ����
//Circle c[3];   //Circle Ÿ���� �迭 ����

//��ü �迭 ���� 
//1.��ü �迭�� ���� ���� �Ҵ�
//2.�迭�� �� ���� ��ü���� ������ ����
//c[0]�� ������,c[1]�� ������,c[2]�� ������ ����
//�Ű� ���� ���� ������ ȣ��

//�Ű� ���� �ִ� �����ڸ� ȣ���� �� ����
//Circle circleArray[3](5);  //����

//�迭 �Ҹ�
//�迭�� �� ��ü���� �Ҹ��� ȣ��, ������ �ݴ������ �Ҹ�
//c[2]�� �Ҹ���,c[1]�� �Ҹ���, c[0]�� �Ҹ��� ����

//����4-2.Circle Ŭ������ �迭 ���� �� Ȱ��
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
	Circle circleArray[3];    //Circle ��ü �迭 ����

	//�迭�� �� ���� ��ü�� ��� ����
	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0;i < 3;i++)   //�迭�� �� ���� ��ü�� ��� ���� 
		cout << "Circle " << i << "�� ������ " << circleArray[i].getArea() << endl;

	Circle * p;
	p = circleArray;

	for (int i = 0;i < 3;i++) { //��ü �����ͷ� �迭 ����
		cout << "Circle " << i << "�� ������ " << p->getArea() << endl;
		p++;
	}
	
}