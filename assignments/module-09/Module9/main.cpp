#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << setprecision(1) << fixed << showpoint;
    
    const int COUNT = 5;
    
    char grades[COUNT];
    
    for (int i=0; i<COUNT; i++)
    {
        cout << "Enter " << i << ". grade: ";
        cin >> grades[i];
        
        while(grades[i] < 'A' || grades[i] > 'F')
        {
            cout << "Invalid! Enter A-F: ";
            cin >> grades[i];
        }
    }
    
    int total = 0;
    for (int i = 0; i < COUNT; i++)
    {
        switch(grades[i])
        {
            case'A': total+= 4;break;
            case'B': total+= 3;break;
            case'C': total+= 2;break;
            case'D': total+= 1;break;
        }
    }
    int gpa = total / COUNT;
    
    cout << "You recieved these grades: ";
    
    cout << grades[0];
    for(int i=1; i<COUNT; i++)
    {
        cout << "," << grades[i];
    }
    
    cout << " with a GPA of " << gpa << endl;
    
    return 0;
}
