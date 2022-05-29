//#include<iostream>
//using namespace std;
//
//class Point {
//	int x, y;
//public:
//	Point(int pos_x, int pos_y) { x = pos_x; y = pos_y; }
//	int PrintX() { return x; }
//	int PrintY() { return y; }
//};
//
//class Geometry {
//private:
//	Point* point_array[100];
//	int num_points;
//
//public:
//	Geometry() { num_points = 0; }
//
//	void AddPoint(const Point& point) {
//		point_array[num_points++] = new Point(point);
//	}
//
//	void PrintDistance();
//	void PrintNumMeets();
//};
//
//void Geometry::PrintDistance() {
//	double distance;
//	for (int i = 0;i < num_points;i++)
//	{
//		distance = sqrt(pow(point_array[i]->PrintX() - point_array[num_points]->PrintY(), point_array[i]->PrintX() - point_array[num_points]->PrintY()));
//		cout << "점" << i << "와 점 " << num_points << "의 거리: " << distance << endl;
//	}
//}
//void Geometry::PrintNumMeets() {
//	int cross_number;
//	for (int i = 0;i < num_points;i++) {
//		if ((point_array[i]->PrintY() / point_array[i]->PrintX()) == (point_array[num_points]->PrintX() / point_array[num_points]->PrintY())) {}
//		else { cross_number++; }
//	}
//	cout << "교점의 개수는 " << cross_number << endl;
//}
//
//int main() {
//	Point* p;
//	
//
//}