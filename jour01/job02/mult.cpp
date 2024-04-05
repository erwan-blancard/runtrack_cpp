#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    if (argc != 3) {
        cout << "Invalid Arguments ! Expected two numbers.";
        return 1;
    } else {
        cout << "Result: ";
        cout << atof(argv[1]) * atof(argv[2]);
    }
    
    return 0;
}
