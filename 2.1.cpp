#include <iostream>
#include <climits>

using namespace std;

int main(void) {
	short int shortInt = SHRT_MAX;
	unsigned short int unsignedShortInt = USHRT_MAX;
	long int longInt = LONG_MAX;
	unsigned long int unsignedLongInt = ULONG_MAX;
	long long longLong = LLONG_MAX;

	cout << "Memory size to short Int = " << sizeof(shortInt) << endl;
	cout << "Memory size to unsigned Short Int = " << sizeof(unsignedShortInt) << endl;
	cout << "Memory size to long Int = " << sizeof(longInt) << endl;
	cout << "Memory size to unsigned Long Int = " << sizeof(unsignedLongInt) << endl;
	cout << "Memory size to long Long = " << sizeof(longLong) << endl;

	cout << "Min number for shortInt = " << shortInt + 1 << endl;
	cout << "Max number for shortInt = " << shortInt << endl;
	cout << "Min number for unsignedShortInt = " << unsignedShortInt + 1 << endl;
	cout << "Max number for unsignedShortInt = " << unsignedShortInt << endl;
	cout << "Min number for longInt = " << longInt + 1 << endl;
	cout << "Max number for longInt = " << longInt << endl;
	cout << "Min number for unsignedLongInt = " << unsignedLongInt + 1 << endl;
	cout << "Max number for unsignedLongInt = " << unsignedLongInt << endl;
	cout << "Min number for longLong = " << longLong + 1 << endl;
	cout << "Max number for longLong = " << longLong << endl;
}