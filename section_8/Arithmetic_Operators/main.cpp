#include <iostream>

using namespace std;

int main()
{
    int num1{200};
    int num2{100};

    // cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    int result{0};

    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;

    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;

    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;

    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;

    result = num2 / num1;
    cout << num1 << " / " << num2 << " = " << result << endl; // 200 / 100 = 0 but should be 0.5 but these are ints so we get whole numbers

    // modulo
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl; // 200 / 100 = 0 but should be 0.5 but these are ints so we get whole numbers
    
    num1 = 10;
    num2 = 3;
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl; // 200 / 100 = 0 but should be 0.5 but these are ints so we get whole numbers
    // output is one because we get a remainder or one because 3^2 = 9 and 10 - 9 is (1)

    result = num1 * 10 + num2; //wtih inline arithmetic we still use PEMDAS (order or operations) 

    cout << 5/10 <<endl; // int: 0

    cout << 5.0/10.0 <<endl; //double 0.5 

    cout << endl;
    return 0;
}