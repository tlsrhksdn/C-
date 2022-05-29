#include<iostream>
#include<cstring>
using namespace std;

//���ڷκ����� ���ڿ�����, C���ڿ��κ����� ����
//���ڿ� ���̸� ���ϴ� �Լ�
//���ڿ� �ڿ� �ٸ� ���ڿ� ���̱� 
//���ڿ� ���� ���ԵǾ� �ִ� ���ڿ� ���ϱ�
//���ڿ��� ������ ��
//���ڿ� ũ�� ��(������)

class MyString {
	char* string_content;
	int string_length;
public:
	MyString(char c);
	MyString(const char* str);
	MyString(const MyString& str);
	int strlen(const MyString & str);
	MyString addstr(const MyString& str1, const MyString& str2);
	MyString getstr(const MyString &str,int startindex,int endindex );
	int compare( MyString& str1,  MyString& str2);
	int comparesize(class MyString& str1, const MyString& str2);
};
MyString::MyString(char ch) {
	string_length = 1;
	string_content = new char[string_length];
	string_content = &ch;
}
MyString::MyString(const char* str) {
	string_length = strlen(str);
	string_content = new char[string_length];
	for (int i = 0;i < string_length;i++) {
		string_content[i] = str[i];
	}
}
MyString::MyString(const MyString& str) {
	string_length = str.string_length;
	for (int i = 0;i < string_length;i++) {
		string_content[i] = str.string_content[i];
	}
}
MyString::~MyString() {
	delete[]string_content;
}

int MyString::strlen(const MyString& str) {
	int length = str.string_length;
	return length;
}
MyString MyString::addstr(const MyString& str1, const MyString& str2) {
	for (int i = 0;i < str2.string_length;i++) {
		str1.string_content[str1.string_length+i] = str2.string_content[i];
	}
}
MyString MyString::getstr(const MyString &str,int startindex,int endindex)
{
	for (int i = startindex;i < endindex;i++) {
		string_content[i] = str.string_content[i];
	}
}
int compare(MyString& str1, MyString& str2) {
	MyString s1 = str1, s2 = str2;
	int length1 = str1.strlen(&s1);


}