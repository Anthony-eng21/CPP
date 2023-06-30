// Section 8
// Logical Operators

#include <iostream>

using namespace std;

int main()
{
    int num{};
    const int lower{10};
    const int upper{20};

    cout << boolalpha;

    // Determine if an entered integer is between two other integers
    // assume lower < upper
    // cout << "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
    // cin >> num;

    // bool within_bounds{false};
    // //    makes sure its greater than lower and less than upper between (11-19 bounds) not including 10 - 20
    // within_bounds = (num > lower && num < upper);
    // cout << num << " is between " << lower << " and " << upper << " : " << within_bounds << endl;

    // Determine if an entered integer is outside two other integers (<==coolzone== <=10 ----|----20=> ==coolzone==>)
    // assume lower < upper
    //    cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << " : ";
    //    cin >> num;

    //    bool outside_bounds {false};
    //    outside_bounds = (num < lower || num > upper); //either or not inclusive to both lol(!and | or👍)
    //    cout << num  << " is outside "<< lower <<  " and " << upper << " : " << outside_bounds << endl;

    // Determine if an entered integer is exactly on the boundary
    // assume lower < upper
    //    cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << " : ";
    //    cin >> num;

    //    bool on_bounds {false};
    //    //it has to be either or for this to work but with and && all need to pass the true test
    //    on_bounds = (num == lower || num == upper); //has to be 10 or 20 anything else prints false
    //    cout << num  << " is on one of the bounds which are "<< lower <<  " and " << upper << " : " << on_bounds << endl;

    //   Determine if you need to wear a coat based on temperature and wind speed
    bool wear_coat{false};
    double temperature{};
    int wind_speed{};

    const int wind_speed_for_coat{25};     // wind over this value requires a coat
    const double temperature_for_coat{45}; // temperature below this value requires a coat

    // // Require a coat if either wind is too high OR temperature is too low
    cout << "\nEnter the current temperature in (F) :";
    cin >> temperature;
    cout << "Enter windspeed in (mph): ";
    cin >> wind_speed;

    // either piece = true for the expression to be true (either or)
    wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using OR? " << wear_coat << endl;

    //all of these operations need to be true to be able to wear a coat (all)
    // // Require a coat if BOTH the windspeed is too high AND temperature is too low
    wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using AND? " << wear_coat << endl;

    cout << endl;
    return 0;
}
