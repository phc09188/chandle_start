#pragma once
#include <iostream>

using namespace std;
using std::ostream;


class Robot {
private:	
	char name[20];
	int height;
	int weight;
	int force;
public:
	void In() {
		cout << "�κ��� ������ �Է��Ͻÿ�." << endl;
		cout << "�̸�: ";
		cin >> name;
		cout << "����: ";
		cin >> height;
		cout << "����: ";
		cin >> weight;
		cout << "����: ";
		cin >> force;
	}
	void Print() {
		cout << name << ", ����: " << height << ", ����: " << weight << ", ����: " << force << endl;

	}

};
void One() {
	Robot s1, s2, s3, s4;
	s1.In(), s2.In(), s3.In(), s4.In();
	s1.Print(), s2.Print(), s3.Print(), s4.Print();
}
class CTest
{
public:
	static int s_Value;
};

int CTest::s_Value = 2;

void Two()
{
	CTest t1;
	t1.s_Value = 1;

	cout << "t1: " << t1.s_Value << endl;
}
class Ctime
{
private:
	int t;
	int hour;
	int minute;
	int Elapsed;
public:
	Ctime()
	: t(t), hour(0), minute(0), Elapsed(0) {};
	int h = 3600, m = 60;
	void SetElapset(int Elapsed) {
		if (Elapsed >= h) {
			hour += Elapsed / h;
			minute = (Elapsed - hour * h) / m;
			t = Elapsed % m;
		}
		else {
			minute = Elapsed / m;
			t = Elapsed % m;
		}
	}
	void PrintTime() {
		cout << "���� �ð���" << endl;
		cout << hour << "�� " << minute << "�� " << t << "�� �Դϴ�." << endl;
	}
};