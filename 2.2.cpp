#include <iostream>

using namespace std;

int main(void) {
	int number;

	cout << "Enter the number: ";
	cin >> number;

	cout << "Your number in hex: " << hex << number << ", in oct: " << oct << number;
}