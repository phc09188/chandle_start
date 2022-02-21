#pragma once
#include <stdio.h>
#include <iostream>

using namespace std;

class CAnimal
{
public:
	virtual char* GetSound() = 0;
};
class CPig : public CAnimal {
public:
	CPig() {
		GetSound();
	}
	char* GetSound() {
		strcpy(a, b);
		return a;
	}
	char a[20];
	char b[20] = "²Ü²Ü";
};
class CDog : public CAnimal {
public:
	CDog() {
		GetSound();
	}
	char* GetSound() {
		strcpy(d, e);
		return d;
	}
	char d[20];
	char e[20] = "¸Û¸Û";
};
void PrintSound(CPig* c) {
	cout << c->a << endl;
}
void PrintSound(CDog* c) {
	cout << c->d << endl;
}
void one() {
	CPig* p1 = new CPig;
	PrintSound(p1);

	CDog* p2 = new CDog;
	PrintSound(p2);
}
