//������ ��� ��ü���� ��ü�� ǥ���� �� �ִ�

//ĸ��ȭ
//��ü�� �������� Ư��
//��ü�� ĸ���� �μ� �� ���θ� ��ȣ�ϰ� �� �� ���� �Ѵ�

//ĸ��ȭ�� ����
//��ü �� �����Ϳ� ���� ����,��ȣ,�ܺ� ���� ����

//��ü�� �Ϻ� ��Ҵ� �����ȴ�
//�ܺο��� �������̽�(���� ��ȯ �� ���)�� ���� ��ü�� �Ϻκ� ����


//��ü�� ���¿� �ൿ���� ����

//ex)TV ��ü ���
//����
//on/off �Ӽ�-���� �۵� ������ ǥ��
//ä��-���� ������� ä��
//����-���� ��µǴ� �Ҹ� ũ��

//�ൿ
//�ѱ�
//����
//ä�� ����
//ä�� ����
//���� ����
//���� ���̱�

//Ŭ����
//��ü�� ������ ���� ���ǵ� ���赵,Ʋ
//�ɹ� ������ ��� �Լ� ����

//��ü
//������ �� Ŭ������ ����� �״�� ������ ź��
//��� ������ ��� �Լ��� ����
//�޸𸮿� ����,��ü��� �θ�
//�ϳ��� Ŭ���� Ʋ���� ���� ���� ��ü ���� ����
//��ȣ ������ ������ ����


//���� 3-1.Circle Ŭ������ ��ü ���� �� Ȱ��
//#include<iostream>
//using namespace std;
//
//class Circle {
//public:
//	int radius;
//	double getArea();
//};
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle donut;  //��ü donut ����
//	donut.radius = 1;  //��ü donut�� �����������,donut ��ü�� ���� �˾Ƴ���
//	double area = donut.getArea(); //donut�� ����Լ� ȣ��,donnut ��ü�� ���� �˾Ƴ���
//	cout << "donut ������ " << area << endl;
//
//	Circle pizza;
//	pizza.radius = 30; //pizza ��ü�� �������� 30���� ����
//	area = pizza.getArea();  //pizza ��ü�� ���� �˾Ƴ���
//	cout << "pizza ������ " << area << endl;
//}

//���� 3-2.Rectangle Ŭ���� �����  (����!)
//#include<iostream>
//using namespace std;
//
//class Rectangle {
//public:
//	int width;
//	int height;
//	int getArea();
//};
//
//int Rectangle::getArea()
//{
//	return width * height;
//}
//
//int main() {
//	Rectangle rect;
//	rect.width = 3;
//	rect.height = 5;
//	cout << "�簢���� ������ " << rect.getArea() << endl;
//	return 0;
//}

//������
//��ü�� �����Ǵ� �������� �ڵ����� ȣ��Ǵ� ��� �Լ�
//Ŭ���� �̸��� ������ ��� �Լ�

//�������� ����
//��ü�� ������ �� ��ü�� �ʿ��� �ʱ�ȭ�� ����

//�������� �̸�
//�ݵ�� Ŭ���� �̸��� ����

//�����ڴ� ���� Ÿ���� �������� �ʴ´�
//���� Ÿ�� ����.void Ÿ�Ե� �ȵ�

//��ü ���� �� ���� �� ���� ȣ��
//�ڵ����� ȣ���,���Ƿ� ȣ���� �� ����,�� ��ü���� ������ ����

//�����ڴ� �ߺ� ����
//�����ڴ� �� Ŭ���� ���� ���� �� ����
//�ߺ��� ������ �� �ϳ��� ����

//�����ڰ� ����Ǿ� ���� ������ �⺻ ������ �ڵ����� ����
//�⺻ ������-�Ű����� ���� ������
//�����Ϸ��� ���� �ڵ� ����


