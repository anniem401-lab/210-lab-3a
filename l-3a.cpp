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

    // Function to get user input and populate the Restaurant struct
    Restaurant populateData()
{
    Restaurant temp; // Declares an object named temp of type Restaurant
    cout << "Enter restaurant name: ";
    getline(cin, temp.name);

    cout << "Enter cuisine type: ";
    getline(cin, temp.cuisine);

    cout << "Enter restaurant address: ";
    getline(cin, temp.restaurantAddress);

    cout << "Leave a rating. (0.0-5.0): ";
    double userRating;
    cin >> userRating;

    while (userRating < 0.0 || userRating > 5.0)
    {
        cout << "Error: Please enter a valid rating (0.0-5.0): ";
        cin >> userRating;
    }
    temp.rating = userRating;

    cout << "Would you recommend this restaurant? (Y for Yes, N for No): ";
    char userAns;
    cin >> userAns;
    userAns = toupper(userAns);

    while (userAns != 'Y' && userAns != 'N')
    {
        cout << "Error: Please only enter Y for Yes or N for No: ";
        cin >> userAns;
        userAns = toupper(userAns);
    }
    temp.recommend = userAns;
    
    return temp;
};