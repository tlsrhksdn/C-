//�Լ��� ���� ���� ��� ����

//���� ���� ���

//���� ���� ȣ��, call by value
//�Լ��� ȣ��Ǹ� �Ű� ������ ���ÿ� ������
//ȣ���ϴ� �ڵ忡�� ���� �Ѱ���
//ȣ���ϴ� �ڵ忡�� �Ѿ�� ���� �Ű� ������ �����

//�ּҿ� ���� ȣ��, call by address
//�Լ��� �Ű� ������ ������ Ÿ��
//�Լ��� ȣ��Ǹ� ������ Ÿ���� �Ű� ������ ���ÿ� �����ȴ�
//ȣ���ϴ� �ڵ忡���� ��������� �ּҸ� �Ѱ��ش�
//�⺻ Ÿ�� ������ ��ü�� ��� �ּҸ� �����Ѵ�
//�迭�� ��� �迭�� �̸�

//ȣ���ϴ� �ڵ忡�� �Ѿ�� �ּ� ���� �Ű� ������ ����ȴ�

//'���� ���� ȣ��'�� ��ü ����

//�Լ��� ȣ���ϴ� �ʿ��� ��ü ����
//��ü �̸��� ���

//�Լ��� �Ű� ���� ��ü ����
//�Ű� ���� ��ü�� ������ ���ÿ� �Ҵ�
//ȣ���ϴ� ���� ��ü�� �Ű� ���� ��ü�� �״�� �����
//�Ű� ���� ��ü�� �����ڴ� ȣ����� �ʴ´�

//�Լ� ����
//�Ű� ���� ��ü�� �Ҹ��� ȣ��

//���� ���� ȣ�� �� �Ű� ���� ��ü�� �����ڰ� ������� �ʴ� ����
//ȣ��Ǵ� ������ ������ ��ü ���¸� �Ű� ���� ��ü�� �״�� �����ϱ� ����


//���� 5-1.'���� ���� ȣ��'�� �Ű� ������ ������ ������� ����
//#include<iostream>
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	~Circle();
//	double getArea() { return 3.14 * radius * radius; }
//	int getRadius() { return radius; }
//	void setRadius(int radius) { this->radius = radius; }
//};
//Circle::Circle() {
//	radius = 1;
//	cout << "������ ���� radius = " << radius << endl;
//}
//Circle::Circle(int radius) {
//	this->radius = radius;
//	cout << "������ ���� radius = " << radius << endl;
//}
//Circle::~Circle() {
//	cout << "�Ҹ��� ���� radius = " << radius << endl;
//}
//void increase(Circle c) //waffle�� ������ �״�� c�� ����
//{
//	int r = c.getRadius();  
//	c.setRadius(r + !);
//}
//int main() {
//	Circle waffle(30);
//	increase(waffle);
//	cout << waffle.getRadius() << endl;
//}

//�Լ��� ��ü ����-'�ּҿ� ���� ȣ��'��

//�Լ� ȣ��� ��ü�� �ּҸ� ����
//�Լ��� �Ű� ������ ��ü�� ���� ������ ������ ����
//�Լ� ȣ�� �� ������ �Ҹ��ڰ� ������� �ʴ� ����

//��ü ġȯ �� ��ü ����

//��ü ġȯ
//������ Ŭ���� Ÿ���� ��ü���� ġȯ ����
//��ü�� ��� �����Ͱ� ��Ʈ ������ ����

//Circle c1(5);
//Circle c2(30);
//c1=c2;  //c2��ü�� c1 ��ü�� ��Ʈ ���� ����. c1�� ������ 30��

//��ü ����
//��ü�� ���纻 ����

//Circle getCircle(){
//Circle tmp(30);
//return tmp;  //��ü tmp ����
//}

//Circle c;  //c�� ������ 1
//c=getCircle(); //tmp ��ü�� ���纻�� c�� ġȯ,c�� �������� 30�� ��

////���� 5-3.��ü ����
//#include<iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle() { radius - 1; }
//	Circle(int radius) { this->radius = radius; }
//	void setRadius(int radius) { this->radius = radius; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//
//Circle getCircle() {
//	Circle tmp(30);
//	return tmp;  //��ü tmp�� �����Ѵ�.
//}
//
//int main() {
//	Circle c; //��ü�� �����ȴ�. radius=1�� �ʱ�ȭ�ȴ�
//	cout << c.getArea() << endl;
//
//	c = getCircle(); //tmp ��ü�� c�� ����ȴ�. c�� radius�� 30�� �ȴ�.
//	cout << c.getArea() << endl;
//}

//������?
//������ ����Ų�ٴ� ������, �̹� �����ϴ� ��ü�� ������ ���� ����

//���� Ȱ��

//���� ����
//������ ���� ȣ��
//���� ����

//��������

//���� ���� ����
//������ &�� ����
//�̹� �����ϴ� ������ ���� �ٸ� �̸�(����)�� ����
//���������� �̸��� �����, ���� �������� ���ο� ������ �Ҵ����� �ʴ´�.
//�ʱ�ȭ�� ������ ���� ������ �����Ѵ�.

//int n = 2;
//int& refn = n;  //���� ���� refn ����, refn�� n�� ���� ����
//
//Circle circle;
//Circle& refc = circle;  //���� ���� refc ����, refc�� circle�� ���� ����

//���� ���� ���� �� ��� ���
//
//int n = 2;
//int& refn = n;  //refn�� n�� ���� ����
//refn = 3;

