// This program calculates the changes
// in the ocean level over several years
#include <iostream>
using namespace std;

int main() {
	double lvlC = 1.5; // this is the distance (in millimeters) the ocean rises in a year
	double year5 = lvlC * 5;
	double year7 = lvlC * 7;
	double year10 = lvlC * 10;
	cout << "In five years, the ocean will have risen " << year5 << " millimeters.\n";
	cout << "In seven years, the ocean will have risen " << year7 << " millimeters.\n";
	cout << "In ten years, the ocean will have risen " << year10 << " millimeters.\n";
	return 0;
}