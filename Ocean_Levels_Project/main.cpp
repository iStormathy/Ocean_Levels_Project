// This program calculates the level of the ocean after
// five years, seven years, and ten years, assuming the
// ocean raises at a rate of 1.5 millimeters per year
#include <iostream>
using namespace std;

int main() {
	double lvlC = 1.5; // The distance (in millimeters) the ocean rises in a year
	int year5 = lvlC * 5;
	int year7 = lvlC * 7;
	int year10 = lvlC * 10;
	cout << "In five years, the ocean will have risen " << year5 << " millimeters.\n";
	cout << "In seven years, the ocean will have risen " << year7 << " millimeters.\n";
	cout << "In ten years, the ocean will have risen " << year10 << " millimeters.\n";
	return 0;
}