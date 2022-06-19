#include<iostream>
using namespace std;

class TV {
	int channel;
public:
	TV(int channel) { this->channel = channel; }
	TV() {}
	void on() { cout << channel << "on" << endl; }
	void off() { cout << "Off" << endl; }
	~TV() { cout << "TV �Ҹ���" << endl; }
	int getChannel() { return channel; }
};

class ColorTV :public TV {
protected: 
	string color;
public:
	ColorTV(int channel, string color) :TV(channel) { this->color = color; }
	ColorTV();
	void show() { cout << color << "�� ������" << endl; }
	~ColorTV() { cout << "color TV thauf" << endl; }
};
class SmartTV :public ColorTV {
	int price;
public:
	SmartTV() {}
	SmartTV(int channel, string color, int price):ColorTV(channel, color)
	{
		this->price = price;
	}
	void replay() {
		cout << color << "�� ä�ι�ȣ" << getChannel() << ", ����" << price << "�� �Դϴ�" << endl;
	}
};