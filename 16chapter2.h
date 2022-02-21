#pragma once
#include <stdio.h>
#include <iostream>

using namespace std;
enum CALC_Mode {
	NONE,
	ADD,
	MULTIPLY
};
class CCalc
{
public:
	double GetResult() {
		if (m_Mode == ADD) {
			return m_Op1 + m_Op2;
		}
		else if (m_Mode == MULTIPLY) {
			return m_Op1 * m_Op2;
		}

		return 0.0;
	}
	CALC_Mode m_Mode = NONE;
	int m_Op1 = 0;
	int m_Op2 = 0;
};
class CAdd : public CCalc {
public:
	CAdd(int Op1, int Op2) {
		m_Op1 = Op1;
		m_Op2 = Op2;
		m_Mode = ADD;
	}
};
class CMultipy : public CCalc {
public:
	CMultipy(int Op1, int Op2) {
		m_Op1 = Op1;
		m_Op2 = Op2;
		m_Mode = MULTIPLY;
	}
};
void two() {
	CCalc* p1 = new CAdd(1, 2);
	cout << p1->GetResult() << endl;

	CCalc* p2 = new CMultipy(3, 4);
	cout << p2->GetResult() << endl;
}