#pragma once
#include <iostream>
#include <stdio.h>
#include <thread>

using namespace std;
//1번 문제는 정답과 같은 결과가 나오지만, 중간에 heap construction detected 라는 에러가 뜬다. heap영역을 제대로 삭제를 못 한게 아닌가 싶다.
class CTest {
public:
	static int s_count;

	CTest(){}
	CTest(CTest& a) {
		s_count += 1;
	}
	static void* operator new(size_t size) {
		void* p = malloc(size);
		*(int*)p = 7;
		s_count += 1;
		return p;
	}
	void operator delete(void* const block) {
		s_count -= 1;
		free(block);
	}
};
int CTest::s_count = 1;
void one() {
	CTest t1;
	CTest t2 = t1;
	CTest* p = new CTest;
	cout << CTest::s_count << endl;
	delete p;
	cout << CTest::s_count << endl;
}
class CThreadArg {
public:
	int m_Sum = 0;
	int init;
	int end;
	CThreadArg(int a, int b) {
		init = a;
		end = b;
	}
};
int Sum(CThreadArg* arg) {
	for(int i = arg->init; i<(arg->end+1); i++)
	{
		arg->m_Sum += i;
	}
	return arg->m_Sum;
}
void two() {
	CThreadArg arg1(1, 50);
	CThreadArg arg2(51, 100);
	
	std::thread T1(Sum, &arg1);
	std::thread T2(Sum, &arg2);

	T1.join();
	T2.join();
	
	cout << arg1.m_Sum + arg2.m_Sum << endl;
}