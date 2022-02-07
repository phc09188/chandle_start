#pragma once
#include <stdio.h>
#include <iostream>

using namespace std;

int detector(int a) {
	if (a % 2 == 0) {
		a = 0;
	}
	else {
		a = 1;
	}
	return a ? 1 : 0;
}
void detector2(int b){
	if (b == 0) {
		cout << "짝수";
	}
	else {
		cout << "홀수";
	}
}
void Swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int NOT(int a) {
	if (a !=0) {
		a = 0;
	}
	else {
		a = 1;
	}
	return a ? 1 : 0;
}
int four1(int a) {
	if (a >= 10000) {
		cout << "10000 보다 작아야 합니다."<<endl;
		cin >> a;
	}
	else {
		return a;
	}
}
int four2(int a) {
	a > 0 && a < 10 ? a = 1 : a = a;
	a >= 10 && a < 100 ? a = 2 : a = a;
	a >= 100 && a < 1000 ? a = 3 : a = a;
	a >= 1000 ? a = 4 : a = a;
	return a;
}
/* 3-1
int main(void) {
	int a;
	int result;
	cin >> a;
	result = detector(a);
	detector2(result);
}
*/
/* 3-2
void main() {
	int a = 3;
	int b = 7;
	Swap(&a, &b);
}

*/
/*
int main() {
	cout << NOT(0) << endl;
	cout << NOT(1) << endl;
}
*/
/*
int main() {
	int a;
	int result;
	cin >> a;
	result = four1(a);
	four2(result);
	cout << four2(result);
}

*/