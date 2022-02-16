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
		cout << "바사삭의 가격과 열량을 입력하세요 : ";
		cin >> price >> calories;
		cout << "바사삭의 가격: " << price <<"원"<< endl;
		cout << "바사삭의 열량: " << calories <<"kcal"<< endl;
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
		cout << "학번: ";
		cin >> num;
		cout << "이름: ";
		cin >> name;
		cout << "점수: ";
		cin >> score[0] >> score[1] >> score[2] >> score[3] >> score[4];
	}
	void print_avg() {
		int sum = 0;
		double avg;
		for (int i = 0; i < 5; i++) {
			sum += score[i];
		}
		avg = sum / 5.0;
		cout << "평균: " << avg;
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
		: name("길동"), age(20), sex("man"), height(185) {};
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
		cout << "[ 실. 행. 결. 과 1]" << endl;
		cout << "1. 숫자 4자리" << endl;
		cout << "2. 전화번호" << endl;
		cout << "원하는 비밀번호 입력방식 :";
		cin >> i;
		if (i == 1) {
			cout << "비밀번호 입력: ";
			cin >> num;
			cout << "입력한 비밀번호 : " << num;
		}
		else if (i == 2) {
			cout << "전화번호 입력: ";
			cin >> phone;
			cout << "입력한 비밀번호 : " << phone;
		}
		else {
			cout << "1번 혹은 2번을 눌러주세요.";
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
			cout << "동전의 금액과 개수 : ";
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
		cout << "종료" << endl;
	}
	void total() {
		int sum = w500 * 500 + w100 * 100 + w50 * 50 + w10 * 10;
		cout << "총 저금액 : " << sum << "원" << endl;
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
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
	~Person() {
		delete[]name;
	}
};
int charname(void) {
	Person man("Park Hae Chan", 24);
	man.ShowPersonInfo();

}