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

//��� �Լ��� ���� ������ ����
//���� ������ �ߺ�: + ������

//class Power {
//	int kick;
//	int punch;
//public:
//	Power operator+(Power op2);
//};
//
//Power Power::operator+(Power op2) {
//	Power tmp;
//	tmp.kick = this->kick + op2.kick;
//	tmp.punch = this->punch + op2.punch;
//	return tmp;
//}

////���� 7-4.�� ���� Power ��ü�� ���ϴ� +������ �ۼ�
//#include<iostream>
//using namespace std;
//
//class Power {
//	int kick;
//	int punch;
//public:
//	Power(int kick = 0, int punch = 0) {
//		this->kick = kick;
//		this->punch = punch;
//	}
//	void show();
//	Power operator+(Power op2); //+������ �Լ� ����
//
//};
//void Power::show() {
//	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
//}
//Power Power::operator+(Power op2) {
//	Power tmp; //�ӽ� ��ü ����
//	tmp.kick = this->kick + op2.kick;  //kick ���ϱ�
//	tmp.punch = this->punch + op2.punch; //punch ���ϱ�
//	return tmp;
//}
//
//int main() {
//	Power a(3, 5), b(4, 6), c;
//	c = a + b;
//	a.show();
//	b.show();
//	c.show();
//}

//���� 7-5.�� ���� Power ��ü�� ���ϴ� == ������ �ۼ�
//#include<iostream>
//using namespace std;
//
//class Power {
//	int kick;
//	int punch;
//public:
//	Power(int kick = 0, int punch = 0) {
//		this->kick = kick;
//		this->punch = punch;
//	}
//	void show();
//	bool operator==(Power op2);  //==������ �Լ� ����
//};
//void Power::show() {
//	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
//}
//bool Power::operator==(Power op2) {
//	if (kick == op2.kick && punch == op2.punch)
//		return true;
//	else return false;
//}
//int main() {
//	Power a(3, 5), b(3, 5);
//	a.show();
//	b.show();
//	if (a == b) cout << "�� �Ŀ��� ����." << endl;
//	else cout << "�� �Ŀ��� ���� �ʴ�." << endl;
//}

//���� 7-6.�� Power ��ü�� ���ϴ� += ������ �ۼ�
//#include<iostream>
//using namespace std;
//
//class Power {
//	int kick;
//	int punch;
//public:
//	Power(int kick = 0, int punch = 0) {
//		this->punch = punch;
//		this->kick = kick;
//	}
//	void show();
//	Power& operator+=(Power op2); //+=������ �Լ� ����
//};
//
//void Power::show() {
//	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
//}
//Power& Power::operator+=(Power op2) {
//	kick = kick + op2.kick;
//	punch = punch + op2.punch;
//	return *this;
//}
//int main() {
//	Power a(3, 5), b(4, 6), c;
//	a.show();
//	b.show();
//	c = a += b;
//	a.show();
//	c.show();
//}

//#include<iostream>
//using namespace std;
//
//class Power {
//	int kick;
//	int punch;
//public:
//	Power(int kick = 0, int punch = 0) {
//		this->kick = kick; this->punch = punch;
//	}
//	void show();
//	Power operator+(int op2);
//};
//void Power::show() {
//	cout << "kick= " << kick << ',' << "punch=" << punch << endl;
//}
//Power Power::operator+(int op2) {
//	Power tmp;
//	tmp.kick = kick + op2;
//	tmp.punch = punch + op2;
//	return tmp;
//}
//int main() {
//	Power a(3, 5), b;
//	a.show();
//	b.show();
//	b = a + 2;
//	a.show();
//	b.show();
//}

//��� �Լ��� ���� ������ ����
// 
//���� ������ �ߺ�

//���� ������
//�ǿ����ڰ� �ϳ� ���� ������
//������ �ߺ� ����� ���� �������� ���� ���� ������

//���� ������ ����
//���� ������/���� ������

