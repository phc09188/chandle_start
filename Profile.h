#include <iostream>

using namespace std;

namespace COMP_POS {
	enum { CLERK, SENIOR, ASSIST, MANAGER };
	void ShowPositionInfo(int pos) {
		switch (pos)
		{
		case CLERK:
			cout << "사원" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		case ASSIST:
			cout << "대리" << endl;
			break;
		case MANAGER:
			cout << "과장" << endl;
			break;
		}
	}
}
class NameCard {
private:
	char* name;
	char* company;
	char* number;
	int position;
public:
	NameCard(char* name1, char* company1, char* number1, int pos) : position(pos)
	{
		name = new char[strlen(name1) + 1];
		company = new char[strlen(company1) + 1];
		number = new char[strlen(number1) + 1];
		strcpy(name, name1);
		strcpy(company, company1);
		strcpy(number, number1);
	}
	void ShowNameCardInfo() {
		cout << "이름 : " << name << endl;
		cout << "회사 : " << company << endl;
		cout << "전화번호 : " << number << endl;
		cout << "직급 : "; COMP_POS::ShowPositionInfo(position);
	}

};


int main(void) {
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	return 0;
}