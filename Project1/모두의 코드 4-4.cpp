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

//초기화 리스트
//생성자 호출과 동시에 멤버 변수들을 초기회해주게 된다

//멤버 초기화 리스트

//(생성자 이름) :  var1(arg1), var2(arg2) {}
//var:클래스의 멤버 변수들을 지칭
//arg:멤버 변수들을 무엇으로 초기화할지 지칭

//초기화 리스트를 사용한 버전의 경우 생성과 초기화를 동시에 하게  된다
//초기화 리스트를 사용하지 않는다면 생성을 먼저 하고 이후 대입을 수행하게 된다

//생성된 총 'Marine' 수 세기

//Marine의 수를 세는 법

//어떠한 배열에 Marine을 보관해 놓고, 생성된 마린의 개수를 모두 센다
//어떤 변수를 만들어서 Marine의 생성시에 1을 추가하고, 소멸시에 1을 뺀다

//static 멤버변수

//객체가 소멸할 때 소멸되는 것이 아닌 프로그램이 종료될 때 소멸한다

//클래스의 모든 객체들이 공유하는 변수로써 
//각 객체별로 따로 존재하는 멤버 변수들과는 달리
//모든 객체들이 하나의 static 멤버 변수를 사용하게 된다

//static 클래스 변수정의
//static int total_marine_num;

//모든 전역 및 static 변수들은 정의와 동시에 값이 자동으로 0으로 초기화된다

//클래스 static 변수의 경우 아래의 방법으로 초기화한다
//int Marine::total_marine_num = 0;


//class Marine {
//	static int total_marine_num = 0;

//class Marine {
//	const static int x = 0;

//this 포인터

//Marine& Marine::be_attacked(int damage_earn) {
//	hp -= damage_earn;
//	if (hp <= 0) is_dead = true;
//
//	return *this;
//}

//this
//C++언어 차원에서 정의되어 있는 키워드
//객체 자신을 가리키는 포인터의 역할을 한다

//레퍼런스를 리턴하는 함수

//#include<iostream>
//
//class A {
//	int x;
//
//public:
//	A(int c) :x(c) {}
//
//	int& access_x() { return x; }  //x의 레퍼런스를 리턴
//	int get_x() { return x; }     //x의 값을 리턴
//	void show_x() { std::cout << x << std::endl; }
//};
//
//int main() {
//	A a(5);
//	a.show_x();
//
//	int& c = a.access_x();  //레퍼런스 c는 x의 레퍼런스,즉 x의 별명을 받았다
//	c = 4;                  //c의 값을 바꾸는 것은 a의 x의 값을 바꾸는 것과 동일한 의미
//	a.show_x();
//
//
//	int d = a.access_x();  //int&가 아닌 int 변수에 x의 별명을 전달
//	                       //d가 그냥 int 변수이므로 값의 복사가 일어나 d에는 x의 값이 들어가게 된다
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

//be_attacked 함수는 Marine& 타입을 리턴하게 되는데, 
//위 경우 *this를 리턴하게 된다


