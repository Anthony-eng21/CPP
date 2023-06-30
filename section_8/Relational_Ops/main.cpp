// Section 8
// Relational Operators
#include <iostream>

using namespace std;

int main()
{
    int num1{}, num2{};

    cout << boolalpha; //true false output 
    // cout << "Enter two intergers separated by a space: ";
    // cin >> num1 >> num2;

    // cout << num1 << " > " << num2 << ":" << (num1 > num2) << endl;
    // cout << num1 << " >= " << num2 << ":" << (num1 >= num2) << endl;
    // cout << num1 << " < " << num2 << ":" << (num1 < num2) << endl;
    // cout << num1 << " <= " << num2 << ":" << (num1 <= num2) << endl;

    // prompt user for a number that is greater or lower to our constants
    const int lower{10};
    const int upper{20};

    cout << "\nEnter an integer that is greater than " << lower << " : ";
    cin >> num1;
    cout << num1 << " > " << lower << " is " << (num1 > lower) << endl;

    cout << "\nEnter an integer that is less than or equal to " << upper << " : ";
    cin >> num1;
    cout << num1 << " <= " << upper << " is " << (num1 <= upper) << endl;

    cout << endl;
    return 0;
}
