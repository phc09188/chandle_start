#pragma once
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class cracker {
private:
	int price;
	int calories;
public:
	void inter(){
		cout << "�ٻ���� ���ݰ� ������ �Է��ϼ��� : ";
		cin >> price >> calories;
		cout << "�ٻ���� ����: " << price <<"��"<< endl;
		cout << "�ٻ���� ����: " << calories <<"kcal"<< endl;
	}
};
void one() {
	cracker s;
	s.inter();
}
class student {
private:
	int num;
	char name[20];
	int score[5];
	double avg;
public:
	void inter() {
		cout << "�й�: ";
		cin >> num;
		cout << "�̸�: ";
		cin >> name;
		cout << "����: ";
		cin >> score[0] >> score[1] >> score[2] >> score[3] >> score[4];
	}
	void print_avg() {
		int sum = 0;
		double avg;
		for (int i = 0; i < 5; i++) {
			sum += score[i];
		}
		avg = sum / 5.0;
		cout << "���: " << avg;
	}
};
void two() {
	student s;
	s.inter();
	s.print_avg();
}
class marriage {
private:
	char name[20];
	int age;
	char sex[10];
	double height;
public:
	marriage()
		: name("�浿"), age(20), sex("man"), height(185) {};
	void Print() {
		cout << name << " " << age << " " << sex << " " << height << endl;
	}
};
void three() {
	marriage m1;
	marriage* mp = &m1;
	mp->Print();

}
/*
class train {
public:
	int seats;
	train* next;
};
void four() {
	train* head = NULL, * tail;
	int i;
	for (i = 0; i < 5; i++) {
		if (head == NULL) {
			head = tail = (train*)malloc(sizeof(train));
		}
		else
		{
			tail->next = (train*)malloc(sizeof(train));
			tail = tail->next;
		}
	}
}
*/
class Password {
private:
	int num;
	char phone[20];
public:
	void enter() {
		int i;
		cout << "[ ��. ��. ��. �� 1]" << endl;
		cout << "1. ���� 4�ڸ�" << endl;
		cout << "2. ��ȭ��ȣ" << endl;
		cout << "���ϴ� ��й�ȣ �Է¹�� :";
		cin >> i;
		if (i == 1) {
			cout << "��й�ȣ �Է�: ";
			cin >> num;
			cout << "�Է��� ��й�ȣ : " << num;
		}
		else if (i == 2) {
			cout << "��ȭ��ȣ �Է�: ";
			cin >> phone;
			cout << "�Է��� ��й�ȣ : " << phone;
		}
		else {
			cout << "1�� Ȥ�� 2���� �����ּ���.";
		}
	}
};
void five() {
	Password p;
	p.enter();
}

class money_box {
private:
	int w500;
	int w100;
	int w50;
	int w10;
public:
	money_box()
		: w500(0), w100(0), w50(0), w10(0) {};
	void save() {
		int a = 0;
		float price, num;
		while (1) {
			cout << "������ �ݾװ� ���� : ";
			cin >> price >> num;
			if (price == 500) {
				w500 += num;
			}
			else if (price == 100) {`
				w100 += num;
			}
			else if (price == 50) {
				w50 += num;
			}
			else if (price == 10) {
				w10 += num;
			}
			else if (price == -1){
				break;
			}
		}
		cout << "����" << endl;
	}
	void total() {
		int sum = w500 * 500 + w100 * 100 + w50 * 50 + w10 * 10;
		cout << "�� ���ݾ� : " << sum << "��" << endl;
	}
};
void seven() {
	money_box s;
	s.save();
	s.total();

}
class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersonInfo() const {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}
	~Person() {
		delete[]name;
	}
};
int charname(void) {
	Person man("Park Hae Chan", 24);
	man.ShowPersonInfo();

}