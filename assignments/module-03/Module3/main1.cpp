#include <iostream>

using namespace std;

int main1()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    cin.ignore();
    
    char c;
    cout << "Enter a char: ";
    cin.get(c);
    cout << "You entered '" << c << "'\n";
    
    return 0;
}
