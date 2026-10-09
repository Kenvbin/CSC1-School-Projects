#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool validate (string s);

int main()
{
    string str;
    
    do{
        cout << "Enter a phone number: ";
        getline(cin, str);
        
        bool isValid = validate(str);
        cout << "The string " << str << " is " << (isValid ? "a valid" : "not a valid") << " phone number\n";
        
    }while(str != "exit" && str != "quit");
    
    return 0;
}

bool validate(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if ((0 <= i && i <=2 ) || (4 <= i && i <= 6) || (8 <= i && i <= 11))
        {
            if (!isdigit(s[i]))
            {
                return false;
            }
        }
        else if (s[i] != '-')
        {
            return false;
        }
    }
    return true;
}
