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
//void readRadius(Circle& c) {
//	int radius;
//	cout << "���� ������ �������� �Է��ϼ���>>";
//	cin >> radius;
//	c.setRadius(radius);
//}
//
//int main() {
//	Circle donut;
//	readRadius(donut);
//	cout << "donut�� ���� = " << donut.getArea() << endl;
//}

//���� ����
//C����� �Լ� ����
//�Լ��� �ݵ�� ���� ����
//�⺻ Ÿ�� ��:int,char,double ��
//������ ��
// 
//C++�� �Լ� ����
//�Լ��� �� �ܿ� ���� ���� ����
//���� ����
//���� ��� ���� �����ϴ� ������ ���� ���� ����
//������ ���� �����ϴ� ���� �ƴ�

//���� �����ϴ� �Լ� vs ������ �����ϴ� �Լ�

//���� ���� �����ϴ� get()

//char c = 'a';
//char get() { //char ����
//	return c; //���� 'c'�� ����('a') ����
//}
//
//char a = get(); //a='a'�� ��
//
//get() = 'b'; //������ ����
//
////char Ÿ���� ����(����)�� �����ϴ� find()
//
//char c = 'a';
//
//char& find() {  //char Ÿ���� ���� ����
//	return c; //���� c�� ���� ���� ����
//}
//
//char a = find();  //a='a'�� ��
//
//char& ref = find();  //ref�� c�� ���� ����
//ref = 'M';  //c-'M'
//
//find = 'b'; //c='b'�� ��

//���� 5-8.������ ���� ���� ���
//#include<iostream>
//using namespace std;
//
//char& find(char a[], int index) {
//	return s[index];  //���� ����
//}
//
//int main() {
//	char name[] = "Mike";
//	cout << name << endl;
//
//	find(name, 0) = '5';  //name[i]='5'�� ����
//	cout << name << endl;
//
//	char& ref = find(name, 2);  //ref�� name[2] ����
//	ref = 't'; //name='Site'
//	cout << name << endl;
//}

//C++���� ���� ����� ���� ����
// 
//���� ����(shallow copy)
//��ü ���� ��, ��ü�� ����� 1:1�� ����
//��ü�� ��� ������ ���� �޸𸮰� �Ҵ�� ���
//�纻�� ���� ��ü�� �Ҵ���� �޸𸮸� �����ϴ� ���� �߻�

//���� ����
//��ü ���� �� ��ü�� ����� 1:1��� ����
//��ü�� ��� ������ ���� �޸𸮰� �Ҵ�� ���
//�纻�� ������ ���� �޸� ũ�⸸ŭ ������ ���� �Ҵ�
//������ ���� �޸𸮿� �ִ� ������ �纻�� ����

//������ ������ ����
//�纻�� ������ �޸𸮸� �����ϴ� ���� ����

//���� ������
//��ü�� ���� ������ ȣ��Ǵ� Ư���� ������
//Ư¡
//�� Ŭ������ ���� �� ���� ���� ����
//���� �����ڴ� ���� �����ڿ� Ŭ���� ���� �ߺ� ���� ����
//���
//Ŭ������ ���� ���� �Ű� ������ ������ ��Ư�� ������

//���� ������ ����
//class Circle {
//	Circle(class Circle& c); //���� ������ ����
//};
//
//Circle::Circle(const Circle& c);  //���� ������ ����

//���� 5-9.Circl�� ���� �����ڿ� ��ü ����
//#include<iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle(const Circle& c);  //���� ������ ����
//	Circle() { radius = 1; }
//	Circle(int radius) { this->radius = radius; }
//	double getArea() { return 3.14 * radius * radius; }
//};
//
//Circle::Circle(const Circle& c) {   //���� ������ ����
//	this->radius = c.radius;
//	cout << "���� ������ ���� radius = " << radius << endl;
//}
//
//int main() {
//	Circle src(30);  //src ��ü�� ���� ������ ȣ��
//	Circle dest(src);  //dest ��ü�� ���� ������ ȣ��
//
//	cout << "������ ���� = " << src.getArea() << endl;
//	cout << "�纻�� ���� = " << dest.getArea() << endl;
//}
//

//����Ʈ ���� ������
//���� �����ڰ� ����Ǿ� ���� �ʴ� Ŭ����
//�����Ϸ��� �ڵ����� ����Ʈ ���� ������ ����

//���� 5-10.���� ���� �����ڸ� ����Ͽ� ���α׷��� ������ ����Ǵ� ���

//#define CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstring>
//using namespace std;
//
//class Person {  //Person Ŭ���� ����
//	char* name;
//	int id;
//public:
//	Person(int id, const char* name); //������
//	~Person(); //�Ҹ���
//	void changeName(const char* name);
//	void show() { cout << id << ',' << name << endl; }
//};
//Person::Person(int id, const char* name) {
//	this->id = id;
//	int len = strlen(name);  //name�� ���� ����
//	this->name = new char[len + 1];  //name ���ڿ� ���� �Ҵ�
//	strcpy(this->name, name); //name�� ���ڿ� ����
//}
//
//Person::~Person(){ //�Ҹ���
//	if (name) //���� name�� ���� �Ҵ�� �迭�� ������
//		delete[] name; //���� �Ҵ� �޸� �Ҹ�,name �޸� ��ȯ
//}
//
//void Person::changeName(const char *name){ //�̸� ����
//	if (strlen(name) > strlen(this->name))
//		return;
//	strcpy(this->name, name);
//}
//int main() {
//	Person father(1, "Kitae");  //1.father ��ü ����
//	Person daughter(father);    //2. daughter ��ü ���� ����, ���� ������ ȣ��
//
//	cout << "daughter ��ü ���� ���� ----" << endl;
//	father.show();     //3.father ��ü ���
//	daughter.show();   //33.daughter ��ü ���
//
//	daughter.changeName("Grace");  //4.daughter�� �̸��� "Grace"�� ����
//	cout << "daughter �̸��� Grace�� ������ �� ----" << endl;  
//	father.shpw();              //5.father ��ü ���
//	daughter.show();            //5.daughter ��ü ���
//
//	return 0;             //6,7.dughter,father ��ü �Ҹ�
//}

//���� 5-11.���� ���� ���A�Ƹ� ���� ������ Person Ŭ����
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstring>
//using namespace std;
//
//class Person { //Person �𷡽� ����
//	char* name;
//	int id;
//public:
//	Person(int id, const char* name); //������
//	Person(const Person& person); //���� ������
//	~Person(); //�Ҹ���
//	void changeName(const char* name);
//	void show() { cout << id << "," << name << endl; }
//};
//
//Person::Person(int id, const char* name) {  //������
//	this->id = id;
//	int len = strlen(name);  //name�� ���� ����
//	this->name = new char[len + 1];  //name ���ڿ� ���� �Ҵ�
//	strcpy(this->name, name);  //name�� ���ڿ� ����
//}
//Person::Person(const Person& person){ //���� ������
//	this->id = person.id;  //id �� ����
//	int len = strlen(person.name); //name�� ���� ����
//	this->name = new char[len + 1];  //name�� ���� ���� �Ҵ�
//	strcpy(this->name, person.name);  //name�� ���ڿ� ����
//	cout << "���� ������ ����, ���� ��ü�� �̸� " << this->name << endl;
//}
//Person::~Person() {  //�Ҹ���
//	if (name) //���� name�� ���� �Ҵ�� �迭�� ������
//		delete[] name;  //���� �Ҵ� �޸� �Ҹ�
//}
//void Person::changeName(const char *name){ //�̸� ����
//	if(strlen(name))
//}