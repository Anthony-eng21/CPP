//section 9

//if statements
#include <iostream>
using namespace std;

int main()
{
    int num {};
    const int min {10};
    const int max {100};

    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num;

    //Lower bound
    if(num >= min) {
        cout << "\n=============if statement 1==============" << endl;
        cout << num << " is greater than or equal to " << min << endl;

        int diffFromMin {num - min}; //block scoped to our if statement
        cout << num << " is " << diffFromMin << " greater than " << min;
    }

    //Upper bound
    if (num <= max) {
        cout << "\n============if statement 2============" << endl;
        cout << num << " is less than or equal to " << max << endl; 
        
        int diffFromMax {max - num};
        cout << num << " is " << diffFromMax << " away from " << max;
    }

    if(num >= min && num <= max) {
        cout << "\n============if statement 3============" << endl;
        cout << num << " is in range." << endl;
        cout << "this means that statements 1 and 2 must also be displayed" << endl;
    }

    if(num == min || num == max) {
        cout << "\n============if statement 4============" << endl;
        cout << num << " is right on a boundary" << endl;
        cout << "this means that all statements are truthy and displayed" << endl;
    }

    cout << endl;
    return 0;
}