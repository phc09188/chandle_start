#pragma once
#include<iostream>
#include<stdio.h>
using namespace std;
int one(int a) {
	if (a % 2 == 0) {
		cout << "짝수" << endl;
	}
	else {
		cout << "홀수" << endl;
	}
	return 0;
}
void two() {
	int a;
	cout << "맞은 개수를 입력하세요: ";
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
	cout << "수능 성적 상위 비율을 입력하세요." << endl;;
	cin >> a;
	if (a <= 4) {
		cout << "1등급 입니다.";
	}
	else if (a > 4 && a <= 11) {
		cout << "2등급 입니다.";
	}
	else if (a > 11 && a <= 23) {
		cout << "3등급 입니다.";
	}
	else if (a > 23 && a <= 40) {
		cout << "4등급 입니다.";
	}
	else if (a > 40 && a <= 60) {
		cout << "5등급 입니다.";
	}
	else if (a > 60 && a <= 77) {
		cout << "6등급 입니다.";
	}
	else if (a > 77 && a <= 89) {
		cout << "7등급 입니다.";
	}
	else if (a > 89 && a <= 96) {
		cout << "8등급 입니다.";
	}
	else if (a > 96 && a <= 100) {
		cout << "9등급 입니다.";
	}
}
void sevenif() {
	int a;
	cout << "표준 등급을 입력하세요!" << endl;
	cin >> a;
	if (a == 1) {
		cout << "평균 2등 입니다.";
	}
	else if (a == 2) {
		cout << "평균 7.5등 입니다.";
	}
	else if (a == 3) {
		cout << "평균 17등 입니다.";
	}
	else if (a == 4) {
		cout << "평균 31.5등 입니다.";
	}
	else if (a == 5) {
		cout << "평균 50등 입니다.";
	}
	else if (a == 6) {
		cout << "평균 68.5등 입니다.";
	}
	else if (a == 7) {
		cout << "평균 84등 입니다.";
	}
	else if (a == 8) {
		cout << "평균 92.5등 입니다.";
	}
	else if (a == 9) {
		cout << "평균 98등 입니다.";
	}
}
void seven2() {
	int a;
	cout << "표준 등급을 입력하세요!" << endl;
	cin >> a;
	switch(a){
	case1:
		cout << "평균 2등 입니다.";
	case 2:
		cout << "평균 7.5등 입니다.";
	case 3:
		cout << "평균 17등 입니다.";
	case 4:
		cout << "평균 31.5등 입니다.";
	case 5:
		cout << "평균 50등 입니다.";
	case 6:
		cout << "평균 68.5등 입니다.";
	case 7:
		cout << "평균 84등 입니다.";
	case 8:
		cout << "평균 92.5등 입니다.";
	case 9:
		cout << "평균 98등 입니다.";


	}
}
/* 4-1
int main(void){
	int c;
	cin >> c;
	one(c);
}
*/