#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
using namespace std;
class CLength {
public:
	char len[20] = {};
	CLength(const char* a) {
		strcpy(len, a);
	}
	int GetLength() {
		int length = strlen(len) + 1;
		return length;
	}
	
};
void main() {
	CLength l = "abc";
	cout << l.GetLength() << endl;
}