#pragma once
#include <iostream>
#include <stdint.h>
#include <stdlib.h>
#include <typeinfo>

using namespace std;

class CIntToStr {
private:
	int i;
public:
	CIntToStr(int i) {
		m_str = new char[20];
		m_str = itoa(i, m_str, 10);
	}
	char* m_str;
};
void one() {
	CIntToStr s(1);
	cout << s.m_str << endl;
}
class CPerson1 {
public:
	char* m_Name;
	int m_ID;
public:
	CPerson1(char* m_name1, int m_ID1) {
		m_Name = new char[strlen(m_name1) + 1];
		strcpy(m_Name, m_name1);
		m_ID = m_ID1;
	}
	CPerson1(const CPerson1& obj) {
		char* a = strcat(obj.m_Name, "Copy");
		m_Name = a;
		m_ID = -1;
	}
};
void two() {
	CPerson1 p1("Bill", 1);

	cout << p1.m_Name << " " << p1.m_ID << endl;
	CPerson1 p2 = p1;
	cout << p2.m_Name << " " << p2.m_ID << endl;
}
class CParent {
public:
	char m_Name[16] = { 0 };
	CParent() {
	}

};
class CPerson : public CParent {
public:
	char m_Name[16] = { 0 };
	CPerson(const char* ParentName, const char* Name)
	{
		strcat(CParent::m_Name, ParentName);
		strcat(m_Name, Name);
	}
	CPerson(const CPerson& obj) {
		strcat(CParent::m_Name, "À¯ÀüÀÚ°øÇÐ");
		strcat(m_Name, obj.m_Name);
		strcat(m_Name, "Copy");
	}

};
void three() {
	CPerson p1("±¤°³Åä´ë¿Õ", "Àå¼ö¿Õ");
	CPerson p2 = p1;

	cout << p1.CParent::m_Name << "-" << p1.m_Name << endl;
	cout << p2.CParent::m_Name << "-" << p2.m_Name << endl;
}