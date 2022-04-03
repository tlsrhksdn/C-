//°´Ã¼ Æ÷ÀÎÅÍ

//°´Ã¼¿¡ ´ëÇÑ Æ÷ÀÎÅÍ
//°´Ã¼ÀÇ ÁÖ¼Ò °ªÀ» °¡Áö´Â º¯¼ö

//Æ÷ÀÎÅÍ·Î ¸â¹ö¸¦ Á¢±ÙÇÒ ¶§
//°´Ã¼Æ÷ÀÎÅÍ->¸â¹ö

//#include<iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; }
//	Circle(int r) { radius = r; }
//	double getArea();
//};
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle donut;
//	Circle pizza(30);
//
//	//°´Ã¼ ÀÌ¸§À¸·Î ¸â¹ö Á¢±Ù
//	cout << donut.getArea() << endl;
//
//	//°´Ã¼ Æ÷ÀÎÅÍ·Î ¸â¹ö Á¢±Ù
//	Circle* p;
//	p = &donut;
//	cout << p->getArea() << endl;  //donutÀÇ getArea() È£Ãâ
//	cout << (*p).getArea() << endl;  //donutÀÇ getArea() È£Ãâ
//
//	p = &pizza;
//	cout << p->getArea() << endl;   //pizzaÀÇ getArea() È£Ãâ
//	cout << (*p).getArea() << endl; //pizzaÀÇ getArea() È£Ãâ
//}

//°´Ã¼ ¹è¿­ »ý¼º ¹× ¼Ò¸ê

//°´Ã¼ ¹è¿­ ¼±¾ð °¡´É

//±âº» Å¸ÀÔ ¹è¿­ ¼±¾ð°ú Çü½Ä µ¿ÀÏ

//int n[3];  //Á¤¼öÇü ¹è¿­ ¼±¾ð
//Circle c[3];   //Circle Å¸ÀÔÀÇ ¹è¿­ ¼±¾ð

//°´Ã¼ ¹è¿­ ¼±¾ð 
//1.°´Ã¼ ¹è¿­À» À§ÇÑ °ø°£ ÇÒ´ç
//2.¹è¿­ÀÇ °¢ ¿ø¼Ò °´Ã¼¸¶´Ù »ý¼ºÀÚ ½ÇÇà
//c[0]ÀÇ »ý¼ºÀÚ,c[1]ÀÇ »ý¼ºÀÚ,c[2]ÀÇ »ý¼ºÀÚ ½ÇÇà
//¸Å°³ º¯¼ö ¾ø´Â »ý¼ºÀÚ È£Ãâ

//¸Å°³ º¯¼ö ÀÖ´Â »ý¼ºÀÚ¸¦ È£­„ÇÒ ¼ö ¾øÀ½
//Circle circleArray[3](5);  //¿À·ù

//¹è¿­ ¼Ò¸ê
//¹è¿­ÀÇ °¢ °´Ã¼¸¶´Ù ¼Ò¸êÀÚ È£Ãâ, »ý¼ºÀÇ ¹Ý´ë¼øÀ¸·Î ¼Ò¸ê
//c[2]ÀÇ ¼Ò¸êÀÚ,c[1]ÀÇ ¼Ò¸êÀÚ, c[0]ÀÇ ¼Ò¸êÀÚ ½ÇÇà

//¿¹ÂÅ4-2.Circle Å¬·¡½ºÀÇ ¹è¿­ ¼±¾ð ¹× È°¿ë
#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle circleArray[3];    //Circle °´Ã¼ ¹è¿­ »ý¼º

	//¹è¿­ÀÇ °¢ ¿ø¼Ò °´Ã¼ÀÇ ¸â¹ö Á¢±Ù
	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0;i < 3;i++)   //¹è¿­ÀÇ °¢ ¿ø¼Ò °´Ã¼ÀÇ ¸â¹ö Á¢±Ù 
		cout << "Circle " << i << "ÀÇ ¸éÀûÀº " << circleArray[i].getArea() << endl;

	Circle * p;
	p = circleArray;

	for (int i = 0;i < 3;i++) { //°´Ã¼ Æ÷ÀÎÅÍ·Î ¹è¿­ Á¢±Ù
		cout << "Circle " << i << "ÀÇ ¸éÀûÀº " << p->getArea() << endl;
		p++;
	}
	
}