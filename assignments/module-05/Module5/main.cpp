#include <iostream>

using namespace std;

int main()
{
    int size;
    do{
        cout << "Size: ";
        cin >> size;
    }while (size < 2 || size % 2 == 0);
    
    for(int row = 0; row < size; row++)
    {
        for(int col = 0; col < size; col++){
            if(row == 0 || row == size - 1){
                cout << '#';
                
            }
            else if (col == size /2 ){
                cout << '#';
                
            }
            else{
                cout << ' ';
            }
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
