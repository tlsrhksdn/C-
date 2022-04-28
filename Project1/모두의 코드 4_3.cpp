//��Ÿũ����Ʈ �����
//
//#include<iostream>
//
//class Marine {
//	int hp;                    //ü��
//	int coord_x, coord_y;      //��ġ
//	int damage;               //���ݷ�
//	bool is_dead;
//
//public:
//	Marine();
//	Marine(int x, int y);
//	
//	int attack();
//	void be_attacked(int damage_earn);
//	void move(int x, int y);
//
//	void show_status();
//};
//Marine::Marine() {
//	hp = 50;
//	coord_x = coord_y = 8;
//	damage= 5;
//	is_dead = false;
//}
//
//Marine::Marine(int x, int y) {
//	coord_x = x;
//	coord_y = y;
//	hp = 50;
//	damage = 5;
//	is_dead = false;
//}
//void Marine::move(int x, int y) {
//	coord_x = x;
//	coord_y = y;
//}
//int Marine::attack() {
//	return damage;
//}
//void Marine::be_attacked(int damage_earn) {
//	hp -= damage_earn;
//	if (hp <= 0)
//		is_dead = true;
//}
//void Marine::show_status() {
//	std::cout << " *** Marine ***" << std::endl;
//	std::cout << "Location : ( " << coord_x << " , " << coord_y << ")" << std::endl;
//	std::cout << " HP : " << hp << std::endl;
//}

//int main() {
//	Marine marine1(2, 3);
//	Marine marine2(3, 5);
//
//	marine1.show_status();
//	marine2.show_status();
//
//	std::cout << std::endl << "���� 1�� ���� 2�� ����! " << std::endl;
//	marine2.be_attacked(marine1.attack());
//
//	marine1.show_status();
//	marine2.show_status();
//}
//
//int main() {
//	Marine* marines[100];
//
//	marines[0] = new Marine(2, 3);
//	marines[1] = new Marine(3, 5);
//
//	marines[0]->show_status();
//	marines[1]->show_status();
//
//	std::cout << std::endl << "���� 1 �� ���� 2 �� ����! " << std::endl;
//
//	marines[0]->be_attacked(marines[1]->attack());
//
//	marines[0]->show_status();
//	marines[1]->show_status();
//
//	delete marines[0];
//	delete marines[1];
//}

//������ �̸� �����
//
//#include<iostream>
//#include<string.h>
//
//class Marine {
//	int hp;                    //ü��
//	int coord_x, coord_y;      //��ġ
//	int damage;               //���ݷ�
//	bool is_dead;
//	char* name;
//
//public:
//	Marine();
//	Marine(int x, int y, const char* marine_name);
//	Marine(int x, int y);
//	~Marine();
//
//	int attack();
//	void be_attacked(int damage_earn);
//	void move(int x, int y);
//
//	void show_status();
//};
//Marine::Marine() {
//	hp = 50;
//	coord_x = coord_y = 8;
//	damage = 5;
//	is_dead = false;
//	name = NULL;
//}
//
//Marine::Marine(int x, int y, const char* marine_name) {
//	name = new char[strlen(marine_name) + 1];
//	strcpy(name, marine_name);
//
//	coord_x = x;
//	coord_y = y;
//	hp = 50;
//	damage = 5;
//	is_dead = false;
//}
//
//Marine::Marine(int x,int y) {
//	hp = 50;
//	coord_x = x;
//	coord_y = y;
//	damage = 5;
//	is_dead = false;
//	name = NULL;
//}
//
//Marine::~Marine() {
//	std::cout << name << " �� �Ҹ��� ȣ�� ! " << std::endl;
//	if (name != NULL) {
//		delete[] name;
//	}
//}
//
//void Marine::move(int x, int y) {
//	coord_x = x;
//	coord_y = y;
//}
//int Marine::attack() {
//	return damage;
//}
//void Marine::be_attacked(int damage_earn) {
//	hp -= damage_earn;
//	if (hp <= 0)
//		is_dead = true;
//}
//void Marine::show_status() {
//	std::cout << " *** Marine : "<<name<<" ***" << std::endl;
//	std::cout << "Location : ( " << coord_x << " , " << coord_y << " ) " << std::endl;
//	std::cout << " HP : " << hp << std::endl;
//}
//
//int amain() {
//	Marine* marines[100];
//
//	marines[0] = new Marine(2, 3, "Marine 2");
//	marines[1] = new Marine(1, 5, "Marine 1");
//
//	marines[0]->show_status();
//	marines[1]->show_status();
//
//	std::cout << std::endl << "���� 1�� ���� 2�� ����! " << std::endl;
//
//	marines[0]->be_attacked(marines[1]->attack());
//
//	marines[0]->show_status();
//	marines[1]->show_status();
//
//	delete marines[0];
//	delete marines[1];
//}

