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
	cout << "����: " << height / 4 << " ����: " << weight / 4 << " ����: " << force / 4<<endl;
	
}
*/

void print2() {
	struct Robot s1 = { "�±Ǻ���", 18, 80, 3000 },
		s2 = { "��¡��", 17, 70, 2500 },
		s3 = { "��ĭ������", 20, 90, 3500 },
		s4 = { "�׷�������", 22, 100, 5000 };
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
	cout << "��� ����: " << hsum / 4 << "��չ���: " << wsum / 4 << "��� ����: " << fsum / 4 << endl;
}
void print() {
	struct Robot a[4];
	for (int i = 0; i < 4; i++) {
		cout << "�̸�: ";
		cin >> a[i].name;
		cout << "����: ";
		cin >> a[i].height;
		cout << "����: ";
		cin >> a[i].weight;
		cout << "����: ";
		cin >> a[i].force;
	}
	for (int j = 0; j < 4; j++) {
		cout << a[j].name << " " << a[j].height << " " << a[j].weight << " " << a[j].force << endl;
	}
	avg(a);
}
	
