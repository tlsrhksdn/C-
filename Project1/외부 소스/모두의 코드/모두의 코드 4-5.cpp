//String 함수의 구성

//문자(char)로부터의 문자열 생성, C문자열(char *)로부터의 생성
//문자열 길이를 구하는 함수
//문자열 뒤에 다른 문자열 붙이기
//문자열 내에 포함되어 있는 문자열 구하기
//문자열이 같은지 비교
//문자열 크기 비교
#include<iostream>
#include<string>

class MyString {
	char* string_content; //문자열 데이터를 가리키는 포인터
	int string_length;    //문자열 길이

public:
	MyString(char c);
	MyString(const char* str);
	MyString(const MyString& str);

	~MyString();

	MyString& assign(const MyString& str);
	MyString& assign(const char* str);

	int length() const;
	void print() const;
	void println() const;
};
MyString::MyString(char c) {
	string_content = new char[1];
	string_content[0] = c;
	string_length = 1;
}
MyString::MyString(const char* str) {
	string_length = strlen(str);
	string_content = new char[string_length];

	for (int i = 0;i < string_length;i++)
		string_content[i] = str[i];
}
MyString::MyString(const MyString& str) {
	string_length = str.string_length;
	for (int i = 0;i != string_length;i++)
		string_content[i] = str.string_content[i];
}

MyString::~MyString() { delete[] string_content; }

MyString& MyString::assign(const MyString& str) {
	if (str.string_length > string_length) {
		delete[] string_content;

		string_content = new char[str.string_length];
	}
	for (int i = 0;i != str.string_length;i++) {
		string_content[i] = str.string_content[i];
	}
	string_length = str.string_length;
	return *this;
}
MyString& MyString::assign(const char* str) {
	int str_length = strlen(str);
	if (str_length > string_length) {
		delete[] string_content;

		string_content = new char[str_length];
	}
}
int MyString::length() const { return string_length; }

void MyString::print() const {
	for (int i = 0;i != string_length;i++) {
		std::cout << string_content[i];
	}
}
void MyString::println() const {
	for (int i = 0;i != string_length;i++) {
		std::cout << string_content[i];
	}
	std::cout << std::endl;
}
int main() {
	MyString str1("hello world!");
	MyString str2(str1);

	str1.println();
	str2.println();
}