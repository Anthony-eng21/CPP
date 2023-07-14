#include <iostream>
//INNER LOOP, LOOPS FASTER THAN THE OUTER LOOP
using namespace std;
int main()
{
    cout << "====================" << endl;
    // NESTED FOR LOOP THAT PRINTS OUT A MULTIPLICATION TABLE
    // PERFECT FOR SHOWING THAT THE INNER LOOP(NUM2: prints 1 to 12 on every iteration) 
    // PRINTS FASTER THAN THE OUTER(NUM1: prints out 1 on 1st iteration then 2 on the 2nd till 12) 
    //the inner loop executes until its condition is met then goes back up to the first outer loop 
    //to restart an iteration for the next iteration for the outer loops condition 1 => 2 => 3 and so on till 13 iter condition fails
    for (int num1{1}; num1 <= 12; num1++)
    {
        for (int num2{1}; num2 <= 12; num2++)
        {
            cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
        }
        cout << "====================" << endl;
    }

    std::cout << std::endl;
    return 0;
}
