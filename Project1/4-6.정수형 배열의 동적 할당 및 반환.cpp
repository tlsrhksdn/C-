//사용자로부터 입력할 정수의 개수를 입력 받아 배열을 동적 할당 받고,
//하나씩 정수를 입력받은 후 합을 출력하는 프로그램을 작성하라

//입력할 정수의 개수는 ? 4
//1번째 정수 : 4
//2번째 정수 : 20
//3번째 정수 : -5
//4번째 정수 : 9
//평균 = 7

//#include<iostream>
//using namespace std;
//
//int main() {
//	int n;
//	cout << "입력할 정수의 개수는 ? ";
//	cin >> n;
//
//	int* arr = new int[n];
//
//	int num,hap=0;
//	for (int i = 0;i < n;i++) {
//		cout << i + 1 << "번째 정수 : ";
//		cin >> num;
//		arr[i] = num;
//		hap += arr[i];
//	}
//	int avg = hap / n;
//	cout << "평균 = " << avg << endl;
//}