//���� ++������ �ߺ�
//class Power {
//	int kick;
//	int punch;
//public:
//	Power& operator++();
//};
//Power& Power::operator++() {
//	//kick�� punch�� a�� ���
//	kick++;
//	punch++;
//	return *this;  //����� ��ü �ڽ��� ���� ����
//}

//���� 7-8 ���� ++ ������ �ۼ�
//#include<iostream>
//using namespace std;
//
//class Power {
//	int kick;
//	int punch;
//public:
//	Power(int kick = 0, int punch = 0) {
//		this->kick = kick; this->punch = punch;
//	}
//	void show();
//	Power& operator++(); //���� ++������ �Լ� ����
//};
//void Power::show() {
//	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
//}
//Power& Power::operator++() {
//	kick++;
//	punch++;
//	return *this;
//}
//
//int main() {
//	Power a(3, 5), b;
//	a.show();
//	b.show();
//	b = ++a;
//	a.show();
//	b.show();
//}

//���� 7-9.Power Ŭ������ ! ������ �ۼ�
// ! �����ڸ� Power Ŭ������ ��� �Լ��� �ۼ��϶�
// !a�� a�� kick, punch �Ŀ��� ��� 0�̸� true,�ƴϸ� false�� �����϶�.

//#include<iostream>
//using namespace std;
//
//class Power {
//	int kick;
//	int punch;
//public:
//	Power(int kick = 0, int punch = 0) {
//		this->kick = kick; this->punch = punch;
//	}
//	void show();
//	bool operator! (); //! ������ �Լ� ����
//};
//
//void Power::show() {
//	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
//}
//bool Power::operator!() {
//	if (this->kick == 0 && this->punch == 0) return true;
//	else return false;
//}
//int main() {
//	Power a(0, 0), b(5, 5);
//	if (!a) cout << "a�� �Ŀ��� 0�̴�." << endl;
//	else cout << "a�� �Ŀ��� 0�� �ƴϴ�." << endl;
//	if (!b)cout << "b�� �Ŀ��� 0�̴�." << endl;
//	else cout << "b�� �Ŀ��� 0�� �ƴϴ�." << endl;
//}

//���� ������ �ߺ�, ++ ������

//class Power {
//	int kick;
//	int punch;
//public:
//	Power operator++(int x);
//};
//Power Power::operator++(int x) {
//	Power tmp = *this; //���� ���� ��ü ���� ����
//	kick++;
//	punch++;
//	return tmp; //���� ������ ��ü(��ü a) ����
//}

//���� 7-10. ���� ++ ������ �ۼ�
//#include<iostream>
//using namespace std;
//
//class Power {
//	int kick;
//	int punch;
//public:
//	Power(int kick = 0, int punch = 0) {
//		this->kick = kick; this->punch = punch;
//	}
//	void show();
//	Power operator++(int x); //���� ++ ������ �Լ� ����
//};
//
//void Power::show() {
//	cout << "kick= " << kick << ',' << "punch=" << punch << endl;
//}
//Power Power::operator++(int x) {
//	Power tmp = *this;
//	kick++;
//	punch++;
//	return tmp;
//}
//int main() {
//	Power a(3, 5), b;
//	a.show();
//	b.show();
//	b = a++;  //���� ++ ������ ���
//	a.show(); //a�� �Ŀ��� 1 ������ 
//	b.show(); //b�� a�� �����Ǳ� ���� ���¸� ������
//}

//2+a ������ ���� + ������ �Լ� �ۼ�

//Power a(3, 4), b;
//b = 2 + a;
//
//Power operator+(int op1, Power op2) {
//	Power tmp;
//	tmp.kick = op1 + op2.kick;
//	tmp.punch = op1 + op2.punch;
//	return tmp;
//}

