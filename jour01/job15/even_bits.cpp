#include <iostream>
using namespace std;


bool are_bits_even(unsigned long n) {
    short bit_count = 0;

    for (int i = 0; i < sizeof(unsigned long) * 8; i++) {
        bit_count += (n >> i) & 1;
    }

    return !(bit_count % 2);
}


int main(int argc, char const *argv[])
{
    cout << "Are bits even for 0: (0000000000000000): " << are_bits_even(0L) << "\n";
    cout << "Are bits even for 1: (0000000000000001): " << are_bits_even(1L) << "\n";
    cout << "Are bits even for 8: (0000000000001000): " << are_bits_even(8L) << "\n";
    cout << "Are bits even for 15 (0000000000001111): " << are_bits_even(15L) << "\n";
    cout << "Are bits even for 65000 (1111110111101000) : " << are_bits_even(65000L) << "\n";

    return 0;
}
