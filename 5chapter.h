#pragma once
#include <iostream>
#include <stdio.h>

using namespace std;
char Set(char *s) {
	*(s + 0) = 'C';
	*(s + 1) = '+';
	*(s + 2) = '+';
	*(s + 3) = NULL;
	return *s;
}
void one() {
	int a = 0;
	char* s = (char*)&a;

	Set(s);
	cout << (char*)&a << endl;
}
int Set(int **a, int b) {
	**a = b;
	return **a;
}
void two() {
	int a;
	int* p = &a;
	int** pp = &p;

	Set(pp, 3);
	cout << a << endl;
}
int Increment(int &a) {
	int* p = &a;
	cout << *p << endl;
	*p += 1;
	cout << *p << endl;
	a = *p;
	return a;
}
void three() {
	int a = 2;
	Increment(a);
	cout << a << endl;
}
void* MyMemset(void* dest, int c, size_t count) {
	int* p = (int*)dest;
	*p = c;
	return dest;
	// count를 사용하는 방법은 찾지 못함.
}
void* MyMemset2(void* dest, int c, size_t count) {
	char* temp = (char*) dest;
	for (int i = 0; i < count; i++) {
		*(temp + i) = c;
	}
	return dest;
}
void four() {
	int a;
	MyMemset2(&a, -1, 4);
	cout << a << endl;
}