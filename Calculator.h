#pragma once
#include <opencv2/opencv.hpp>
#include <iostream>
#include <stdio.h>
using namespace std;

class Calculator {
	
public:
	int a = 0, b = 0, c = 0, d = 0;
	double Add(double xpos, double ypos);
	double Min(double xpos, double ypos);
	double Div(double xpos, double ypos);
	void ShowOpCount();
	void Init();
	
};
void Calculator:: Init() {
	int a = 0, b = 0, c = 0, d = 0;
}
inline double Calculator::Add(double xpos, double ypos) {
	a += 1;
	return xpos + ypos;
}
inline double Calculator::Min(double xpos, double ypos) {
	b += 1;
	return xpos - ypos;
}
inline double Calculator::Div(double xpos, double ypos) {
	d += 1;
	return xpos / ypos;
}
void Calculator::ShowOpCount() {
	cout << "µ¡¼À: " << a << "»¬¼À: " << b << "°ö¼À: " << c << "³ª´°¼À: " << d;
}