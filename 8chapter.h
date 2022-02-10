#pragma once
#include <iostream>

using namespace std;

void IncrementPrev(int& a	) {
	++a;
}
void IncrementPost(int& a) {
	++a;
}
void Absolute(int &a) {
	if (a < 0) {
		a = -a;
	}
	
}
void two() {
	int a = 3;
	int b = -5;

	Absolute(a);
	Absolute(b);
	cout << a << endl;
	cout << b << endl;

}
int Sum(int a = 0, int b = 0, int c = 0) {
	return a + b + c;
}
void three() {
	cout << Sum(1, 2, 3) << endl;
	cout << Sum(1, 2) << endl;
	cout << Sum(1) << endl;
	cout << Sum() << endl;
}
void Print(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}
void Reverse(int *arr, int size) {
	int c;
	for (int i = 0; i < size / 2; i++) {
		c = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = c;
	}
}
void Sort(int* arr, int size) {
	int c;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j--) {
			if (arr[j] > arr[j +1]) {
				c = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = c;
			}
		}
	}
}
void five() {
	const int size = 7;
	int arr[10] = { 1,2,3,4,5,6,7 };
	Print(arr, size);
}
void six() {
	const int size = 7;
	int arr[10] = { 1,2,3,4,5,6,7 };
	Reverse(arr, size);
	Print(arr, size);
}
void seven() {
	const int size = 7;
	int arr[10] = { 1,2,3,4,5,6,7 };
	Sort(arr, size);
	Print(arr, size);
}
