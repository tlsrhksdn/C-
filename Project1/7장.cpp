//������ �Լ�
// 
//Ŭ������ ��� �Լ��� �ƴ� �ܺ� �Լ� 
//���� �Լ�,�ٸ� Ŭ������ ��� �Լ�
// 
//friend Ű����� Ŭ���� ���� ����� �Լ�
//Ŭ������ ��� ����� ������ �� �ִ� ���� �ο�
//������ �Լ���� �θ�
//
//������ ������ �ʿ伺
//Ŭ������ ����� �����ϱ⿡�� ������ �ְ�
//Ŭ������ ��� ����� �����Ӱ� ������ �� �ִ� �Ϻ� �ܺ� �Լ� ���� ��

//������� �ʴ��ϴ� 3���� ����
//������ �Լ��� �Ǵ� 3����

//���� �Լ�:Ŭ���� �ܺο� ����� ���� �Լ�
//�ٸ� Ŭ������ ��� �Լ�:�ٸ� Ŭ������ Ư�� ��� �Լ�
//�ٸ� Ŭ���� ��ü:�ٸ� Ŭ������ ��� ��� �Լ�

//������ ���� 3����
////1.�ܺ� �Լ� equals()�� Rect Ŭ������ ������� ����
//class Rect{ //Rect Ŭ���� ����
//	friend bool equals();
//};
////2.RectManager Ŭ������ equals()��� �Լ��� Rect Ŭ������ ������� ����
//class Rect {
//	friend bool RectManager::equals(Rect r, Rect s);
//};
////3.RectManager Ŭ������ ��� ��� �Լ��� Rect Ŭ������ ������� ����
//class Rect {
//	friend RectManager;
//};

//���� 7-1.������ �Լ� �����
//#include<iostream>
//using namespace std;
//
//class Rect;
//bool equals(Rect r, Rect s); //equals() �Լ� ����
//
//class Rect { //Rect Ŭ���� ����
//	int width, height;
//public:
//	Rect(int width, int height) {
//		this->width = width;
//		this->height = height;
//	}
//	friend bool equals(Rect r, Rect s);
//
//};
//bool equals(Rect r, Rect s) { //�ܺ� �Լ�
//	if (r.width == s.width && r.height == s.height)
//		return true;
//	else
//		return false;
//}
//
//int main() {
//	Rect a(3, 4), b(4, 5);
//	if (equals(a, b))
//		cout << "equal" << endl;
//	else
//		cout << "not equal" << endl;
//}

//���� 7-2.�ٸ� Ŭ������ ��� �Լ��� ������� ����
//#include<iostream>
//using namespace std;
//
//class Rect;
//
//class RectManager {
//public:
//	bool equals(Rect r, Rect s);
//};
//
//class Rect {
//	int width, height;
//public:
//	Rect(int width, int height) {
//		this->width = width;
//		this->height = height;
//	}
//	friend bool RectManager::equals(Rect r, Rect s);
//};
//
//bool RectManager::equals(Rect r, Rect s) {
//	if (r.width == s.width && r.height == s.height)
//		return true;
//	else
//		return false;
//}
//
//int main() {
//	Rect a(3, 4), b(3, 4);
//	RectManager man;
//
//	if (man.equals(a, b))
//		cout << "equal" << endl;
//	else
//		cout << "not equal" << endl;
//}

//���� 7-3.�ٸ� Ŭ���� ��ü�� ������� ����
//#include<iostream>
//using namespace std;
//
//class Rect;
//
//class RectManager { //RectManager Ŭ���� ����
//public:
//	bool equals(Rect r, Rect s);
//	void copy(Rect& dest, Rect& src);
//};
//
//class Rect { //Rect Ŭ���� ����
//	int width, height;
//public:
//	Rect(int width, int height) {
//		this->width = width;
//		this->height = height;
//	}
//	friend RectManager; //RectManager() Ŭ������ ������ �Լ��� ����
//};
//bool RectManager::equals(Rect r, Rect s) {
//	if (r.width == s.width && r.height == s.height)
//		return true;
//	else
//		return false;
//}
//void RectManager::copy(Rect& dest, Rect& src) { //src�� dest�� ����
//	dest.width == src.width;
//	dest.height == src.height;
//}
//
//int main() {
//	Rect a(3, 4), b(5, 6);
//	RectManager man;
//
//	man.copy(b, a);
//	if (man.equals(a, b))
//		cout << "equal" << endl;
//	else
//		cout << "not equal" << endl;
//}

//������ �ߺ�
//�ϻ� ��Ȱ������ ��ȣ ���
//+��ȣ�� ���
//���� ���ϱ�:2+3=5
//�� ȥ��:����+�Ķ�=����
//��Ȱ:����+����=��ȥ

//+ ��ȣ�� ���ڿ� ��ü�� ����,�ߺ� ���
//+ ��ȣ�� ���ڰ� �ƴ� ������ ���
//������ �ǹ� ����
//������

//C++������ ������ �ߺ� ����
//C++ �� �������� �ִ� �����ڿ� ���ο� �ǹ� ����
//���� ���α׷� ������

//������ �ߺ��� ���:+ �����ڿ� ����
//���� ���ϱ�
//int a=2,b=3,c;
//c=a+b; //+ ��� 5, ������ �ǿ������� �� 2�� 3�� ���ϱ�

//���ڿ� ��ġ��
//string a="C",c;
//c=a+ "++"; //+ ��� "C++" ���ڿ��� �ǿ������϶� �� ���� ���ڿ� ��ġ��

//�� ����
//Color a(BLUE),b(RED),c;
//c=a+b; //c=VIOLET. a,b�� �� ���� ���� ���ο� Color ��ü c

//�迭 ��ġ��
//SortedArray a(2,5,9),b(3,7,10),c;
//c=a+b; //c={2,3,5,7,9,10}; ���ĵ� �� �迭�� ������ ���ο� �迭 ����

//������ �ߺ��� Ư¡
//c++�� ���� �ִ� �����ڸ� �ߺ� ����
//�� ������ Ÿ���� �ٸ� ���ο� ���� ����
//�����ڴ� �Լ� ���·� ����-������ �Լ�
//�ݵ�� Ŭ������ ���踦 ����
//�ǿ������� ������ �ٲ� �� ����
//������ �켱 ���� ���� �ȵ�
//��� �����ڰ� �ߺ� �������� ����

//������ �Լ�

//������ �Լ� ���� ��� 2����
//1.Ŭ������ ��� �Լ��� ����
//2.�ܺ� �Լ��� �����ϰ� Ŭ������ ������ �Լ��� ����

//������ �Լ� ����
//����Ÿ�� operator������(�Ű���������Ʈ);

//+�� ==�������� �ۼ� ���

//�ܺ� �Լ��� �����ǰ� Ŭ������ ������� ����Ǵ� ���
//Color operator + (Color op1, Color op2); //�ܺ� �Լ�
//bool operator ==(Color op1, Color op2);  //�ܺ� �Լ�
//
//class Color {
//	friend Color operator+(Color op1, Color op2);
//	friend bool operator==(Color op1, Color op2);
//};
//
////Ŭ������ ��� �Լ��� �ۼ��Ǵ� ���
//class Color {
//	Color operator+(Color op2);
//	bool operator==(Color op2);
//};
