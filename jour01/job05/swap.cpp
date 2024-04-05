#include <iostream>
using namespace std;

int main()
{
    int n;
    int m;
    cout << "Enter number n: ";
    cin >> n;
    cout << "Enter number m: ";
    cin >> m;
    cout << "Before swap: n=" << n << " and m=" << m << "\n";
    int tmp = n;
    n = m;
    m = tmp;
    cout << "After swap: n=" << n << " and m=" << m << "\n";
    return 0;
}
