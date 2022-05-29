//#include<iostream>
//#include<cstring>
//using namespace std;
//
//namespace COMP_POS {
//	enum{CLERK,SENIOR,ASSIST,MANAGER};
//
//	void AssignJobTask(int jobname) {
//		switch (jobname) {
//		case CLERK:
//			cout << "사원" << endl;
//			break;
//		case SENIOR:
//			cout << "주임" << endl;
//			break;
//		case ASSIST:
//			cout << "대리" << endl;
//			break;
//		case MANAGER:
//			cout << "과장" << endl;
//			break;
//		}
//	}
//}
//
//class NameCard {
//private:
//	char* name;
//	char* company_name;
//	char* phone_number;
//	int JobName;
//public:
//	NameCard( char* name_, char* company_name_, char* phone_number_, int JobName_)
//	{
//		name = new char[strlen(name_)+1];
//		company_name = new char[strlen(company_name_)];
//		phone_number = new char[strlen(phone_number_)];
//		JobName = JobName_;
//		strcpy(name, name_);
//		strcpy(company_name, company_name_);
//		strcpy(phone_number, phone_number_);
//	};
//	void ShowNameCardInfo()
//	{
//		cout << "이름: " << name << endl;
//		cout << "회사: " << company_name << endl;
//		cout << "전화번호: " << phone_number << endl;
//		cout << "직급: "; COMP_POS::AssignJobTask(JobName);
//		cout << endl;
//	}
//};
//
//int main() {
//	NameCard manClerk("Lee", "ABCEng","010 - 1111 - 2222",COMP_POS::CLERK);
//	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
//	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
//	manClerk.ShowNameCardInfo();
//	manSENIOR.ShowNameCardInfo();
//	manAssist.ShowNameCardInfo();
//}