#include <iostream>

using namespace std;

int main(void) {
	unsigned char letter;
	for (int i = 65; i < 91; i++)
	{
		letter = i;
		cout << letter;
	}
	for (int i = 97; i < 123; i++)
	{
		letter = i;
		cout << letter;
	}
}