//// ����ĳ��
//#include <string.h>
//#include <iostream>
//
//class Photon_Cannon {
//    int hp, shield;
//    int coord_x, coord_y;
//    int damage;
//
//public:
//    Photon_Cannon(int x, int y);
//    Photon_Cannon(const Photon_Cannon& pc);
//
//    void show_status();
//};
//Photon_Cannon::Photon_Cannon(const Photon_Cannon& pc) {
//    std::cout << "���� ������ ȣ�� !" << std::endl;
//    hp = pc.hp;
//    shield = pc.shield;
//    coord_x = pc.coord_x;
//    coord_y = pc.coord_y;
//    damage = pc.damage;
//}
//Photon_Cannon::Photon_Cannon(int x, int y) {
//    std::cout << "������ ȣ�� !" << std::endl;
//    hp = shield = 100;
//    coord_x = x;
//    coord_y = y;
//    damage = 20;
//}
//void Photon_Cannon::show_status() {
//    std::cout << "Photon Cannon " << std::endl;
//    std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) "
//        << std::endl;
//    std::cout << " HP : " << hp << std::endl;
//}
//int main() {
//    Photon_Cannon pc1(3, 3);
//    Photon_Cannon pc2(pc1);
//    Photon_Cannon pc3 = pc2;
//
//    pc1.show_status();
//    pc2.show_status();
//}

//���� ������
//Photon_Cannon(const Photon_Cannon& pc);

//� Ŭ���� T�� �ִٸ�
/*T(const T& a);*/ //��� ���ǵȴ�

//�ٸ� T�� ��ü a�� ��� ���۷����� �޴´�

//a�� const�̹Ƿ�
//���� ������ ���ο��� a�� �����͸� ������ �� ����
//���Ӱ� �ʱ�ȭ�Ǵ� �ν��Ͻ� �����鿡�� ���縸 �� �� �ְ� �ȴ�


//Photon_Cannon::Photon_Cannon(const Photon_Cannon& pc) {
//	std::cout << "���� ������ ȣ�� !" << std::endl;
//	hp = pc.hp;
//	shield = pc.shield;
//	coord_x = pc.coord_x;
//	coord_y = pc.coord_y;
//	damage = pc.damage;
//}

//���� ������ ���ο��� pc�� �ν��Ͻ� �����鿡 �����ؼ� 
//��ü�� shield, coord_x,coord_y ���� �ʱ�ȭ�� �� �� ������
//pc.coord_x=3;
//ó�� pc�� �� ��ü�� ������ �� ����

//���ڷ� �޴� ������ ������ �Լ� ���ο��� �ٲ��� �ʴ´ٸ�
//const�� �ٿ� �ִ� ���� �ٶ����ϴ�

//Photon_Cannon pc1(3, 3);
//Photon_Cannon pc2(pc1);
//
//Photon_Cannon pc3 = pc2; //���� �����ڰ� �����ϰ� �ؼ��Ѵ�
////����ڰ� ����� �������̰� ����� ���α׷����� �� �� �յ�

// ����Ʈ ���� �������� �Ѱ�
//#include <string.h>
//#include <iostream>
//
//class Photon_Cannon {
//    int hp, shield;
//    int coord_x, coord_y;
//    int damage;
//
//    char* name;
//
//public:
//    Photon_Cannon(int x, int y);
//    Photon_Cannon(int x, int y, const char* cannon_name);
//    ~Photon_Cannon();
//
//    void show_status();
//};
//
//Photon_Cannon::Photon_Cannon(int x, int y) {
//    hp = shield = 100;
//    coord_x = x;
//    coord_y = y;
//    damage = 20;
//
//    name = NULL;
//}
//Photon_Cannon::Photon_Cannon(int x, int y, const char* cannon_name) {
//    hp = shield = 100;
//    coord_x = x;
//    coord_y = y;
//    damage = 20;
//
//    name = new char[strlen(cannon_name) + 1];
//    strcpy(name, cannon_name);
//}
//Photon_Cannon::~Photon_Cannon() {
//    // 0 �� �ƴ� ���� if ������ true �� ó���ǹǷ�
//    // 0 �ΰ� �ƴѰ��� ���� �� �׳� if(name) �ϸ�
//    // if(name != 0) �� ������ �ǹ̸� ���� �� �ִ�.
//
//    // ����� if �� ������ ������ 1 ���� �´ٸ�
//    // �߰�ȣ�� ���� �����ϴ�.
//
//    if (name) delete[] name;
//}
//void Photon_Cannon::show_status() {
//    std::cout << "Photon Cannon :: " << name << std::endl;
//    std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) "
//        << std::endl;
//    std::cout << " HP : " << hp << std::endl;
//}
//int main() {
//    Photon_Cannon pc1(3, 3, "Cannon");
//    Photon_Cannon pc2 = pc1;
//
//    pc1.show_status();
//    pc2.show_status();
//}

