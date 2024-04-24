#include <iostream>
using namespace std;

// swap int values by using their reference
void swapValues(int &x, int &y) {
    int tmp = x;
    x = y;
    y = tmp;
}


int main(int argc, char const *argv[])
{
    int x = 87;
    int y = 65;

    cout << "x: " << x << " y: " << y;

    swapValues(x, y);

    cout << "x: " << x << " y: " << y;

    return 0;
}