//���� 3-3.2���� �����ڸ� ���� Circle Ŭ����
//#include<iostream>
//using namespace std;
//
//class Circle {
//public:
//	int radius;
//	Circle(); //�Ű� ���� ���� ������
//	Circle(int r);  //�Ű� ���� �ִ� ������
//	double getArea();
//};
//Circle::Circle() {
//	radius = 1;
//	cout << "������ " << radius << " �� ����" << endl;
//}
//Circle::Circle(int r) {
//	radius = r;
//	cout << "������ " << radius << " �� ����" << endl;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle donut;    //�Ű� ���� ���� ������ ȣ��
//	double area = donut.getArea();
//	cout << "donut ������ " << area << endl;
//
//	Circle pizza(30);  //�Ű� ���� �ִ� ������ ȣ��
//	area = pizza.getArea();
//	cout << "pizza ������ " << area << endl;
//
//	return 0;
//}

//�����ڰ� �ٸ� �����ڸ� ȣ��(���� ������)
// ���� �����ڿ� �ߺ� �ۼ��� �ڵ带 �ּ�ȭ
// Ÿ�� �����ڿ� ���� �����ڷ� ������ �ۼ�
// Ÿ�� ������:��ü �ʱ�ȭ�� �����ϴ� ������
//���� ������:Ÿ�� �����ڸ� ȣ���ϴ� ������,��ü �ʱ�ȭ�� Ÿ�� �����ڿ� ����


//���� 3-4.�����ڿ��� �ٸ� ������ ȣ�� ����
//#include<iostream>
//using namespace std;
//
//class Circle {
//public:
//	int radius;
//	Circle();  //���� ������
//	Circle(int r);  //Ÿ�� ������
//	double getArea();
//};
//
//Circle::Circle() :Circle(1) {}  //���� ������
//
//Circle::Circle(int r) {   //ȣ�� ������
//	radius = r;
//	cout << "������ " << radius << " �� ����" << endl;
//}
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main()
//{
//	Circle donut; //�Ű� ���� ���� ������ ȣ��
//	double area = donut.getArea(); 
//	cout << "dount ������" << area << endl;
//
//	Circle pizza(30);  //�Ű� ���� �ִ� ������ ȣ��
//	area = pizza.getArea();
//	cout << "pizza ������ " << area << endl;
//}

//�پ��� �������� ��� ���� �ʱ�ȭ ���
//class Point {
//	int x, y;
//public:
//	Point();
//	Point(int a, int b);
//};

//1.������ �ڵ忡�� ��� ���� �ʱ�ȭ
//Point::Point() { x = 0, y = 0; }
//Point::Point(int a, int b) { x = a, y = b };

//2.������ ���ο� �ʱ갪���� �ʱ�ȭ
/*Point::Point() :x(0), y(0) {}  *///��� ���� x,y�� 0���� �ʱ�ȭ
/*Point::Point(int a, int b) : x(a), y(b) {} */ //��� ���� x=a��,y=b�� �ʱ�ȭ
            
 
//3.Ŭ���� ����ο��� ���� �ʱ�ȭ
//class Point { 
//	int x = 0, y = 0;     //Ŭ���� ����ο��� x,y�� 0���� ���� �ʱ�ȭ
//public:
//};

//���� 3-5.��������� �ʱ�ȭ�� ���� ������ Ȱ��
//#include<iostream>
//using namespace std;
//
//class Point {
//	int x, y;
//public:
//	Point();
//	Point(int a, int b);
//	void show() {
//		cout << "(" << x << ", " << y << ")" << endl;
//	}
//};
//
//Point::Point() { x = 0, y = 0; } //���� ������
//
//Point::Point(int a, int b) { x = a, y = b;}  //Ÿ�� ������
//
//int main()
//{
//	Point origin;
//	Point target(10, 20);
//	origin.show();
//	target.show();
//}

//�⺻ ������
//Ŭ������ �����ڰ� �ϳ��� ����Ǿ� ���� ���� ��� �����Ϸ��� ��� �������ִ� ������
//�Ű����� ���� ������
//����Ʈ �����ڶ�� �Ҹ���

//�⺻ �����ڰ� �ڵ����� �����Ǵ� ���
//�����ڰ� �ϳ��� �ۼ��Ǿ� ���� ���� Ŭ������ ��� �����Ϸ��� �⺻ �����ڸ� �ڵ� �����Ѵ�

//�⺻ �����ڰ� �ڵ����� �������� �ʴ� ���
//�����ڰ� �ϳ��� ����� Ŭ������ ��� �����Ϸ��� �⺻ �����ڸ� �ڵ� �������� �ʴ´�

