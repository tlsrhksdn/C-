//String 함수의 구성

//문자(char)로부터의 문자열 생성, C문자열(char *)로부터의 생성
//문자열 길이를 구하는 함수
//문자열 뒤에 다른 문자열 붙이기
//문자열 내에 포함되어 있는 문자열 구하기
//문자열이 같은지 비교
//문자열 크기 비교
//#include<iostream>
//#include<string>
//
//class MyString {
//	char* string_content;  //문자열 데이터를 가리키는 포인터
//	int string_length;     //문자열 길이
//	int memory_capacity;   //현재 할당된 용량
//
//public:
//	MyString(char c);
//	MyString(const char* str);
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
//	MyString& assign(const MyString& str);
//	MyString& assign(const char* str);
//
//	char at(int i)const;
//
//	MyString& insert(int loc, const MyString& str);
//	MyString& insert(int loc, const char* str);
//	MyString& insert(int loc, char c);
//
//	MyString& erase(int loc, int num);
//
//	int find(int find_from, const MyString& str)const;
//	int find(int find_from, const char* str)const;
//	int find(int find_from, char c)const;
//
//	int compare(const MyString& str)const;
//};
//MyString::MyString(char c) {
//	string_content = new char[1];
//	string_content[0] = c;
//	memory_capacity = 1;
//	string_length = 1;
//}
//
//MyString::MyString(const char* str) {
//	string_length = strlen(str);
//	memory_capacity = string_length;
//	string_content = new char[string_length];
//
//	for (int i = 0;i != string_length;i++) {
//		string_content[i] = str[i];
//	}
//}
//
//MyString::MyString(const MyString& str) {
//	string_length = str.string_length;
//	memory_capacity = str.string_length;
//	string_content = new char[string_length];
//
//	for (int i = 0;i!= string_length;i++) {
//		string_content[i] = str.string_content[i];
//	}
//}
//MyString::~MyString() { delete[] string_content; }
//int MyString::length() const { return string_length; }
//
//void MyString::print() const {
//	for (int i = 0;i != string_length;i++) {
//		std::cout << string_content[i];
//	}
//}
//void MyString::println() const {
//	for (int i = 0;i != string_length;i++) {
//		std::cout << string_content[i];
//	}
//	std::cout << std::endl;
//}
//
//MyString& MyString::assign(const MyString& str) {
//	if (str.string_length > memory_capacity) {
//		delete[] string_content;
//
//		string_content = new char[str.string_length];
//		memory_capacity = str.string_length;
//	}
//	for (int i = 0;i != str.string_length;i++) {
//		string_content[i] = str.string_content[i];
//	}
//
//	string_length = str.string_length;
//
//	return *this;
//}
//MyString& MyString::assign(const char* str) {
//	int str_length = strlen(str);
//	if (str_length > memory_capacity) {
//		delete[] string_content;
//
//		string_content = new char[str_length];
//		memory_capacity = str_length;
//	}
//	for (int i = 0;i != str_length;i++) {
//		string_content[i] = str[i];
//	}
//
//	string_length = str_length;
//	return *this;
//}
//int MyString::capacity() const { return memory_capacity; }
//void MyString::reserve(int size) {
//	if (size > memory_capacity) {
//		char* prev_string_content = string_content;
//
//		string_content = new char[size];
//		memory_capacity = size;
//		
//		for (int i = 0;i != string_length;i++) {
//			string_content[i] = prev_string_content[i];
//		}
//		delete[] prev_string_content;
//	}
//}
//char MyString::at(int i)const {
//	if (i >= string_length || i < 0) {
//		return 0;
//	}
//	else {
//		return string_content[i];
//	}
//}
//MyString& MyString::insert(int loc, const MyString& str) {
//	if (loc<0 || loc>string_length) return *this;
//
//	if (string_length + str.string_length > memory_capacity) {
//		if (memory_capacity * 2 > string_length + str.string_length)
//			memory_capacity *= 2;
//		else
//			memory_capacity = string_length + str.string_length;
//
//		char* prev_string_content = string_content;
//		string_content = new char[memory_capacity];
//
//		int i;
//		for (i = 0;i < loc;i++) {
//			string_content[i] = prev_string_content[i];
//		}
//		for (int j = 0;j!= str.string_length;j++) {
//			string_content[i + j] = str.string_content[j];
//		}
//		for (;i < string_length;i++) {
//			string_content[str.string_length+i] = prev_string_content[i];
//		}
//
//		delete[] prev_string_content;
//
//		string_length = string_length + str.string_length;
//		return *this;
//	}
//	for (int i = string_length - 1;i >= loc;i--) {
//		string_content[i + str.string_length] = string_content[i];
//	}
//	for (int i = 0;i < str.string_length;i++)
//		string_content[i + loc] = str.string_content[i];
//
//	string_length = string_length + str.string_length;
//	return *this;
//}
//MyString& MyString::insert(int loc, const char* str) {
//	MyString temp(str);
//	return insert(loc, temp);
//}
//MyString& MyString::erase(int loc,int num){
//	if (num < 0 || loc<0 || loc>string_length) return *this;
//
//	for (int i = loc + num;i < string_length;i++) {
//		string_content[i - num] = string_content[i];
//	}
//	string_length -= num;
//	return *this;
//}
//int MyString::find(int find_from, const MyString& str)const {
//	int i, j;
//	if (str.string_length == 0) return-1;
//	for (i = find_from;i <= string_length - str.string_length;i++) {
//		for (j = 0;j < str.string_length;j++) {
//			if (string_content[i + j] != str.string_content[j]) break;
//		}
//
//		if (j == str.string_length)return i;
//	}
//	return -1;
//}
//int MyString::find(int find_from, const char* str)const {
//	MyString temp(str);
//	return find(find_from, temp);
//}
//int MyString::find(int find_from, char c)const {
//	MyString temp(c);
//	return find(find_from, temp);
//}
//int MyString::compare(const MyString& str)const {
//	for (int i = 0;i < std::min(string_length, str.string_length);i++) {
//		if (string_content[i] > str.string_content[i])
//			return 1;
//		else if (string_content[i] < str.string_content[i])
//			return -1;
//	}
//	if (string_length == str.string_length) return 0;
//
//	else if (string_length>str. string_length)
//		return 1;
//
//	return -1;	
//}