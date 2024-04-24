#include <iostream>
using namespace std;


long doubleArray(int *iarray, int size) {
    long sum = 0;

    for (int i = 0; i < size; i++) {
        iarray[i] = iarray[i] * 2;
        sum = sum + iarray[i];
    }

    return sum;
}


void printArray(int *iarray, int size) {
    for (int i = 0; i < size; i++) {
        cout << iarray[i] << " ";
    }
    cout << "\n";
}


int main(int argc, char const *argv[])
{
   int iarray[] = {5, 7, 8, 10, 50};

   long sum = doubleArray(iarray, 5);

   printArray(iarray, 5);

   cout << "Sum: " << sum;

    return 0;
}
