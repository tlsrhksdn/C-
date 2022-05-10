//#include<iostream>
//using namespace std;
//
//class MyString {
//	char* string_content;
//	int string_length;
//public:
//	MyString(char c) ;
//	MyString(char* str) ;
//	MyString(const MyString& str);
//
//	int length() const;
//	
//	void add_string();
//
//	void get_innerstring();
//
//	int compare();
//
//	void compare_length();
//};
//MyString::MyString(char c) {
//	string_content = new char[1];
//	string_content[0] = c;
//	string_length = 1;
//}
//MyString::MyString(char* str) {
//	string_length = strlen(str);
//	string_content = new char[string_length];
//	for (int i = 0;i != string_length;i++)
//		string_content[i] = str[i];
//}
//MyString::MyString(MyString* str)