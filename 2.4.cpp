#include <iostream>

using namespace std;

int main(void) {
	int weeks, days, hours;

	cout << "Enter a first period in weeks, days, and hours: " << endl;
	cout << " number of weeks: ";
	cin >> weeks;
	cout << " number of days: ";
	cin >> days;
	cout << " number of hours: ";
	cin >> hours;

	float newWeeks, newDays, newHours;

	newDays = weeks * 7 + days;
	newHours = newDays * 24 + hours;
	newWeeks = newHours / 24 / 7;

	cout << weeks << " weeks, " << days << " days, " << hours << " hours = " << newWeeks << " weeks" << endl;

	int secondWeeks, secondDays, secondHours;

	cout << "Enter a second period in hours : ";
	cin >> secondHours;

	secondDays = secondHours / 24;
	secondHours = secondHours - secondDays * 24;
	secondWeeks = secondDays / 7;
	secondDays = secondDays - secondWeeks * 7;

	cout << secondHours << " hours = " << secondWeeks << " weeks " << secondDays << " days " << secondHours << " hours";
}