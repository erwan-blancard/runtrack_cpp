#include <iostream>
using namespace std;

// limited to 2 variables

int main()
{
    cout << "Enter 5 numbers to calculate their average value:\n";

    double total;

    double tmp;

    cout << "Number 1: ";
    cin >> tmp;
    total = total + tmp;
    cout << "\n";
    cout << "Number 2: ";
    cin >> tmp;
    total = total + tmp;
    cout << "\n";
    cout << "Number 3: ";
    cin >> tmp;
    total = total + tmp;
    cout << "\n";
    cout << "Number 4: ";
    cin >> tmp;
    total = total + tmp;
    cout << "\n";
    cout << "Number 5: ";
    cin >> tmp;
    total = total + tmp;
    cout << "\n";

    cout << "Average: " << total / 5;
    
    return 0;
}
