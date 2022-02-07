#pragma once
#include <iostream>
#include<stdio.h>

using namespace std;
void one() {
	int result;
	char c1 = 'C';
	char c2 = 'K';
	result = static_cast<int>(c2) - static_cast<int>(c1);
	cout << "C와 K사이의 알파벳 개수는 " << result << "입니다.";
}
void two() {
	char name[20];
	int i, a;
	for (i = 0; i < 20; i++) {
		cin >> name[i];
		if (name[i] == '!') {
			a = i;
			i = 20;
		}
	}
	for (int j = 0; j < a; j++) {
		cout << name[j];
	}
}
double Divide(int a, double b) {
	double c, d;
	c = a / b;
	return c;
}
void three() {
	int a;
	double b;
	cout << "분자를 입력하세요." << endl;
	cin >> a;
	cout << "분모를 입력하세요" << endl;
	cin >> b;

	auto r = Divide(a, b);
	cout << r << endl;
}
char CheckResult(char a) {
	int b;
	b = static_cast<int>(a);
	if (b >= 65 && b <= 90) {
		cout << "대문자 입니다.";
	}
	else if (b >= 97 && b <= 122) {
		cout << "소문자 입니다.";
	}
	else {
		cout << "알파벳이 아닙니다.";
	}
	return a;
}
void four() {
	char c;
	cout << "알파벳 하나를 입력하세요." << endl;
	cin >> c;

	CheckResult(c);
}