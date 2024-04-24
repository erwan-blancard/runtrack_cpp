#include <iostream>
#include <math.h>
using namespace std;


unsigned long long cubes(int N) {
    unsigned long long sum = 0;

    for (int i = 5; i <= N ; i++) {
        sum = sum + pow(i, 3);
    }

    return sum;
}


int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Result: " << cubes(n);

    return 0;
}
