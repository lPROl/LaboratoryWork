#include <iostream>

int main(void) {
	int powerCarInHorse;
	double powerCarInKWT;

	std::cout << "Enter the power of the car in horsepower: ";
	std::cin >> powerCarInHorse;

	powerCarInKWT = powerCarInHorse * 0.7457;

	std::cout << "Power in horsepower: " << powerCarInHorse << ", power in kWt: " << powerCarInKWT;
}