#include <iostream>

int main(void) {
    int hours;
    int minuts;

    std::cout << "Enter the number of hours: ";
    std::cin >> hours;

    std::cout << "Enter the number of minutes: ";
    std::cin >> minuts;

    std::cout << "Time: " << hours << ":" << minuts << "";
}