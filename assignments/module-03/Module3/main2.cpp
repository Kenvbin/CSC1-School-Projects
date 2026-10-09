#include <iostream>

using namespace std;

int main2()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    
    string city;
    cout << "Enter your hometown: ";
    getline(cin, city);
    
    cout << "Your name is: " << name << endl;
    cout << "Your hometown is: " << city << endl;
    
    return 0;
}
