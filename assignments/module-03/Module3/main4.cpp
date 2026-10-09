#include <iostream>
#include <ctime>

using namespace std;

int main4()
{
    srand(time(0));
    
    int r = rand();
    cout << "random: " << r << endl;
    
    int r2 = rand();
    cout << "random 2: " << r2 << endl;
    
    int dice = rand() % 6 + 1;
    cout << "Dice: " << dice << endl;
    
    const int MIN = 50;
    const int MAX = 100;
    
    int diff = MAX - MIN + 1;
    int value = rand() % diff + MIN;
    cout << "Dice 2: " << value << endl;
    
    return 0;
}
