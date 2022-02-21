#pragma once
#pragma warning(disable:4996)
#include <iostream>
#include <stdio.h>

using namespace std;
class CTest {
	friend CTest operator +(int a, const CTest& b);
public:
	CTest(int arg) {
		m_Value = arg;
	}
	int result() {
		return m_Value;
	}
private:
	int m_Value = 0;
};
CTest operator + (int a, const CTest& b) {
	CTest t(0);
	t.m_Value = a + b.m_Value;
	return t;
}
void one() {
	CTest t(2);
	CTest s = 1 + t;
	cout << s.result() << endl;
}
class CPerson
{
public:
	void Set(char* name, int age, int gender) {
		strcat(m_Name, name);
		m_Age = age;
		m_Gender = gender;
	}

	char* GetName() {
		return m_Name;
	}
	int GetAge() {
		return m_Age;
	}
	int GetGender() {
		return m_Gender;
	}
private:
	char m_Name[16] = { 0 };
	int m_Age = 0;
	int m_Gender = 0;
};
class CStudent : CPerson {
public:
	void Set(char* name, int age, int gender, int id1, char* major1) {
		CPerson::Set(name, age, gender);
		id = id1;
		strcat(major, major1);
	}
	void print() {
		cout << "이름: " << GetName()<< endl;
		cout << "나이: " << GetAge()<< endl;
		cout << "성별: ";
		if (GetGender() == 1) {
			cout << "남성" << endl;
		}
		else if (GetGender() == 2) {
			cout << "여성" << endl;
		}
		cout << "ID: " << id << endl;
		cout << "전공: " << major << endl;
	}

private:
	int id;
	char major[20] = {0};
};
void two(){
	CStudent s1;
	s1.Set("쇠돌이", 22, 1, 1000, "로봇 조종");
	s1.print();

	CStudent s2;
	s2.Set("심청이", 18, 2, 1001, "왕비");
	s2.print();
}