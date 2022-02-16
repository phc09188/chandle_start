#pragma once
#include <iostream>
#include <stdio.h>

using namespace std;
class CInt {
public:
	int m_Value = 0;
	CInt() {}
	CInt(int arg) {
		m_Value = arg;
	}
};
CInt operator + (const CInt& arg1, int arg2) {
	CInt t;
	t.m_Value = arg1.m_Value + arg2;
	return t;
}
CInt operator + (const CInt& arg1, const CInt& arg2) {
	CInt t;
	t.m_Value = arg1.m_Value + arg2.m_Value;
	return t;
}
CInt operator + (int arg1, const CInt& arg2) {
	CInt t;
	t.m_Value = arg1 + arg2.m_Value;
	return t;
}

void one() {
	CInt i1 = 1;
	CInt i2 = i1 + 1;
	CInt i3 = i1 + i2;

	cout << i1.m_Value << endl;
	cout << i2.m_Value << endl;
	cout << i3.m_Value << endl;
}
void two() {
	CInt i1 = 1;
	CInt i2 = 1 + i1;
	
	cout << i1.m_Value << endl;
	cout << i2.m_Value << endl;
}
class CInt2 {
public:
	int m_Value = 0;
	CInt2() {}
	CInt2(int i) {
		m_Value = i;
		
	}
	CInt2& operator ++() {
		m_Value++;
		return *this;
	}
	const CInt2& operator ++ (int) {
		CInt2 t = *this;
		m_Value++;
		return t;
	}
};
void three() {
	CInt2 i = 1;
	cout << (i++).m_Value << endl;
	++i = 2;
	cout << (++i).m_Value << endl;
}
class CSigma {
public:
	int sum = 0;
	int operator () (int a){
		
		for (int i = 1; i < a+1; i++) {
			sum += i;
		}
		return sum;
	}
};
void four() {
	CSigma func;
	cout << func(10) << endl;
}