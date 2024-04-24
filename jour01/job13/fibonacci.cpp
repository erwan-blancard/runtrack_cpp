#include <iostream>
using namespace std;


constexpr long fibonacci(int n) {
    if(n == 0 || n == 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}


int main(int argc, char const *argv[])
{
    // constexpr means that the expression of "result" is evaluated at compile time and cannot be changed
    constexpr long result = fibonacci(6);
    cout << result << "\n";
    return 0;
}
