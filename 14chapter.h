#pragma once
#include <iostream>
#include <stdio.h>

using namespace std;

int* MyCalloc(int a, size_t size) {
	void* p = malloc(size);
	memset(p, 0, size*a);
	int* b = (int*)p;
	return b;
}
void one() {
	int* p = (int*)calloc(1, sizeof(int));
	*p = 1;
	cout << *p << endl;
	free(p);
	int* p1 = MyCalloc(1, sizeof(int));
	*p1 = 2;
	cout << *p1 << endl;

}

void two() {
	int* p = new int;
		* p = 1;
	cout << *p << endl;

	delete(p);
}
void three() {
	int count = 100;
	int* p = new int[count];

	for (int i = 0; i < count; i++) {
		p[i] = i;
		cout << p[i] << endl;
	}
	delete[] p;
}
/* 아직 방법을 모르겠음 min max 둘다 return p의 값으로 바뀜
class CCalc
{
public:
	friend static void* operator new(size_t size);
	static void* operator new(size_t size) {
		void* p = malloc(size);
		*(int*)p = 0;
		
		return p;
		

	}
	CCalc()
	{
		cout << m_Min << endl;
		cout << m_Max << endl;
	}
	CCalc* a;
	
	int m_Min;
	int m_Max;

};
void four() {
	CCalc* p = new CCalc;
	cout << &(p->m_Max) << endl;
	cout << &(p->m_Min) << endl;
	delete p;
}
*/
