//1 часть задания

#include <iostream>
#include <string>

int main(void) {
    int years;
    std::string name;

    std::cout << "What year were you born?";
    std::cin >> years;

    std::cout << "What's your name?";
    std::cin >> name;

    std::cout << "Your name: " << name << ", your were born in " << years << "!";
}

//2 часть задания

int main(void) {
    int yearsBorn;
    std::string name;

    std::cout << "What year were you born?";
    std::cin >> yearsBorn;

    std::cout << "What's your name?";
    std::cin >> name;

    int years = 2025 - yearsBorn;

    std::cout << "Your name: " << name << ", your " << years << "years ago!";
}
