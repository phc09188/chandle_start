#pragma once
#include <stdio.h>
#include <iostream>

using namespace std;
class CFighter {
public:
	virtual void ShowName() {

	}
};
class CF22 : public CFighter {
public:
	virtual void ShowName() {
		cout << "F22 Raptor" << endl;
	}
};
class CF35 : public CFighter {
public:
	virtual void ShowName() {
		cout << "F35 Lightning 11" << endl;
	}
};
void three() {
	CFighter* pF22 = new CF22;
	CFighter* pF35 = new CF35;

	pF22->ShowName();
	pF35->ShowName();
	delete pF22;
	delete pF35;
}

