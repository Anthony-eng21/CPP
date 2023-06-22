// Section 6
// The sizeof operator

#include <iostream>
#include <climits>
// make sure you include climits for integer types

// Similar information for floating point numbers

// is contained in <cfloat>

using namespace std;

int main()
{

    cout << "sizeof information" << endl;
    cout << "========================" << endl;

    cout << "char: " << sizeof(char) << " bytes." << endl; //char: 1 bytes.
    cout << "int : " << sizeof(int) << " bytes." << endl; //int: 4 bytes.
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl; //unsigned int: 4 bytes.
    cout << "short: " << sizeof(short) << " bytes." << endl; //short: 2 bytes.
    cout << "long: " << sizeof(long) << " bytes." << endl; //long: 4 bytes.
    cout << "long long: " << sizeof(long long) << " bytes." << endl; //long long: 8 bytes.

    cout << "============sizeof (double/floats)============" << endl;

    cout << "float: " << sizeof(float) << " bytes." << endl; //float: 4 bytes.
    cout << "double: " << sizeof(double) << " bytes." << endl; // double: 8 bytes.
    cout << "long double: " << sizeof(long double) << " bytes." << endl; //long double 16 bytes (depends on the system)
    
    //
        // use values defined in <climits> 
        cout << "===========Min=============" << endl;

        cout << "Minimum values:" << endl; 
        cout << "char: " << CHAR_MIN << endl; // char: -128
        cout << "int: " << INT_MIN << endl; //int: -2147483648
        cout << "short: " << SHRT_MIN << endl; // short: -32768
        cout << "long: " << LONG_MIN << endl; // long: -2147483648
        cout << "long long: " << LLONG_MIN << endl; // long long: -9223372036854775808
    // //
        cout << "===========Max=============" << endl;

        cout << "Maximum values:" << endl;
        cout << "char: " << CHAR_MAX << endl; //char: 127
        cout << "int: " << INT_MAX << endl; //int: 2147483647
        cout << "short: " << SHRT_MAX << endl; // short: 32767
        cout << "long: " << LONG_MAX << endl; // long: 2147483647
        cout << "long long: " << LLONG_MAX << endl; // 9223372036854775807
    //
        // sizeof can also be used with variable names
        cout << "===========sizeof(con vars)=============" << endl;

        cout << "sizeof using variable names" << endl;
        int age {21};
        cout << "age is " << sizeof(age) << " bytes." << endl; //syntatic variant (optional ())
        // or
         cout << "age is " << sizeof age << " bytes." << endl;

        double wage { 22.24};
        cout << "wage is " << sizeof(wage) << " bytes." << endl;
        // or
        cout << "wage is " << sizeof wage << " bytes." << endl;

    return 0;
}
