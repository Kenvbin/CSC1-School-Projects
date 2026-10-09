#include <iostream>

using namespace std;

int main2()
{
    string item1;
    string item2;
    string item3;
    
    float price1;
    float price2;
    float price3;
    
    cout << "Item 1: ";
    cin >> item1;
    
    cout << "Price 1: ";
    cin >> price1;
        
    cout << "Item 2: ";
    cin >> item2;
    
    cout << "Price 2: ";
    cin >> price2;
        
    cout << "Item 3: ";
    cin >> item3;
    
    cout << "Price 3: ";
    cin >> price3;
    
    float total = price1 + price2 + price3;
    
    cout << "Total: " << total << endl;
    return 0;
}
