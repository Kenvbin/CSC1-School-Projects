#include <iostream>

using namespace std;

int promptInput(string prompt);

void displayCandle(int candleSize, int wickSize);

int main() {

    int candleSize = promptInput("Enter a candle size (0-10): ");
    int wickSize = promptInput("Enter a wick size (0-10): ");
    
    displayCandle(candleSize, wickSize);
    
    return 0;
}

int promptInput(string prompt)
{
    int size;
    do{
        cout << prompt;
        cin >> size;
    }while (size < 0 || size > 10);
    
    return size;
}

void displayCandle(int candleSize, int wickSize)
{
    for(int i = 0; i < candleSize ; i++)
    {
        cout << "=";
    }
    for(int i = 0; i < wickSize ; i++)
    {
        cout << "-";
    }
    cout << endl;
}
