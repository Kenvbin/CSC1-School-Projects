#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    
    cout << "A: ";
    cin >> a;
    
    cout << "B: ";
    cin >> b;
    
    int quotient = a / b;
    int remainder = a % b;
    
    cout << a << " / " << b << " = " << quotient << ", remainder: " << remainder << endl;
        
    return 0;
}
