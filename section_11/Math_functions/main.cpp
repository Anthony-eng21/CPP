// Section 11
// Math examples

#include <iostream>
#include <cmath> // required

using namespace std;

int main()
{

    double num{};

    cout << "Enter a number (double): ";
    cin >> num;

    cout << "The sqrt of " << num << " is: " << sqrt(num) << endl;
    cout << "The cube root of " << num << " is: " << cbrt(num) << endl;

    cout << "The sine of " << num << " is: " << sin(num) << endl;
    cout << "The cosine of " << num << " is: " << cos(num) << endl;

    cout << "The floor of: " << num << " is: " << floor(num) << endl;
    cout << "The ceiling of: " << num << " is: " << ceil(num) << endl;

    double power{};

    cout << "\nEnter a power to raise" << num << "to: ";
    cin >> power;
    cout << num << "raised to the " << power << "power is " << pow(num, power) << endl;

    cout << endl;
    return 0;
}
