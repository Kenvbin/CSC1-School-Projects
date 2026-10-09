#include <iostream>

using namespace std;

int main() {
    string movie1;
    string movie2;
    string movie3;
    
    float rating1;
    float rating2;
    float rating3;
    
    float average;
    
    cout << "Enter the name of a movie" << endl;
    getline(cin, movie1);
    
    
    cout << "Enter your rating for " << movie1 << endl;
    cin >> rating1;
    
    cin.ignore();
    cout << "Enter the name of a movie" << endl;
    getline(cin, movie2);
    

    cout << "Enter your rating for " << movie2 << endl;
    cin >> rating2;
    
    cin.ignore();
    cout << "Enter the name of a movie" << endl;
    getline(cin, movie3);
    
    
    cout << "Enter your rating for " << movie3 << endl;
    cin >> rating3;

    if (rating1 > rating2 && rating1 > rating3)
        cout << "Your favorite movie is " << movie1;
    
    else if (rating1 > rating2 && rating1 < rating3)
        cout << "Your favorite movie is " << movie3;
    
    else
        cout << "Your favorite movie is " << movie2 << endl;
    
    average = (rating1 + rating2 + rating3) / 3;
        
    cout << "Your average movie rating is " << average << endl;
    
    
    return 0;
}