//#include<iostream>
//using namespace std;
//
//class Rectangle {
//public:
//	int width;
//	int height;
//	Rectangle();
//	Rectangle(int a, int b);
//	Rectangle(int x);
//	bool isSquare();
//};
//Rectangle::Rectangle() {
//	width = height = 1;
//}
//Rectangle::Rectangle(int a, int b) {
//	width = a;
//	height = b;
//}
//Rectangle::Rectangle(int x) {
//	width = height = x;
//}
//bool Rectangle::isSquare()
//{
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
//	if (rect1.isSquare())cout << "rect1�� ���簢���̴�." << endl;
//	if (rect2.isSquare())cout << "rect2�� ���簢���̴�." << endl;
//	if (rect3.isSquare())cout << "rect3�� ���簢���̴�." << endl;
//}

//�Ҹ���
//��ü�� �ҸѵǴ� �������� �ڵ����� ȣ��Ǵ� �Լ�
//���� �ѹ��� �ڵ� ȣ��,���Ƿ� ȣ���� �� ����
//��ü �޸� �Ҹ� ���� ȣ��ȴ�

//class Circle {
//    Circle();
//    Circle(int r);
//
//    ~Circle();  //���� Ÿ�� x,�Ű� ���� x
//};

//Circle::~Circle() {
//    //�Ҹ��� �Լ� ����
//}

//�Ҹ��� Ư¡
// �Ҹ��� ����
// 
// ��ü�� ����� �� ������ �۾��� ����
// ���� ���� �������� �Ҵ� ���� �޸� ����,���� ���� �� �ݱ�,��Ʈ��ũ �ݱ� ��
// 
// �Ҹ��� �Լ��� �̸��� Ŭ���� �̸� �տ� ~�� ���δ�
// 
// �Ҹ��ڴ� ���� Ÿ���� ����,� ���� �����ϸ� �ȵ�
// 
// �ߺ� �Ұ���
// �Ҹ��ڴ� �� Ŭ���� ���� ���� �� ���� �ۼ� ����
// �Ҹ��ڴ� �Ű� ���� ���� �Լ�
// 
// �Ҹ��ڰ� ����Ǿ� ���� ������ �⺻ �Ҹ��ڰ� �ڵ� ����
// �����Ϸ��� ���� �⺻ �Ҹ��� �ڵ� ����
// �����Ϸ��� ������ �⺻ �Ҹ���:�ƹ� �͵� ���� �ʰ� �ܼ� ����
// 
//#include<iostream>
//using namespace std;
//
//class Circle {
//public:
//    int radius;
//
//    Circle();
//    Circle(int r);
//    ~Circle();
//    double getArea();
//};
//
//Circle::Circle() {
//    radius = 1;
//    cout << "������" << radius << "�� ����" << endl;
//}
//
//Circle::Circle(int r) {
//    radius = r;
//    cout << "������" << radius << "�� ����" << endl;
//}
//Circle::~Circle() {
//    cout << "������" << radius << "�� �Ҹ�" << endl;
//}
//
//double Circle::getArea() {
//    return 3.14 * radius * radius;
//}
//
//int main() {
//    Circle donut;
//    Circle pizza(30);
//
//    return 0;
//}

//������/�Ҹ��� ���� ����
//��ü�� ����� ��ġ�� ���� �з�

//���� ��ü
//�Լ� ���� ����� ��ü�μ� �Լ��� �����ϸ� �Ҹ�ȴ�

//���� ��ü
//�Լ��� �ٱ��� ����� ��ü�μ� ���α׷��� ������ �� �Ҹ�ȴ�

//��ü ���� ����
//���� ��ü�� ���α׷��� ����� ������ ����
//���� ��ü�� �Լ��� ȣ��Ǵ� ������ ������� ����

//��ü �Ҹ� ����
//�Լ��� �����ϸ� ���� ��ü�� ������ ������ �������� �Ҹ�
//���α׷��� �����ϸ� ���� ��ü�� ������ ������ �������� �Ҹ�

//new�� �̿��Ͽ� �������� ������ ��ü�� ���
//new�� �����ϴ� ���� ��ü ����
//delete �����ڸ� ������ �� ��ü �Ҹ�

