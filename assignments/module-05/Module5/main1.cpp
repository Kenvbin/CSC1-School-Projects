#include <iostream>

using namespace std;

int main1()
{
    for(int i=0; i<=120; i+=4)
    {
        if (i==0)
            cout << i;
        else
            cout << ", " << i;
    }
    return 0;
}
