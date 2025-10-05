#include <iostream>

int main(void) {
	int angleValueInDegree;
	double angleValueInRadian;
	double numberPi = 3.14159265358979;

	std::cout << "Enter the value in degree: ";
	std::cin >> angleValueInDegree;

	angleValueInRadian = (angleValueInDegree * numberPi) / 180;

	std::cout << "Angle in degree: " << angleValueInDegree << ", Angle in radian: " << angleValueInRadian;
}