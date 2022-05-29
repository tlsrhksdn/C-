//#include<iostream>
//using namespace std;
//
//class Date {
//	int year_;
//	int month_;
//	int day_;
//public:
//	void SetDate(int year, int month, int date);
//	void AddDay(int inc);
//	void AddMonth(int inc);
//	void AddYear(int inc);
//
//	void ShowDate();
//};
//
//void Date::SetDate(int year, int month, int date) {
//	year_ = year;
//	month_ = month;
//	day_ = date;
//}
//
//void Date::AddDay(int inc) {
//	day_ += inc;
//	while (day_ <= 28) {
//		if (month_ > 12) {
//			year_ += 1;
//			month_ -= 12;
//		}
//		else {}
//		switch (month_) {
//		case 1:
//			if (day_ > 31) {
//				month_ += 1;
//				day_ -= 31;
//				break;
//			}
//			else { break; }
//
//		case 2:
//			if ((year_ % 4 == 0) && (year_ % 100 != 0) && (year_ % 400 == 0))
//				if (day_ > 29) {
//					month_ += 1;
//					day_ -= 29;
//					break;
//				}
//				else { break; }
//
//			else {
//				if (day_ > 28) {
//					month_ += 1;
//					day_ -= 28;
//					break;
//				}
//				else { break; }
//
//			}
//
//		case 3:
//			if (day_ > 31) {
//				month_ += 1;
//				day_ -= 31;
//				break;
//			}
//			else { break; }
//
//
//		case 4:
//			if (day_ > 30) {
//				month_ += 1;
//				day_ -= 30;
//				break;
//			}
//			else { break; }
//
//
//		case 5:
//			if (day_ > 31) {
//				month_ += 1;
//				day_ -= 31;
//				break;
//			}
//			else { break; }
//
//
//		case 6:
//			if (day_ > 30) {
//				month_ += 1;
//				day_ -= 30;
//				break;
//			}
//			else { break; }
//
//		case 7:
//			if (day_ > 31) {
//				month_ += 1;
//				day_ -= 31;
//				break;
//			}
//			else { break; }
//
//		case 8:
//			if (day_ > 31) {
//				month_ += 1;
//				day_ -= 31;
//				break;
//			}
//			else { break; }
//
//		case 9:
//			if (day_ > 30) {
//				month_ += 1;
//				day_ -= 30;
//				break;
//			}
//			else { break; }
//		case 10:
//			if (day_ > 31) {
//				month_ += 1;
//				day_ -= 31;
//				break;
//			}
//			else { break; }
//
//		case 11:
//			if (day_ > 30) {
//				month_ += 1;
//				day_ -= 30;
//				break;
//			}
//			else { break; }
//
//		case 12:
//			if (day_ > 31) {
//				month_ += 1;
//				day_ -= 31;
//				break;
//			}
//			else { break; }
//
//		}
//	}
//}
//
//void Date::AddMonth(int inc) {
//	month_ += inc;
//	while (month_ < 12) {
//		if (month_ > 12) {
//			year_ += 1;
//			month_ -= 12;
//		}
//		else {}
//	}
//}
//
//void Date::AddYear(int inc) {
//	year_ += inc;
//}
//
//void Date::ShowDate() {
//	cout << year_ << "년" << month_ << "월" << day_ << "일 입니다." << endl;
//}
//
//int main() {
//	Date day;
//	day.SetDate(2011, 3, 1);
//	day.ShowDate();
//
//	day.AddDay(30);
//	day.ShowDate();
//
//	day.AddDay(2000);
//	day.ShowDate();
//
//	day.SetDate(2012, 1, 31);  // 윤년
//	day.AddDay(29);
//	day.ShowDate();
//
//	day.SetDate(2012, 8, 4);
//	day.AddDay(2500);
//	day.ShowDate();
//	return 0;
//}