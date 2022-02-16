#pragma warning(disable:4996)
#include <iostream>
#include <cstring>

using namespace std;
class Point {
private:
	int xpos, ypos;
public:
	Point(int x, int y) :xpos(x), ypos(y)
	{}
	void ShowPointInfo() const {
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};
class Circle {
private:
	int rad;
	Point center;
public:
	Circle(int x, int y, int r) :center(x, y) {
		rad = r;
	}
	void ShowCircleInfo() const {
		cout << "radius : " << rad << endl;
		center.ShowPointInfo();
	}
};
class Ring {
private:
	Circle rad1, rad2;
public:
	Ring(int x1, int y1, int r1, int x2, int y2, int r2) :rad1(x1, y1, r1), rad2(x2, y2, r2) {}
	void showRingInfo() {
		cout << "Inner Circle Info..." << endl;
		rad1.ShowCircleInfo();
		cout << "Outter Circle Info..." << endl;
		rad2.ShowCircleInfo();
	}
};
int main(void) {
	Ring ring(1, 1, 4, 2, 2, 9);
	ring.showRingInfo();
	return 0;
}