//���� 3-8.���� ��ü�� ���� ��ü�� ���� �� �Ҹ� ����
//#include<iostream>
//using namespace std;
//
//class Circle {
//public:
//    int radius;
//    Circle();
//    Circle(int r);
//    ~Circle();
//    double getArea();
//};
//
//Circle::Circle() {
//    radius = 1;
//    cout << "������" << radius << "�� ����" << endl;
//}
//Circle::Circle(int r) {
//    radius = r;
//    cout << "������" << radius << "�� ����" << endl;
//}
//Circle::~Circle() {
//    cout << "������" << radius << "�� �Ҹ�" << endl;
//}
//double Circle::getArea() {
//    return 3.14 * radius * radius;
//}
//
//Circle globalDonut(1000);
//Circle globalPizza(2000);
//
//void f() {
//    Circle fDonut(100);
//    Circle fPizza(200);
//}
//
//int main() {
//    Circle mainDonut;
//    Circle mainPizza(30);
//    f();
//}

//���� ������
//ĸ��ȭ�� ����
//��ü ��ȣ,����
//C++���� ��ü�� ĸ��ȭ ����
//��ü�� ���¸� ��Ÿ���� ������ ���(��� ����)�� ���� ��ȣ
//�߿��� ����� �ٸ� Ŭ������ ��ü���� ������ �� ������ ��ȣ
//�ܺο��� �������̽��� ���ؼ� �Ϻ� ����� �ܺο� ���� ���

//����� ���� 3���� ���� ������
//private
//���� Ŭ������ ��� �Լ����� ������
//public
//��� �ٸ� Ŭ������ ���
//protected
//Ŭ���� �ڽŰ� ��ӹ��� �ڽ� Ŭ�������� ���

//��� ������ private ������ �ٶ�����

//���� 3-9.�ڵ忡�� ������ ������ �߻��ϴ� �� ã��
//#include<iostream>
//using namespace std;
//
//class PrivateAccessError {
//private:
//    int a;
//    void f();
//    PrivateAccessError();
//public:
//    int b;
//    PrivateAccessError(int x);
//    void g();
//};
//PrivateAccessError::PrivateAccessError() {
//    a = 1;
//    b = 1;
//}
//PrivateAccessError::PrivateAccessError(int x) {
//    a = x;
//    b = x;
//}
//void PrivateAccessError::f() {
//    a = 5;
//    b = 5;
//}
//void PrivateAccessError::g() {
//    a = 6;
//    b = 6;
//}
//
//int main() {
//    PrivateAccessError objA;     //������ PrivateAccessError()�� private�̹Ƿ� main()���� ȣ���� �� ����
//    PrivateAccessError objB(100);  
//    objB.a = 10;       //a�� PrivateAccessError Ŭ������ private ����̹Ƿ� main()���� ������ �� ����
//    objB.b = 20; 
//    objB.f();          //f�� PrivateAccessError Ŭ������ private ����̹Ƿ� main()���� ȣ���� �� ����
//    objB.g();
//
//}

//�Լ� ȣ�⿡ ���� �ð� �������

//�Լ� ȣ��->���ƿ� ���� �ּ� ����->CPU �������� �� ����->�Լ��� �Ű� ������ ���ؿ� ����->�Լ� ����->�Լ� ���ϰ��� �ӽ� ��ҿ� ����->������ �������� �� CPU�� ����->���ư� �ּҰ��� �˾Ƴ��� ����
//���� ũ���� �Լ��� ȣ���ϸ� �Լ� ���� �ð��� ���� ȣ���� ���� �ҿ�Ǵ� �ΰ����� �ð� ������尡 ��������� ũ��

//�ζ��� �Լ�
//inline Ű����� ����� �Լ�

//�ζ��� �Լ��� ���� ó��
//�ζ��� �Լ��� ȣ���ϴ� ���� �ζ��� �Լ� �ڵ带 Ȯ�� ����
//��ũ�ο� ����
//�ڵ� Ȯ�� �� �ζ��� �Լ��� �����
//�ζ��� �Լ� ȣ��
//�Լ� ȣ�⿡ ���� ������� �������� ����
//���α׷��� ���� �ӵ� ����

