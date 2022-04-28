//스타크래프트 만들기
//
//#include<iostream>
//
//class Marine {
//	int hp;                    //체력
//	int coord_x, coord_y;      //위치
//	int damage;               //공격력
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
//	std::cout << std::endl << "마린 1이 마린 2를 공격! " << std::endl;
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
//	std::cout << std::endl << "마린 1 이 마린 2 를 공격! " << std::endl;
//
//	marines[0]->be_attacked(marines[1]->attack());
//
//	marines[0]->show_status();
//	marines[1]->show_status();
//
//	delete marines[0];
//	delete marines[1];
//}

//마린의 이름 만들기
//
//#include<iostream>
//#include<string.h>
//
//class Marine {
//	int hp;                    //체력
//	int coord_x, coord_y;      //위치
//	int damage;               //공격력
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
//	std::cout << name << " 의 소멸자 호출 ! " << std::endl;
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
//	std::cout << std::endl << "마린 1이 마린 2를 공격! " << std::endl;
//
//	marines[0]->be_attacked(marines[1]->attack());
//
//	marines[0]->show_status();
//	marines[1]->show_status();
//
//	delete marines[0];
//	delete marines[1];
//}

//// 포토캐논
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
//    std::cout << "복사 생성자 호출 !" << std::endl;
//    hp = pc.hp;
//    shield = pc.shield;
//    coord_x = pc.coord_x;
//    coord_y = pc.coord_y;
//    damage = pc.damage;
//}
//Photon_Cannon::Photon_Cannon(int x, int y) {
//    std::cout << "생성자 호출 !" << std::endl;
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

//복사 생성자
//Photon_Cannon(const Photon_Cannon& pc);

//어떤 클래스 T가 있다면
/*T(const T& a);*/ //라고 정의된다

//다른 T의 객체 a를 상수 레퍼런스로 받는다

//a가 const이므로
//복사 생성자 내부에서 a의 데이터를 변경할 수 없고
//새롭게 초기화되는 인스턴스 변수들에게 복사만 할 수 있게 된다


//Photon_Cannon::Photon_Cannon(const Photon_Cannon& pc) {
//	std::cout << "복사 생성자 호출 !" << std::endl;
//	hp = pc.hp;
//	shield = pc.shield;
//	coord_x = pc.coord_x;
//	coord_y = pc.coord_y;
//	damage = pc.damage;
//}

//복사 생성자 내부에서 pc의 인스턴스 변수들에 접근해서 
//객체의 shield, coord_x,coord_y 등을 초기화할 수 는 있지만
//pc.coord_x=3;
//처럼 pc의 값 자체는 변경할 수 없다

//인자로 받는 변수의 내용을 함수 내부에서 바꾸지 않는다면
//const를 붙여 주는 것이 바람직하다

//Photon_Cannon pc1(3, 3);
//Photon_Cannon pc2(pc1);
//
//Photon_Cannon pc3 = pc2; //복사 생성자가 동일하게 해석한다
////사용자가 상당히 직관적이고 깔끔한 프로그래밍을 할 수 잇따

// 디폴트 복사 생성자의 한계
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
//    // 0 이 아닌 값은 if 문에서 true 로 처리되므로
//    // 0 인가 아닌가를 비교할 때 그냥 if(name) 하면
//    // if(name != 0) 과 동일한 의미를 가질 수 있다.
//
//    // 참고로 if 문 다음에 문장이 1 개만 온다면
//    // 중괄호를 생략 가능하다.
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

//위의 코드에서 컴파일시 에러 발생

//Photon_Cannon::Photon_Cannon(const Photon_Cannon& pc) {
//	hp = pc.hp;
//	shield = pc.shield;
//	coord_x = pc.coord_x;
//	coord_y = pc.coord_y;
//	damage = pc.damage;
//	name = pc.name;
//}

//hp,shield,...,name까지 모두 같은 값을 갖게 된다
//name이 같은 값-> 두 개의 포인터가 같은 값을 가진다는 것은 같은 주소 값을 가리킨다는 말이 된다

//pc1의 name이 동적으로 할당받아서 가리키고 있던 메모리를 pc2의 name도 같이 가리키게 된다

//소멸자 실행 시 문제 발생

//pc1의 소멸자는 pc1의 내용을 파괴함과 동시에 할당한 메모리까지 모두 delete한다

//pc2에서 name은 NULL이 아니므로 delete[] name이 수행되고
//이미 해제된 메모리에 접근해서 다시 해제하려고 하ㅕㅇㅆ으므로 
//위의 그림과 같은 런타임 오류가 발생한다

//이 문제를 막기 위해서는
//복사 생성자에서 name을 그대로 복사하지 말고 다른 메모리에 동적 할당을 해서 복사한다

//메모리를 새로 할당해 내용을 복사하는 것을 깊은 복사라 부르고
//위와 같이 단순히 대입만 해주는 것을 얕은 복사라 부른다

// 복사 생성자의 중요성
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
//    std::cout << "복사 생성자 호출! " << std::endl;
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

//문제 1
//#include<iostream>
//#include<string.h> 
//
//class string {
//	char* str;
//	int len;
//
//public:
//	string(char c, int n);  //문자 c가 n개 있는 문자열로 정의
//	string(const char* s);
//	string(const string& s);
//	~string();
//
//	void add_string(const string& s);  //str 뒤에 s를 붙인다
//	void copy_string(const string& s); //str에 s를 복사한다
//	int strlen();   //문자열 길이 리턴
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