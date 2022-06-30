//������ �����ε�:�⺻ �����ڵ��� ����ڰ� ���� �����Ѵ�
// 
// 
//#include <iostream>
//class MyString {
//	char* string_content;  // ���ڿ� �����͸� ����Ű�� ������
//	int string_length;     // ���ڿ� ����
//
//	int memory_capacity;  // ���� �Ҵ�� �뷮
//
//public:
//	// ���� �ϳ��� ����
//	MyString(char c);
//
//	// ���ڿ��� ���� ����
//	MyString(const char* str);
//
//	// ���� ������
//	MyString(const MyString& str);
//
//	~MyString();
//
//	int length() const;
//	int capacity() const;
//	void reserve(int size);
//
//	void print() const;
//	void println() const;
//
//	char at(int i) const;
//
//	int compare(MyString& str);
//	bool operator==(MyString& str);
//};
//
//MyString::MyString(char c) {
//	string_content = new char[1];
//	string_content[0] = c;
//	memory_capacity = 1;
//	string_length = 1;
//}
//MyString::MyString(const char* str) {
//	string_length = strlen(str);
//	memory_capacity = string_length;
//	string_content = new char[string_length];
//
//	for (int i = 0; i != string_length; i++) string_content[i] = str[i];
//}
//MyString::MyString(const MyString& str) {
//	string_length = str.string_length;
//	string_content = new char[string_length];
//
//	for (int i = 0; i != string_length; i++)
//		string_content[i] = str.string_content[i];
//}
//MyString::~MyString() { delete[] string_content; }
//int MyString::length() const { return string_length; }
//void MyString::print() const {
//	for (int i = 0; i != string_length; i++) std::cout << string_content[i];
//}
//void MyString::println() const {
//	for (int i = 0; i != string_length; i++) std::cout << string_content[i];
//
//	std::cout << std::endl;
//}
//int MyString::capacity() const { return memory_capacity; }
//void MyString::reserve(int size) {
//	if (size > memory_capacity) {
//		char* prev_string_content = string_content;
//
//		string_content = new char[size];
//		memory_capacity = size;
//
//		for (int i = 0; i != string_length; i++)
//			string_content[i] = prev_string_content[i];
//
//		delete[] prev_string_content;
//	}
//
//	// ���� �����Ϸ��� size �� ���� capacity ���� �۴ٸ�
//	// �ƹ��͵� ���ص� �ȴ�.
//}
//char MyString::at(int i) const {
//	if (i >= string_length || i < 0)
//		return 0;
//	else
//		return string_content[i];
//}
//int MyString::compare(MyString& str) {
//	// (*this) - (str) �� �����ؼ� �� 1, 0, -1 �� �� ����� �����Ѵ�
//	// 1 �� (*this) �� ���������� �� �ڿ� �´ٴ� �ǹ�. 0 �� �� ���ڿ�
//	// �� ���ٴ� �ǹ�, -1 �� (*this) �� ���������� �� �տ� �´ٴ� �ǹ��̴�.
//
//	for (int i = 0; i < std::min(string_length, str.string_length); i++) {
//		if (string_content[i] > str.string_content[i])
//			return 1;
//
//		else if (string_content[i] < str.string_content[i])
//			return -1;
//	}
//
//	// ���� ���� �ߴµ� ������ �ʾҴٸ� �� �κ� ���� ��� �Ȱ��� ���� �ȴ�.
//	// ���� ���ڿ� ���̰� ���ٸ� �� ���ڿ��� �ƿ� ���� ���ڿ��� �ȴ�.
//
//	if (string_length == str.string_length) return 0;
//
//	// ����� abc �� abcd �� ũ�� �񱳴� abcd �� �� �ڿ� ���� �ȴ�.
//	else if (string_length > str.string_length)
//		return 1;
//
//	return -1;
//}
//bool MyString::operator==(MyString& str) {
//	return !compare(str);  // str �� ������ compare ���� 0 �� �����Ѵ�.
//}
//
//class Complex {
//private:
//	double real, img;
//
//public:
//	Complex(double real, double img) : real(real), img(img) {}
//	Complex(const Complex& c) { real = c.real, img = c.img; }
//
//	Complex operator+(const Complex& c) const;
//	Complex operator-(const Complex& c) const;
//	Complex operator*(const Complex& c) const;
//	Complex operator/(const Complex& c) const;
//
//	Complex& operator=(const Complex& c);
//	void println() { std::cout << "( " << real << " , " << img << " ) " << std::endl; }
//};
//
//Complex Complex::operator+(const Complex& c) const {
//	Complex temp(real + c.real, img + c.img);
//	return temp;
//}
//Complex Complex::operator-(const Complex& c) const {
//	Complex temp(real - c.real, img - c.img);
//	return temp;
//}
//Complex Complex::operator*(const Complex& c) const {
//	Complex temp(real * c.real - img * c.img, real + c.img + img * c.real);
//	return temp;
//}
//Complex Complex::operator/(const Complex& c)const {
//	Complex temp((real * c.real + img * c.img) / (c.real * c.real + c.img + c.img),
//		(img + c.real - real * c.img) / (c.real * c.real + c.img * c.img));
//	return temp;
//}
//Complex& Complex::operator=(const Complex& c) {
//	real = c.real;
//	img = c.img;
//	return *this;
//}
//int main() {
//	Complex a(1.0, 2.0);
//	Complex b(3.0, -2.0);
//
//	Complex c = a * b;
//
//	c, println();
//}