//���� 7-11. 2+a�� ���� + ������ �Լ��� ������� �ۼ�
//#include<iostream>
//using namespace std;
//
//class Power {
//	int kick;
//	int punch;
//public:
//	Power(int kick = 0, int punch = 0) {
//		this->kick = kick; this->punch = punch;
//	}
//	void show();
//	friend Power operator+(int op1, Power op2); //������ ����
//};
//
//void Power::show() {
//	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
//}
//Power operator+(int op1, Power op2) {
//	Power tmp;
//	tmp.kick = op1 + op2.kick;
//	tmp.punch = op1 + op2.punch;
//	return tmp;
//}
//int main() {
//	Power a(3, 5), b;
//	a.show();
//	b.show();
//	b = 2 + a;
//	a.show();
//	b.show();
//}

//+ �����ڸ� �ܺ� ������ �Լ��� ����
//class Power {
//	int kick;
//	int punch;
//public:
//	Power(int kick = 0, int punch = 0) {
//		this->kick = kick;
//		this->punch = punch;
//	}
//	friend Power operator+(Power op1, Power op2);
//};
//Power operator+(Power op1, Power op2) {
//	Power tmp;
//	tmp.kick = op1.kick + op2.kick;
//	tmp.punch = op1.kick + op2.punch;
//	return tmp;
//}

//���� 7-12.a+b�� ���� ������ �Լ��� ������� �ۼ�
//#include<iostream>
//using namespace std;
//
//class Power {
//	int kick;
//	int punch;
//public:
//	Power(int kick = 0, int punch = 0) {
//		this->kick = kick; this->punch = punch;
//	}
//	void show();
//	friend Power operator+(Power op1, Power op2);
//};
//void Power::show() {
//	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
//}
//
//Power operator+(Power op1, Power op2) {
//	Power tmp;
//	tmp.kick = op1.kick + op2.kick;
//	tmp.punch = op1.punch + op2.punch;
//	return tmp;
//}
//int main() {
//	Power a(3, 5), b(4, 6), c;
//	c = a + b;
//	a.show();
//	b.show();
//	c.show();
//}

// ���� ������ ++�� ������� �ۼ��ϱ�
//���� ������
//class Power {
//	int kick;
//	int punch;
//public:
//	Power power(int kick = 0, int punch = 0) {
//		this->kick = kick;
//		this->punch = punch;
//	}
//	friend Power& operator++(Power& op);
//};
//Power& operator++(Power& op) {
//	op.kick++;
//	op.punch++;
//	return op;
//}

//���� 7-13.++�����ڸ� ������� �ۼ��� ��
//#include<iostream>
//using namespace std;
//class Power {
//	int kick;
//	int punch;
//public:
//	Power power(int kick = 0, int punch = 0) {
//		this->kick = kick;
//		this->punch = punch;
//	}
//	friend Power& operator++(Power& op);
//	friend Power& operator++(Power& op, int x);
//	void show();
//};
//void Power::show() {
//	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
//}
//Power& operator++(Power& op) {
//	op.kick++;
//	op.punch++;
//	return op;
//}
//Power& operator++(Power& op, int x) {
//	Power tmp = op;
//	op.kick++;
//	op.punch++;
//	return tmp;
//}
//int main() {
//	Power a(3, 5), b;
//	b = ++a;
//	a.show(); b.show();
//	
//	b = a++;
//	a.show(); b.show();
//}

//���� 7-14.������ �����ϴ� << ������ �ۼ�

//Power ��ü�� kick�� punch�� ������ ���ϴ� << �����ڸ� ��� �Լ��� �ۼ��϶�
//#include<iostream>
//using namespace std;
//
//class Power {
//	int kick;
//	int punch;
//public:
//	Power(int ick = 0, int punch = 0) {
//		this->kick = kick; this->punch = punch;
//	}
//	void show();
//	Power& operator<<(int n);
//};
//void Power::show() {
//	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
//}
//Power& Power::operator<<(int n) {
//	kick += n;
//	punch += n;
//	return *this;
//}
//int main() {
//	Power a(1, 2);
//	a << 3 << 5 << 6;
//	a.show();
//}

