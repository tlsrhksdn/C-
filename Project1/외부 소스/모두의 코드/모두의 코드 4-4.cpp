#/*include<iostream>

class Marine {
	int hp;
	int coord_x, coord_y;
	int damage;
	bool is_dead;

public:
	Marine();
	Marine(int x, int y);

	int attack();
	void be_attacked(int damage_earn);
	void move(int x, int y);

	void show_status();
};

Marine::Marine() :hp(50), coord_x(0), coord_y(0), damage(5), is_dead(false) {}

Marine::Marine(int x, int y)
	: coord_x(x), coord_y(y), hp(50), damage(5), is_dead(false) {}

void Marine::move(int x, int y) {
	coord_x = x;
	coord_y = y;
}
int Marine::attack() { return damage; }
void Marine::be_attacked(int damage_earn) {
	hp -= damage_earn;
	if (hp <= 0) is_dead = true;
}
void Marine::show_status() {
	std::cout << " *** Marine *** " << std::endl;
	std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) "
		<< std::endl;
	std::cout << " HP : " << hp << std::endl;
}

int main() {
	Marine marine1(2, 3);
	Marine marine2(3, 5);

	marine1.show_status();
	marine2.show_status();
}*/

//�ʱ�ȭ ����Ʈ
//������ ȣ��� ���ÿ� ��� �������� �ʱ�ȸ���ְ� �ȴ�

//��� �ʱ�ȭ ����Ʈ

//(������ �̸�) :  var1(arg1), var2(arg2) {}
//var:Ŭ������ ��� �������� ��Ī
//arg:��� �������� �������� �ʱ�ȭ���� ��Ī

//�ʱ�ȭ ����Ʈ�� ����� ������ ��� ������ �ʱ�ȭ�� ���ÿ� �ϰ�  �ȴ�
//�ʱ�ȭ ����Ʈ�� ������� �ʴ´ٸ� ������ ���� �ϰ� ���� ������ �����ϰ� �ȴ�

//������ �� 'Marine' �� ����

//Marine�� ���� ���� ��

//��� �迭�� Marine�� ������ ����, ������ ������ ������ ��� ����
//� ������ ���� Marine�� �����ÿ� 1�� �߰��ϰ�, �Ҹ�ÿ� 1�� ����

//static �������

//��ü�� �Ҹ��� �� �Ҹ�Ǵ� ���� �ƴ� ���α׷��� ����� �� �Ҹ��Ѵ�

//Ŭ������ ��� ��ü���� �����ϴ� �����ν� 
//�� ��ü���� ���� �����ϴ� ��� ��������� �޸�
//��� ��ü���� �ϳ��� static ��� ������ ����ϰ� �ȴ�

//static Ŭ���� ��������
//static int total_marine_num;

//��� ���� �� static �������� ���ǿ� ���ÿ� ���� �ڵ����� 0���� �ʱ�ȭ�ȴ�

//Ŭ���� static ������ ��� �Ʒ��� ������� �ʱ�ȭ�Ѵ�
//int Marine::total_marine_num = 0;


//class Marine {
//	static int total_marine_num = 0;

//class Marine {
//	const static int x = 0;

//this ������

//Marine& Marine::be_attacked(int damage_earn) {
//	hp -= damage_earn;
//	if (hp <= 0) is_dead = true;
//
//	return *this;
//}

//this
//C++��� �������� ���ǵǾ� �ִ� Ű����
//��ü �ڽ��� ����Ű�� �������� ������ �Ѵ�

//���۷����� �����ϴ� �Լ�

//#include<iostream>
//
//class A {
//	int x;
//
//public:
//	A(int c) :x(c) {}
//
//	int& access_x() { return x; }  //x�� ���۷����� ����
//	int get_x() { return x; }     //x�� ���� ����
//	void show_x() { std::cout << x << std::endl; }
//};
//
//int main() {
//	A a(5);
//	a.show_x();
//
//	int& c = a.access_x();  //���۷��� c�� x�� ���۷���,�� x�� ������ �޾Ҵ�
//	c = 4;                  //c�� ���� �ٲٴ� ���� a�� x�� ���� �ٲٴ� �Ͱ� ������ �ǹ�
//	a.show_x();
//
//
//	int d = a.access_x();  //int&�� �ƴ� int ������ x�� ������ ����
//	                       //d�� �׳� int �����̹Ƿ� ���� ���簡 �Ͼ d���� x�� ���� ���� �ȴ�
//	d = 3;                
//	a.show_x();
//
//	int f = a.get_x();
//	f = 1;
//	a.show_x();
//}
//
//Marine& Marine::be_attacked(int damage_earn) {
//	this->hp -= damage_earn;
//	if (this->hp <= 0) this->is_dead = true;
//
//	return *this;
//}

//be_attacked �Լ��� Marine& Ÿ���� �����ϰ� �Ǵµ�, 
//�� ��� *this�� �����ϰ� �ȴ�


