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
    char recommend; // Y or N
};

Restaurant populateData();

int main() 
{
    Restaurant temp;
    temp = populateData();

    cout << endl;
    // Populate the input struct with user data
    cout << "Restaurant name: " << temp.name << endl;
    cout << "Cuisine type: " << temp.cuisine << endl;
    cout << "Restaurant address: " << temp.restaurantAddress << endl;
    cout << "Your rating: " << temp.rating << endl;
    cout << "Your recommendation: " << temp.recommend << endl;

    return 0;
}

Restaurant populateData()
{
    // Function to get user input and populate the Restaurant struct
    Restaurant temp;
    cout << "Enter restaurant name: ";
    getline(cin, temp.name);
    cout << "Enter cuisine type: ";
    getline(cin, temp.cuisine);
    cout << "Enter restaurant address: ";
    getline(cin, temp.restaurantAddress);
    cout << "Leave a rating. (0.0-5.0): ";
    cin >> temp.rating;
    cout << "Would you recommend this restaurant? (Y for Yes, N for No): ";
    cin >> temp.recommend;

    return temp;
};