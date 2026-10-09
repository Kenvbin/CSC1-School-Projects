#include <iostream>
#include <iomanip>

using namespace std;

int main3()
{
    cout << setprecision(2) << fixed << showpoint;
    const float TAX_RATE = 0.0975;
    
    float price1 = 12.5;
    float price2 = 5.95;
    
    float subTotal = price1 + price2;
    float tax = subTotal * TAX_RATE;
    float total = subTotal + tax;
    
    cout << "Item 1: " << setw(6) << price1 << endl;
    cout << "Item 2: " << setw(6) << price2 << endl;
    cout << "Tax   : " << setw(6) << tax << endl;
    cout << "Total : " << setw(6) << total << endl;
    
    return 0;
}
