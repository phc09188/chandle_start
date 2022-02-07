#include <iostream>
#include <cstring>
#include "Printer.h"
using namespace std;

int main(void) {
	Printer pnt;
	pnt.SetString((char*) "Hello world!");
	pnt.ShowString();
	
	pnt.SetString((char*)"I love C++");
	pnt.ShowString();
	return 0;
}

