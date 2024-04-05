#include <iostream>
using namespace std;

bool is_even(int n) {
    return n % 2 == 0;
}

int main(int argc, char const *argv[])
{
    if (argc != 2) {
        cout << "Too much arguments ! Expected only 1 number.";
        return 1;
    } else {
        // check if decimal
        if (atoi(argv[1]) != atof(argv[1])) {
            cout << "The number is a decimal number !";
            return 1;
        } else if (is_even(atoi(argv[1]))) {
            cout << "The number is even.";
        } else {
            cout << "The number is odd.";
        }
    }
    
    return 0;
}
