#pragma once
#include <iostream>
#include<stdio.h>

using namespace std;
void one() {
	int result;
	char c1 = 'C';
	char c2 = 'K';
	result = static_cast<int>(c2) - static_cast<int>(c1);
	cout << "C�� K������ ���ĺ� ������ " << result << "�Դϴ�.";
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
	cout << "���ڸ� �Է��ϼ���." << endl;
	cin >> a;
	cout << "�и� �Է��ϼ���" << endl;
	cin >> b;

	auto r = Divide(a, b);
	cout << r << endl;
}
char CheckResult(char a) {
	int b;
	b = static_cast<int>(a);
	if (b >= 65 && b <= 90) {
		cout << "�빮�� �Դϴ�.";
	}
	else if (b >= 97 && b <= 122) {
		cout << "�ҹ��� �Դϴ�.";
	}
	else {
		cout << "���ĺ��� �ƴմϴ�.";
	}
	return a;
}
void four() {
	char c;
	cout << "���ĺ� �ϳ��� �Է��ϼ���." << endl;
	cin >> c;

	CheckResult(c);
}