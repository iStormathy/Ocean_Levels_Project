// This program calculates the level of the ocean after
// five years, seven years, and ten years, assuming the
// ocean raises at a rate of 1.5 millimeters per year
#include <iostream>
using namespace std;

int main() {
	double lvlC = 1.5; // The distance (in millimeters) the ocean rises in a year
	double year5 = lvlC * 5;
	double year7 = lvlC * 7;
	double year10 = lvlC * 10;
	cout << "In 5 years, the ocean will be " << year5 << " millimeters higher than its current level.\n";
	cout << "In 5 years, the ocean will be " << year7 << " millimeters higher than its current level.\n";
	cout << "In 5 years, the ocean will be " << year10 << " millimeters higher than its current level.\n";
	return 0;
}