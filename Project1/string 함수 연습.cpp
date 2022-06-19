////erase 함수 예시
//
//#include<algorithm>
//#include<iostream>
//#include<string>
//
//int main() {
//	std::string s = "This is an example";
//	std::cout << s << "\n";
//
//	s.erase(0, 5);
//	std::cout << s << "\n";
//
//	s.erase(std::find(s.begin(), s.end(), ' '));
//	std::cout << s << '\n';
//
//	s.erase(s.find(' '));
//	std::cout << s << '\n';
//}

//#include<iostream>
//#include<string>
//
//void print(std::string::size_type n, std::string const& s) {
//	if (n == std::string::npos) {
//		std::cout << "not found\n";
//	}
//	else {
//		std::cout << "found: " << s.substr(n) << '\n';
//	}
//}
//int main() {
//	std::string::size_type n;
//	std::string const s = "This is a string";
//
//	n = s.find("is");
//	print(n, s);
//
//	n = s.find("is", 5);
//	print(n, s);
//
//	n = s.find('a');
//	print(n, s);
//
//	n = s.find('q');
//	print(n, s);
// 
//}

//getline 함수 예시
//#include<iostream>
//#include<sstream>
//#include<string>
//
//int main() {
//	std::string name;
//	std::cout << "What is your name? ";
//	std::getline(std::cin, name);
//	std::cout << "Hello " << name << ", nice to meet you.\n";
//
//	std::istringstream input;
//	input.str("1\n2\n3\n4\n5\n6\n7\n");
//	int sum = 0;
//	for (std::string line;std::getline(input, line);) {
//		sum += std::stoi(line);
//	}
//	std::cout << "\nThe sum is: " << sum << "\n";
//}
//
//#include<cassert>
//#include<iterator>
//#include<string>
//using namespace std::string_literals;
//int main() {
//std::string s = "xmplr";
//
//// insert(size_type index, size_type count, char ch)
//s.insert(0, 1, 'E');
//assert("Exmplr" == s);
//
//// insert(size_type index, const char* s)
//s.insert(2, "e");
//assert("Exemplr" == s);
//
//// insert(size_type index, string const& str)
//s.insert(6, "a"s);
//assert("Exemplar" == s);
//
//// insert(size_type index, string const& str,
////     size_type index_str, size_type count)
//s.insert(8, " is an example string."s, 0, 14);
//assert("Exemplar is an example" == s);
//
//// insert(const_iterator pos, char ch)
//s.insert(s.cbegin() + s.find_first_of('n') + 1, ':');
//assert("Exemplar is an: example" == s);
//
//// insert(const_iterator pos, size_type count, char ch)
//s.insert(s.cbegin() + s.find_first_of(':') + 1, 2, '=');
//assert("Exemplar is an:== example" == s);
//
//// insert(const_iterator pos, InputIt first, InputIt last)
//{
//    std::string seq = " string";
//    s.insert(s.begin() + s.find_last_of('e') + 1, std::begin(seq),
//        std::end(seq));
//    assert("Exemplar is an:== example string" == s);
//}
//
//// insert(const_iterator pos, std::initializer_list<char>)
//s.insert(s.cbegin() + s.find_first_of('g') + 1, { '.' });
//assert("Exemplar is an:== example string." == s);
//}

//#include<iostream>
//#include<string>
//
//int main() {
//	std::string a = "0123456789abcdefghij";
//
//	std::string sub1 = a.substr(10);
//	std::cout << sub1 << '\n';
//
//	std::string sub2 = a.substr(5, 3);
//	std::cout << sub2 << '\n';
//
//	std::string sub4 = a.substr(a.size() - 3, 50);
//	std::cout << sub4 << '\n';
//
//}

#include<iostream>
#include<string>

int main() {
	std::string str1 = "45";
	std::string str2 = "3.14159";
	std::string str3 = "31337 with words";
	std::string str4 = "words and 2";

	int myint1 = std::stoi(str1);
	int myint2 = std::stoi(str2);

	int myint3 = std::stoi(str3);

	std::cout << "std::stoi(\"" << str1 << "\") is" << myint1 << '\n';
	std::cout << "std::stoi(\"" << str2 << "\") is" << myint2 << '\n';
	std::cout << "std::stoi(\"" << str3 << "\") is" << myint2 << '\n';
}
