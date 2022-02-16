#include <iostream>

using namespace std;

namespace COMP_POS {
	enum { CLERK, SENIOR, ASSIST, MANAGER };
	void ShowPositionInfo(int pos) {
		switch (pos)
		{
		case CLERK:
			cout << "���" << endl;
			break;
		case SENIOR:
			cout << "����" << endl;
			break;
		case ASSIST:
			cout << "�븮" << endl;
			break;
		case MANAGER:
			cout << "����" << endl;
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
		cout << "�̸� : " << name << endl;
		cout << "ȸ�� : " << company << endl;
		cout << "��ȭ��ȣ : " << number << endl;
		cout << "���� : "; COMP_POS::ShowPositionInfo(position);
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