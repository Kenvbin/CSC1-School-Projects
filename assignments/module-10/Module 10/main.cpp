#include <iostream>

using namespace std;

void sort(char array[], const int SIZE);
int search(char array[], const int SIZE, char target);

int main()
{
    const int SIZE = 10;
    char array[SIZE];
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter " << i << ": ";
        cin >> array[i];
    }
    sort(array, SIZE);
    
    int target;
    
    cout << "What would you like to look for? ";
    cin >> target;
    
    int index = search(array, SIZE, target);
    
    if(index == -1)
    {
        cout << "not found\n";
    }
    else
    {
        cout << "found " << target;
        cout << " at index " << index << endl;
    }
    return 0;
}

void sort(char array[], const int SIZE)
{
    bool hasSwapped;
    do {
        hasSwapped = false;
        for(int i = 1; i < SIZE; i++)
        {
            if(array[i - 1] > array[i])
            {
                char tmp = array[i-1];
                array[i-1] = array[i];
                array[i] = tmp;
                hasSwapped = true;
                
            }
        }
    }while(hasSwapped);
}

int search(char array[], const int SIZE, char target)
{
    int left = 0;
    int right = 1;
}
