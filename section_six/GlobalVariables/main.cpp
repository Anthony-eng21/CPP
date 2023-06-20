#include <iostream>

using namespace std;

int age{18}; //global variable

int main()
{
    int age{16}; //16 if here
    cout << age << endl;

    return 0;
}