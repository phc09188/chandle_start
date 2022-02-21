#pragma once
#include <iostream>
#include <stdio.h>

using namespace std;

class CTestB {
public:
	int b = 1;
};
class CTestA : public CTestB{
public:
	int a = 1;
};

void one()
{
	CTestA a;
	CTestB b1 = a;
	CTestB b2 = (CTestB)a;
	CTestB b3 = CTestB(a);
	CTestB b4 = static_cast<CTestB>(a);
	
}
class CTime {
public:
	int h;
	int m;
	int s;
	CTime(int hour, int minute, int second) {
		h = hour;
		m = minute;
		s = second;
	}
	operator int() {
		return h * 3600 + m * 60 + s;
	}
	

};
void two() {
	CTime t1(0, 1, 40);
	CTime t2(23, 59, 59);
	cout << t1 << endl;
	cout << t2 << endl;
}
//3번 함수 선언 어떻게 해야 할지 아직 해결 못 함
/*
class CParent {
public:
	virtual ~CParent() {};
	void CheckResult(CParent ) {
	}
};
class CChild : public CParent {
public:
	virtual ~CChild() {};
	
};
void three() {
	CParent p;
	CParent* pP2 = &p;
	CChild* c = dynamic_cast<CChild*>(pP2);
	CheckResult((CParent*)&p);
	CheckResult((CParent*)&c);
}
*/
