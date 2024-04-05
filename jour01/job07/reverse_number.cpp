#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string input;
    cout << "Enter a number: ";
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        if (!isdigit(input[i])) {
            cout << input << " is not a valid number !";
            return 1;
        }
    }

    cout << "Reversed number: ";
    for (int i = input.length()-1; i >= 0; i--)
        cout << input[i];

    return 0;
}
