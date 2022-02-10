#pragma once
#include <iostream>

using namespace std;

struct Robot {
	char name[20];
	int height;
	int weight;
	int force;
};
/*
void avg(struct Robot *arg) {
	int height = 0, int weight = 0;
	int force = 0;
	for (int i = 0; i < 4; i++) {
		height += arg[i].height;
		weight += arg[i].weight;
		force += arg[i].force;

	}
	cout << "신장: " << height / 4 << " 무게: " << weight / 4 << " 마력: " << force / 4<<endl;
	
}
*/

void print2() {
	struct Robot s1 = { "태권브이", 18, 80, 3000 },
		s2 = { "마징가", 17, 70, 2500 },
		s3 = { "메칸더브이", 20, 90, 3500 },
		s4 = { "그랜다이져", 22, 100, 5000 };
	cout << s1.name << " " << s1.height << " " << s1.weight << " " << s1.force << endl;
	cout << s2.name << " " << s2.height << " " << s2.weight << " " << s2.force << endl;
	cout << s3.name << " " << s3.height << " " << s3.weight << " " << s3.force << endl;
	cout << s4.name << " " << s4.height << " " << s4.weight << " " << s4.force << endl;
}
void avg(Robot a[4]) {
	int hsum = 0, wsum = 0, fsum = 0;
	for (int i = 0; i < 4; i++) {
		hsum += a[i].height;
		wsum += a[i].weight;
		fsum += a[i].force;
	}
	cout << "평균 무게: " << hsum / 4 << "평균무게: " << wsum / 4 << "평균 마력: " << fsum / 4 << endl;
}
void print() {
	struct Robot a[4];
	for (int i = 0; i < 4; i++) {
		cout << "이름: ";
		cin >> a[i].name;
		cout << "신장: ";
		cin >> a[i].height;
		cout << "무게: ";
		cin >> a[i].weight;
		cout << "마력: ";
		cin >> a[i].force;
	}
	for (int j = 0; j < 4; j++) {
		cout << a[j].name << " " << a[j].height << " " << a[j].weight << " " << a[j].force << endl;
	}
	avg(a);
}
	
