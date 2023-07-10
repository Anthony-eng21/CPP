#include <iostream>

// conditional operator
//Usually found it in loops to loop over some specific data based off some condition 
//remember sequence selection and iteration is all that programming is about.

using namespace std;

int main()
{
    int num{};

    cout << "Enter an integer";
    cin >> num;

    if (num % 2 == 0)
        cout << num << " is even" << endl;
    else
        cout << num << " is odd" << endl;
    // with cond operator
    //    /   /    /     /    /  //condition  / ternary expression
    cout << num << " is " << ((num % 2 == 0) ? "Even" : "Odd") << endl; // ONE LINER 🤯

    int num1{}, num2{};

    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2; 

    if (num1 != num2)
    {
        cout << "Largest: " << ((num1 > num2) ? num1 : num2) << endl;
        cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
    }
    else
    {
        cout << "The numbers are the same" << endl;
    }

    cout << endl;
    return 0;
}