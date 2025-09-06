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
void outputData(Restaurant& temp);

int main() 
{
    Restaurant temp; 
    temp = populateData(); // Calls the function to populate the struct
    outputData(temp);
    cout << "Thank you for using the restaurant review app!" << endl;
    cout << endl;

    return 0;
}

// Function to get user input and populate the Restaurant struct
Restaurant populateData()
{
    Restaurant temp; // Declares an object named temp of type Restaurant
    cout << endl;
    cout << "Welcome to the restaurant review app!" << endl << endl;
    cout << "Enter restaurant name: ";
    getline(cin, temp.name);

    cout << "Enter cuisine type: ";
    getline(cin, temp.cuisine);

    cout << "Enter restaurant address: ";
    getline(cin, temp.restaurantAddress);

    cout << "Leave a rating. (0.0-5.0): ";
    double userRating;
    cin >> userRating;

    // Input validation for rating
    while (userRating < 0.0 || userRating > 5.0)
    {
        cout << "Error: Please enter a valid rating (0.0-5.0): ";
        cin >> userRating;
    }
    temp.rating = userRating;

    cout << "Would you recommend this restaurant? (Y for Yes, N for No): ";
    char userAns;
    cin >> userAns;
    userAns = toupper(userAns); // Converts to uppercase to simplify validation

    // Input validation for recommendation
    while (userAns != 'Y' && userAns != 'N')
    {
        cout << "Error: Please only enter Y for Yes or N for No: ";
        cin >> userAns;
        userAns = toupper(userAns);
    }
    temp.recommend = userAns;
    
    return temp; // Returns the populated struct
};

// Function to output the data stored in the Restaurant struct
void outputData(Restaurant& temp)
{
    cout << endl << endl << endl << endl << endl << endl;
    cout << "Here is your restaurant review!" << endl;
    cout << "--------------------------------" << endl;
    cout << "Restaurant name: " << temp.name << endl;
    cout << "Cuisine type: " << temp.cuisine << endl;
    cout << "Restaurant address: " << temp.restaurantAddress << endl;
    cout << "Your rating: " << temp.rating << endl;
    cout << "Recommend this Restaurant? " << (temp.recommend == 'Y' ? "Yes" : "No") << endl;
    cout << endl;
}