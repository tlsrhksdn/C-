//#include<iostream>
//using namespace std;
//
//class Point {
//private:
//	int xpos, ypos;
//public:
//	void init(int x, int y) { xpos = x;ypos = y; }
//	void ShowPointinfo() const {
//		cout << "[" << xpos << ", " << ypos << "]" << endl;
//	}
//};
//
//class Circle {
//private:
//	Point p;
//	int radius;
//public:
//	void init(int x, int y, int r)
//	{
//		p.init(x, y);
//		radius = r;
//	}
//	void ShowCircleInfo() const {
//		cout<< "radius: "<<radius << endl;
//		p.ShowPointinfo();
//	}
//};
//
//class Ring {
//private:
//	Circle c1;
//	Circle c2;
//public:
//	void init(int x1, int y1, int r1, int x2, int y2, int r2)
//	{
//		c1.init(x1, y1, r1);
//		c2.init(x2, y2, r2);
//	}
//	void ShowRingInfo() {
//		cout << "Inner Circle info... "<<"\n";
//	    c1.ShowCircleInfo();
//		cout << "Outer Circle info... " << "\n";
//		c2.ShowCircleInfo();	
//	}
//};
//
//int main() {
//	Ring ring;
//	ring.init(1, 1, 4, 2, 2, 9);
//	ring.ShowRingInfo();
//	return 0;
//}

//�Ϲݰ�ü�� �����ϸ� �ڵ尡 �� ���ư��µ�, ������ ��ü�� �����ϸ� ��µ��� �ʴ� ������ ����?