//�ζ��� �Լ��� ����
//C++ ���α׷��� ���� �ӵ� ���
//���� ȣ��Ǵ� ª�� �ڵ��� �Լ� ȣ�⿡ ���� �ð� �Ҹ� ����
//C++���� ª�� �ڵ��� ��� �Լ��� ���� ����

//�ζ��� �Լ� ���
//#include<iostream>
//using namespace std;
//
//inline int odd(int x) {
//    return (x % 2);
//}
//
//int main() {
//    int sum = 0;
//
//    for (int i = 0;i <= 10000;i++) {
//        if (odd(i))
//            sum += i;
//    }
//    cout << sum;
//}

//�ζ��� �Լ� ����� �� �ڵ� �ζ���
//����
//���α׷��� ���� �ð��� ��������

//����
//�ζ��� �Լ� �ڵ��� �������� �����ϵ� ��ü �ڵ� ũ�� ����

//�ڵ� �ζ��� �Լ�
//Ŭ���� ����ο� ������ ��� �Լ�
//inline���� ������ �ʿ� ����
//�����Ϸ��� ���� �ڵ����� �ζ��� ó��
//�����ڸ� ������ ��� �Լ��� �ڵ� �ζ��� �Լ� ����

//class Circle {
//private:
//    int radius;
//public:
//    Circle();
//    Circle(int r);
//    double getArea();
//};
//
//inline Circle::Circle() {
//    radius = 1;
//}//inline ����Լ�
//
//Circle::Circle(int r) {
//    radius = r;
//}
//
//inline double Circle::getArea() {
//    return 3.14 * radius * radius;
//}

//C++ ����ü
//���,���,���� ���� �� ��� ���� Ŭ������ ����
//Ŭ������ �����ϰ� �ٸ� ��
//����ü�� ����Ʈ ���� ����-public
//Ŭ������ ����Ʈ ���� ����-private

//C++���� ����ü�� ������ ����
//C������ ȣȯ��
//C�� ����ü 100% ȣȯ ����
//C �ҽ��� �״�� ������ ���� ����

//����ü ��ü ����
//struct Ű���� ����

//����ü�� Ŭ������ ����Ʈ ���� ���� ��

//���� 3-10.Circle Ŭ������ C++ ����ü�� �̿��� ���ۼ�

//#include<iostream>
//using namespace std;
//
////C++ ����ü ����
//struct StructCircle {
//private:
//    int radius;
//public:
//    StructCircle(int r) {
//        radius = r;         //����ü�� ������
//    }
//    double getArea();
//};
//
//double StructCircle::getArea() {
//    return 3.14 * radius * radius;
//}
//int main()
//{
//    StructCircle waffle(3);
//    cout << "������" << waffle.getArea();
//}

//�ٶ����� C++ ���α׷� �ۼ���
//Ŭ������ ��� ���ϰ� cpp ���Ϸ� �и��Ͽ� �ۼ�
//Ŭ�������� �и� ����
//Ŭ���� ���� ��:��� ���Ͽ� ����
//Ŭ���� ���� ��:cpp ���Ͽ� ����
//main()�� ���� �Լ��� ������ �ٸ� cpp ���Ͽ� �л� ����

//��� ������ �ߺ� ����:���� �����Ϸ� �ذ��Ѵ�

//���� 3-11.��� ���ϰ� cpp ���Ϸ� �и��ϱ�
//#include<iostream>
//using namespace std;
//
//class Adder {  //���� ��� Ŭ����
//    int op1, op2;
//public:
//    Adder(int a, int b);
//    int process();
//};
//
//Adder::Adder(int a, int b) {
//    op1 = a, op2 = b;
//}
//
//int Adder::process() {
//    return op1 + op2;
//}
//
//class Calculator { //���� Ŭ����
//public:
//    void run();
//};
//
//void Calculator::run() {
//    cout << "�� ���� ���� �Է��ϼ���>>";
//    int a, b;
//    cin >> a >> b;            //���� �� �� �Է�
//    Adder adder(a, b);        //������ ����
//    cout << adder.process();  //���� ���
//}
//
//int main() {
//    Calculator calc;  //calc ��ü ����
//    calc.run();       //���� ����
//}