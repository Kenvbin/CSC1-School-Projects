#include <iostream>
#include <iomanip>

using namespace std;

int main2()
{
    cout << setprecision(2) << fixed << showpoint;
       float total = 0;
       int item;
       int saladAmount = 0;
       int burgerAmount = 0;
       int pizzaAmount = 0;
       cout << "Welcome!" << endl;
       do
       {
          cout << "\nMenu: \n" << "------------------------------\n";
          cout << "1. Caesar Salad: $5.99 \n";
          cout << "2. Thousand Island Burger: $10.49 \n";
          cout << "3. Deep Dish Pepperoni Pizza: $15.99 \n";
          cout << "Enter the number of the item you would like to order. (Enter - 1 to end and get your final bill)\n";
          cin >> item;
          while (( item > 3 || item < 1 ) && item != -1)
          {
             cout << "Invalid choice! Choose 1-3 or -1 to quit.\n";
             cin >> item;
          }
          float price = 0;
          switch (item)
          {
          case 1:
             if (saladAmount < 10)
             {
                saladAmount++;
                price = 5.99;// use price shown in menu
             }
             else
             {
                cout << "\nMax Number of item is 10!" << endl;
             }
             break;
          case 2:
             if (burgerAmount < 10)
             {
                burgerAmount++;
                price = 10.49;
             }
             else
             {
                 cout << "\nMax Number of item is 10!" << endl;
             }
             break;
          case 3:
            if (pizzaAmount < 10)
             {
                pizzaAmount++;
                price = 15.99;
             }
             else
             {
                 cout << "\nMax Number of item is 10!" << endl;
             }
             break;
          }
          total += price;
       } while ( item != -1 ); // repeat until -1 is entered
       cout << "\nFinal Bill:\n";
    for (int i = 0; i < saladAmount ; i++)
       {
          cout << "Caesar Salad---------------Price: $5.99\n";
       }
       for (int i = 0; i < burgerAmount; i++)
       {
           cout << "Thousand Island Burger-----Price: $10.49\n";
       }
       for (int i = 0; i < pizzaAmount; i++)
       {
          cout << "Deep Dish Pepperoni Pizza--Price: $15.99\n";
       }
       cout << "Total: $" << total << endl;
       return 0;
}
