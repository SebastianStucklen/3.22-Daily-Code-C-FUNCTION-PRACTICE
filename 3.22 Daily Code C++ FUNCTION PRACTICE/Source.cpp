#include<iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

float Add5Divide2(int parameter);
bool PointCollision(int x1, int x2, int y1, int y2);
void ToyGrabber();

int main() {
	srand(time(0));
	cout << Add5Divide2(6) << endl;
	if (PointCollision(1, 1, 2, 2) == true)
		cout << "collision" << endl;
	if (PointCollision(1, 2, 5, 5) == false)
		cout << "no collision" << endl;
	ToyGrabber();
	ToyGrabber();
	ToyGrabber();
	ToyGrabber();
	ToyGrabber();
	ToyGrabber();
	ToyGrabber();
}

float Add5Divide2(int parameter) {

	return (parameter + 5) / 2;
}
bool PointCollision(int x1, int x2, int y1, int y2) {
	if (x1 == x2 && y1 == y2)
		return true;
	if (x1 != x2 or y1 != y2)
		return false;

}
void ToyGrabber() {
	int num = rand() % 100; // 0 - 99
	if (num < 20) {
		cout << "you got a ball!" << endl;
	}
	else if (num < 50) {
		cout << "you got a fidget spinner!" << endl;
	}
	else if (num <= 100) {
		cout << "You got a hotwheels car!" << endl;

	}
}