//���� �ڵ忡�� �����Ͻ� ���� �߻�

//Photon_Cannon::Photon_Cannon(const Photon_Cannon& pc) {
//	hp = pc.hp;
//	shield = pc.shield;
//	coord_x = pc.coord_x;
//	coord_y = pc.coord_y;
//	damage = pc.damage;
//	name = pc.name;
//}

//hp,shield,...,name���� ��� ���� ���� ���� �ȴ�
//name�� ���� ��-> �� ���� �����Ͱ� ���� ���� �����ٴ� ���� ���� �ּ� ���� ����Ų�ٴ� ���� �ȴ�

//pc1�� name�� �������� �Ҵ�޾Ƽ� ����Ű�� �ִ� �޸𸮸� pc2�� name�� ���� ����Ű�� �ȴ�

//�Ҹ��� ���� �� ���� �߻�

//pc1�� �Ҹ��ڴ� pc1�� ������ �ı��԰� ���ÿ� �Ҵ��� �޸𸮱��� ��� delete�Ѵ�

//pc2���� name�� NULL�� �ƴϹǷ� delete[] name�� ����ǰ�
//�̹� ������ �޸𸮿� �����ؼ� �ٽ� �����Ϸ��� �ϤŤ������Ƿ� 
//���� �׸��� ���� ��Ÿ�� ������ �߻��Ѵ�

//�� ������ ���� ���ؼ���
//���� �����ڿ��� name�� �״�� �������� ���� �ٸ� �޸𸮿� ���� �Ҵ��� �ؼ� �����Ѵ�

//�޸𸮸� ���� �Ҵ��� ������ �����ϴ� ���� ���� ����� �θ���
//���� ���� �ܼ��� ���Ը� ���ִ� ���� ���� ����� �θ���

// ���� �������� �߿伺
//#include <string.h>
//#include <iostream>
//
//class Photon_Cannon {
//    int hp, shield;
//    int coord_x, coord_y;
//    int damage;
//
//    char* name;
//
//public:
//    Photon_Cannon(int x, int y);
//    Photon_Cannon(int x, int y, const char* cannon_name);
//    Photon_Cannon(const Photon_Cannon& pc);
//    ~Photon_Cannon();
//
//    void show_status();
//};
//Photon_Cannon::Photon_Cannon(int x, int y) {
//    hp = shield = 100;
//    coord_x = x;
//    coord_y = y;
//    damage = 20;
//
//    name = NULL;
//}
//Photon_Cannon::Photon_Cannon(const Photon_Cannon& pc) {
//    std::cout << "���� ������ ȣ��! " << std::endl;
//    hp = pc.hp;
//    shield = pc.shield;
//    coord_x = pc.coord_x;
//    coord_y = pc.coord_y;
//    damage = pc.damage;
//
//    name = new char[strlen(pc.name) + 1];
//    strcpy(name, pc.name);
//}
//Photon_Cannon::Photon_Cannon(int x, int y, const char* cannon_name) {
//    hp = shield = 100;
//    coord_x = x;
//    coord_y = y;
//    damage = 20;
//
//    name = new char[strlen(cannon_name) + 1];
//    strcpy(name, cannon_name);
//}
//Photon_Cannon::~Photon_Cannon() {
//    if (name) delete[] name;
//}
//void Photon_Cannon::show_status() {
//    std::cout << "Photon Cannon :: " << name << std::endl;
//    std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) "
//        << std::endl;
//    std::cout << " HP : " << hp << std::endl;
//}
//int main() {
//    Photon_Cannon pc1(3, 3, "Cannon");
//    Photon_Cannon pc2 = pc1;
//
//    pc1.show_status();
//    pc2.show_status();
//}

//Photon_Cannon::~Photon_Cannon() {
//	if (name) delete[] name;
//}

//���� 1
//#include<iostream>
//#include<string.h> 
//
//class string {
//	char* str;
//	int len;
//
//public:
//	string(char c, int n);  //���� c�� n�� �ִ� ���ڿ��� ����
//	string(const char* s);
//	string(const string& s);
//	~string();
//
//	void add_string(const string& s);  //str �ڿ� s�� ���δ�
//	void copy_string(const string& s); //str�� s�� �����Ѵ�
//	int strlen();   //���ڿ� ���� ����
//};
//
//string::string(char c, int n) {
//	str = new char[len + 1];
//	for (int i = 0;i < n;i++)
//		str[i] = c;
//}
//string::string(const char* s) {
//	str = new char[len + 1];
//	strcpy_s(str, len, s);
//}
//string::string(const string& s) {
//	
//}
//
//void string::add_string(const string& s) {
//
//}
//void string::copy_string(const string& s) {
//
//}
//int string::strlen() {
//	return len;;
//}