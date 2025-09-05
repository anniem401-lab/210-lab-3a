// COMSC-210 | Lab 3A | Annie Morales
// IDE used: Visual Studio Code

#include <iostream>
#include <string>
using namespace std;

// Structure holding restaurant information
struct Restaurant 
{
    string name;
    string cuisine;
    string restaurantAddress;
    double rating; // 0.0-5.0
    bool review;
};

int main() 
{
    // Temporary struct: Receives user input to populate Restaurant struct
    Restaurant temp;

    cout << "Enter restaurant name: ";
    getline(cin, temp.name);
    cout << "Enter cuisine type: ";
    getline(cin, temp.cuisine);
    cout << "Enter restaurant address: ";
    getline(cin, temp.restaurantAddress);
    cout << "Leave a rating. (0.0-5.0): ";
    cin >> temp.rating;
    cout << "Would you like to leave a review? (1 for Yes, 0 for No): ";
    cin >> temp.review;

    return 0;
}