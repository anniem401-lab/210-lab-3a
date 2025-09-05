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
    string address;
    double avgPrice; 
    double rating; // 0.0-5.0
    bool isOpen;
};

int main() 
{
    Restaurant myRestaurant = {"Pasta Palace", "Italian", "123 Main St", 15.99, 4.5, true};

    // Display restaurant information
    cout << endl;
    cout << "Restaurant Name: " << myRestaurant.name << endl;
    cout << "Cuisine Type: " << myRestaurant.cuisine << endl;
    cout << "Address: " << myRestaurant.address << endl;
    cout << "Average Price: $" << myRestaurant.avgPrice << endl;
    cout << "Rating: " << myRestaurant.rating << "/5.0" << endl;
    cout << "Open Now: " << (myRestaurant.isOpen ? "Yes" : "No") << endl;
    cout << endl;

    return 0;
}