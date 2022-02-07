#pragma once
#include <iostream>
#include <stdio.h>

using namespace std;
char Set(char *s) {
	char b = 'C++';
	*s = b;
}
void one() {
	int a = 0;
	char* s = (char*)&a;

	Set(s);
	cout << (char*)&a << endl;
}
