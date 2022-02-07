#pragma once
#include <stdio.h>
#include<iostream>
#include <atlstr.h>

using namespace std;

void one() {
	int a;
	int result;
	cout << "출생 연도를 입력하세요." << endl;
	cin >> a;
	result = (2003 - a);
	if (result <= 0) {
		cout << "2002 한일월드컵 당시 존재하지 않았습니다." << endl;
	}
	else {
		cout << "2002 한일월드컵 당시 한국 나이는 " << result << "세입니다.";
	}
}
void two() {
#ifdef _M_x64
	cout << "이 프로그램은 x64 프로그램입니다." << endl;
#else
	cout << "이 프로그램은 x86 프로그램입니다." << endl;
#endif

}
/*
int main() {
	one();
}
*/