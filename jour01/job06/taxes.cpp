#include <iostream>
using namespace std;

int main()
{
    float price_et;

    cout << "Enter the price excluding tax of a kilo of carrots: ";
    cin >> price_et;

    float amount;

    cout << "Enter the number of kilo of carrots: ";
    cin >> amount;

    float vat;

    cout << "Enter the VAT rate (percentage): ";
    cin >> vat;

    cout << "\n" << "Price of " << amount << "Kg of carrots: " << (price_et*amount)*(1+(vat/100));

    return 0;
}
