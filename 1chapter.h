#pragma once
#include <stdio.h>
#include<iostream>
#include <atlstr.h>

using namespace std;

void one() {
	int a;
	int result;
	cout << "��� ������ �Է��ϼ���." << endl;
	cin >> a;
	result = (2003 - a);
	if (result <= 0) {
		cout << "2002 ���Ͽ����� ��� �������� �ʾҽ��ϴ�." << endl;
	}
	else {
		cout << "2002 ���Ͽ����� ��� �ѱ� ���̴� " << result << "���Դϴ�.";
	}
}
void two() {
#ifdef _M_x64
	cout << "�� ���α׷��� x64 ���α׷��Դϴ�." << endl;
#else
	cout << "�� ���α׷��� x86 ���α׷��Դϴ�." << endl;
#endif

}
/*
int main() {
	one();
}
*/