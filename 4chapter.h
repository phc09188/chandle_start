#pragma once
#include<iostream>
#include<stdio.h>
using namespace std;
int one(int a) {
	if (a % 2 == 0) {
		cout << "¦��" << endl;
	}
	else {
		cout << "Ȧ��" << endl;
	}
	return 0;
}
void two() {
	int a;
	cout << "���� ������ �Է��ϼ���: ";
	cin >> a;
	switch (a) {
	case 10:
		cout << "A";
	case 9:
		cout << "B";
	case 8:
		cout << "B";
	case 7:
		cout << "C";
	case 6:
		cout << "C";
	case 5:
		cout << "C";
	case 4:
		cout << "D";
	case 3:
		cout << "D";
	case 2:
		cout << "D";
	case 1:
		cout << "D";
	case 0:
		cout << "F";
	}
}
void three() {
	int a = 1;
	int b = 0;
	do {
		b += a;
		a += 1;
	} while (a < 11);
	cout << b << endl;
}
void four() {
	int i, a;
	int j = 1;
	for (i = 1; i < 10; i++) {
		while (j < 10) {
			a = i * j;
			cout << i << " * " << j << "= " << a << endl;
			j += 1;
			
		}
		j = 1;
	}
}
void five() {
	for (int i = 1; i < 101; i++) {
		if (i % 2 == 1)
			continue;
		cout << i << endl;
	}
}
void six() {
	float a;
	cout << "���� ���� ���� ������ �Է��ϼ���." << endl;;
	cin >> a;
	if (a <= 4) {
		cout << "1��� �Դϴ�.";
	}
	else if (a > 4 && a <= 11) {
		cout << "2��� �Դϴ�.";
	}
	else if (a > 11 && a <= 23) {
		cout << "3��� �Դϴ�.";
	}
	else if (a > 23 && a <= 40) {
		cout << "4��� �Դϴ�.";
	}
	else if (a > 40 && a <= 60) {
		cout << "5��� �Դϴ�.";
	}
	else if (a > 60 && a <= 77) {
		cout << "6��� �Դϴ�.";
	}
	else if (a > 77 && a <= 89) {
		cout << "7��� �Դϴ�.";
	}
	else if (a > 89 && a <= 96) {
		cout << "8��� �Դϴ�.";
	}
	else if (a > 96 && a <= 100) {
		cout << "9��� �Դϴ�.";
	}
}
void sevenif() {
	int a;
	cout << "ǥ�� ����� �Է��ϼ���!" << endl;
	cin >> a;
	if (a == 1) {
		cout << "��� 2�� �Դϴ�.";
	}
	else if (a == 2) {
		cout << "��� 7.5�� �Դϴ�.";
	}
	else if (a == 3) {
		cout << "��� 17�� �Դϴ�.";
	}
	else if (a == 4) {
		cout << "��� 31.5�� �Դϴ�.";
	}
	else if (a == 5) {
		cout << "��� 50�� �Դϴ�.";
	}
	else if (a == 6) {
		cout << "��� 68.5�� �Դϴ�.";
	}
	else if (a == 7) {
		cout << "��� 84�� �Դϴ�.";
	}
	else if (a == 8) {
		cout << "��� 92.5�� �Դϴ�.";
	}
	else if (a == 9) {
		cout << "��� 98�� �Դϴ�.";
	}
}
void seven2() {
	int a;
	cout << "ǥ�� ����� �Է��ϼ���!" << endl;
	cin >> a;
	switch(a){
	case1:
		cout << "��� 2�� �Դϴ�.";
	case 2:
		cout << "��� 7.5�� �Դϴ�.";
	case 3:
		cout << "��� 17�� �Դϴ�.";
	case 4:
		cout << "��� 31.5�� �Դϴ�.";
	case 5:
		cout << "��� 50�� �Դϴ�.";
	case 6:
		cout << "��� 68.5�� �Դϴ�.";
	case 7:
		cout << "��� 84�� �Դϴ�.";
	case 8:
		cout << "��� 92.5�� �Դϴ�.";
	case 9:
		cout << "��� 98�� �Դϴ�.";


	}
}
/* 4-1
int main(void){
	int c;
	cin >> c;
	one(c);
}
*/