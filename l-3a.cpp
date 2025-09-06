// COMSC-210 | Lab 3A | Annie Morales
// IDE used: Visual Studio Code

#include <iostream>
#include <string>
using namespace std;

// Structure holding restaurant information
struct RestaurantData 
{
    string name;
    string cuisine;
    string restaurantAddress;
    double rating; // 0.0-5.0
    bool review;
};

// Function to get user input and populate the RestaurantData struct
struct temp
{
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
};


int main() 
{
    RestaurantData temp;
    temp = RestaurantData();

    // Populate the input struct with user data
    cout << "Restaurant name: " << temp.name << endl;
    cout << "Cuisine type: " << temp.cuisine << endl;
    cout << "Restaurant address: " << temp.restaurantAddress << endl;
    cout << "Your rating: " << temp.rating << endl;
    cout << "Your review: " << temp.review << endl;

    return 0;
}