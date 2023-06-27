// Section 6
// Constants

/*
Frank's Carpet Cleaning Service
Charges $30 per room
Sales tax rate is 6%
Estimates are valid for 30 days
Prompt the user for the number of rooms they would like cleaned
and provide an estimate such as:

Estimate for carpet cleaning service:
Number of rooms: 2
Price per room: $30
Cost: $60
Tax: $3.6
====================================
Total estimate: $63.6
This estimate is valid for 30 days

Pseudocode: (no wrong or right way)
    Prompt the user to enter the number of rooms
    Display number of rooms
    Display price per room
    Display cost:  (number of rooms * price per room)
    Display tax:   number of rooms * price per room * tax rate
    Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
    Display estimate expiration time
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like to be cleaned?";

    int number_of_rooms{0}; // initialized {}
    cin >> number_of_rooms;

    const double price_per_room{30.5};
    const double sales_tax{0.06};
    const int estimate_expiry{30};

    // alot of duplicate expressions for our math here we need to put it into a function or something
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << price_per_room << endl;
    cout << "Cost: $" << price_per_room * number_of_rooms << endl;
    cout << "Sales Tax: $" << price_per_room * number_of_rooms * sales_tax << endl;
    cout << "===============================" << endl;
    cout << "Total estimate: $" << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_tax) << endl; /*cost + salestax */
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;

    cout << endl;
    return 0;
}
