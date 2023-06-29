/*
Ask the user to enter 3 ints
calc the su, of the ints then
calc the average of the 3 ints
*/

#include <iostream>

using namespace std;

int main()
{
    int total{};
    int num1{}, num2{}, num3{}; // initializes all three to 0 (MUST HAVE {})

    const int count{3};
    cout << "enter 3 ints seperated by spaces";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double average{0.0};

    average = static_cast<double>(total) / count; //the compiler converts total into a double oh a double and int so the compiler thinks oh we're dividing doubles really
    //LEGACY: average = (double)total/count; old c style cast. ^ is more modern and type safe

    cout << "The 3 numbers were: \n" << num1 << endl << num2 << endl << num3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The average of the numbers is: " << average << endl;

    cout << endl;
    return 0;
}