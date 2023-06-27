#include <iostream>

using namespace std;

int main()
{
    // initialization not assignment
    int num1{10};
    int num2{20};

    //matching types here
    num1 = num2 = 1000; // assignment statement. moving 100 into num1 (variables are containers for reference)

    cout << "num 1 is: " << num1 << endl;
    cout << "num 2 is: " << num2 << endl;

    cout << endl;
    return 0;
}