//Circle circle;
//Circle& refc = circle;  //refc�� circle ��ü�� ���� ����
//
//refc.setRadius(30); //refc->setRadius(30)���� �ϸ� �ȵ�.

//���� 5-3.�⺻ Ÿ�� ������ ���� ����
//#include<iostream>
//using namespace std;
//
//int main() {
//	cout << "i" << "\t" << "n" << "\t" << "refn" << endl;
//	int i = 1;
//	int n = 2;
//	int& refn = n;  //���� ���� refn ����.refn�� n�� ���� ����
//	n = 4;
//	refn++; //refn=5,n=5
//	cout << i << "\t" << n << "\t" << refn << endl;
//
//	refn = 1; //refn=1,n=1
//	refn++; //refn=2,n=2
//	cout << i << "\t" << n << "\t" << refn << endl;
//
//	//������ ���� ������ ���� ����
//	int* p = &refn;  //p�� n�� �ּҸ� ����
//	*p = 20;  //refn=20,n=20
//	cout << i << "\t" << n << "\t" << refn << endl;
//}

//���� 5-4. ��ü�� ���� ����
//#include<iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int radius) { this->radius = radius; }
//	void setRadius(int radius) { this->radius = radius; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//
//int main() {
//	Circle circle;
//	Circle& refc = circle;  //circle ��ü�� ���� ���� ���� refc ����
//	refc.setRadius(10);
//	cout << refc.getArea() << " " << circle.getArea();
//}

//������ ���� ȣ��
//������ ���� ���� Ȱ���ϴ� ���
//call by reference��� �θ�

//�Լ� ����
//�Լ��� �Ű� ������ ���� Ÿ������ ����
//���� �Ű� ������� �θ�(���� �Ű� ������ ������ ������ ������)
//���� �Ű� ������ �̸��� ����� ������ ������ ����
//���� �Ű� ������ ������ ���� ���� ����
//���� �Ű� ������ ���� ������ ������ ���� ���� ȿ��

////������ ���� ȣ�� ���
//#include<iostream>
//using namespace std;
//
//void swap(int& a, int& b) { //���� �Ű� ���� a,b
//	int tmp;
//
//	tmp = a;
//	a = b;       //���� �Ű� ������ ���� ����ó�� ���
//	b = tmp;
//}
//
//int main() {
//	int m = 2, n = 9;
//	swap(m, n);  //�Լ��� ȣ��Ǹ� m,n�� ���� ���� ���� a,b�� �����.
//	cout << m << ' ' << n;
//}

//���� �Ű������� �ʿ��� ���

//���� �ڵ��� �������� �����ϱ�
//int average(int a[], int size) {
//	if (size <= 0) return 0;
//	int sum = 0;
//	for (int i = 0;i < size;i++)
//		sum += a[i];
//	return sum / size;
//}
//int x[] = { 1,2,3,4 };
//int avg = average(x, 4);
//
//average() �Լ��� �۵�
//��꿡 ������ ������ 0 ����, �ƴϸ� ��� ����
//���� average()�� ��ȯ���� 0�̶��?
//����� 0����, �ƴϸ� ������ �߻��ߴ��� Ȯ�� �Ұ���

//���� 5-5.���� �Ű� ������ ��� �����ϱ�

//���� �Ű� ������ ���� ����� �����ϰ� 
//���Ϲ��� ���ؼ��� �Լ��� ���� ���θ� �����ϵ��� average �Լ��� �ۼ��϶�
//
//#include<iostream>
//using namespace std;
//
//bool average(int a[], int size, int& avg)
//{
//	int sum = 0;
//	if (size <= 0)
//		return false;
//	else
//		for (int i = 0;i < size;i++) {
//			sum += a[i];
//		}
//	avg = sum / size;
//	return true;
//}
//
//int main(){
//	int x[] = { 0,1,2,3,4,5 };
//	int avg;
//	if (average(x, 6, avg))
//		cout << "���� " << avg << endl;
//	else
//		cout << "�Ű� ���� ����" << endl;
//
//	if (average(x, -2, avg))cout << "����� " << avg << endl;
//	else cout << "�Ű� ���� ���� " << endl;
//}

//���� 5-6.������ ���� ȣ��� Circle ��ü�� ���� ����
//#include<iostream>
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	~Circle();
//	double getArea() { return 3.14 * radius * radius; }
//	int getRadius() { return radius; }
//	void setRadius(int radius) { this->radius = radius; }
//};
//
//Circle::Circle() {
//	radius = 1;
//	cout<<"������ ���� radius = " <<radius<<endl;
//}
//Circle::Circle(int radius) {
//	this->radius = radius;
//	cout << "������ ���� radius = " << radius << endl;
//}
//Circle::~Circle() {
//	cout << "�Ҹ��� ���� radius = " << radius << endl;
//}
//
//void increaseCircle(Circle& c) {
//	int r = c.getRadius();
//	c.setRadius(r + 1);
//}

//int main() {
//	Circle waffle(30);
//	increaseCircle(waffle);
//	cout << waffle.getRadius() << endl;
//}

//���� 5-7.���� �Ű� ������ ���� �Լ� ����� ����

//Ű����κ��� ������ ���� �о� Circle ��ü�� �������� �����ϴ� readRadius() �Լ��� �ۼ��϶�.

#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	~Circle();
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

void readRadius(Circle& c) {
	int radius;
	cout << "���� ������ �������� �Է��ϼ���>>";
	cin >> radius;
	c.setRadius(radius);
}

int main() {
	Circle donut;
	readRadius(donut);
	cout << "donut�� ���� = " << donut.getArea() << endl;
}