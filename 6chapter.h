#pragma once
#include <iostream>

using namespace std;
int sum(int arr[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}
void limit(int arr[], int n) {
	int b = 0 , c = 100;
	for (int i = 0; i < n; i++) {
		if (b < arr[i]) {
			b = arr[i];
		}
		if (c > arr[i]) {
			c = arr[i];
		}
	}
	cout << "최댓값: "<<b << endl;
	cout << "최솟값: " << c << endl;

}
void rev(int arr[], int n) {
	int c;
	for (int i = 0; i < n/2; i++) {
		c = arr[i];
		arr[i] = arr[n - i-1];
		arr[n - i-1] = c;
	}
	for (int j = 0; j < n; j++) {
		cout << arr[j] << " ";
	}
	cout << "\n";
}
void high(int arr[], int n) {
	int c;
	for (int i = 0; i < n-1; i++) {
		for (int j = n; j >i; j--) {
			if (arr[i] < arr[j]) {
				c = arr[j];
				arr[j] = arr[i];
				arr[i] = c;
			}
		}
	}
	for (int d = 0; d < n; d++) {
		cout << arr[d] << " ";
	}
}
void one() {
	int arr[] = { 1, 6, 9, 7, 3, 2, 0, 4, 8, 5 };
	cout << sizeof(arr)/sizeof(arr[0]) << endl;
	int n = sizeof(arr) / sizeof(arr[0]);
	int a = sum(arr,n);
	cout << a << endl;
	limit(arr,n);
	rev(arr,n);
	high(arr, n);
}
void two() {
	int arr[4][3] = { {100,100,50},{90,70,80},{70,80,90},{80,100,90} };
	int (*a)[3] = arr;
	int sum = 0;
	double sum2 = 0;
	char name[3][10];
	for (int i = 0; i < 3; i++) {
		cout << "과목을 입력해 주세요: ";
		cin >> name[i];
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			sum += a[i][j];
		}
		cout << i << "번 학생 총점: " << sum << endl;
		sum = 0;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			sum2 += a[j][i];
		}
		cout << name[i] << "평균은 " << sum2 / 4 << "입니다" << endl;
		sum2 = 0;
	}
}
