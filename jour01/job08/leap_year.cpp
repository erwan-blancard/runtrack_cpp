#include <iostream>
using namespace std;

bool leap_year(int year) {
    return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (leap_year(year)) {
        cout << "This year is a leap year.";
    } else {
        cout << "This year is not a leap year.";
    }

    return 0;
}
