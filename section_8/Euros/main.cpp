#include <iostream>
//Convert Euros to USD
using namespace std;

int main()
{

    const double usd_per_eur{1.19};

    cout << "Welcome to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR:";

    double euros{0.0}; //euro initialization
    double dollars{0.0}; //dollars initialization
    cin >> euros;
    //convert euros into dollars 
    dollars = euros * usd_per_eur;

    cout << euros << "euro is equivalent to " << dollars << " dollars" << endl;
    cout << endl;
    return 0;
}