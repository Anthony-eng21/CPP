#include <iostream>
using namespace std;
// INFINITE LOOPS: loops whose condition expression always evaluates to true (while loops especially)
//  usually unintended but sometimes are helpful in event driven programs and are used with continues and break statements
//  operating systems are endless infinite loop
int main()
{ // DO NOT RUN ANY OF THESE HAHA
    // INFINITE FOR LOOP
    //  for(;;) //omit all three i.e initialization, condition, post or pre incrementer/decrementer
    //      cout << "This will print Forever" << endl;
    //  cout << endl;

    // INFINITE WHILE LOOP
    //  while(true)
    //      cout << "This will print Forever" << endl;

    // INFINTE DO WHILE
    // do
    // {
    //     cout << "This will print Forever" << endl;
    // } while (true);
    // return 0;

    // INFINITE WHILE LOOP WITH STRATEGIC BREAK STATEMENT
    while(true) {
        char again{};
        cout << "Do you wnat to loop again? (Y/N): ";
        cin >> again;

        if (again == 'N' || again == 'n')
            break; //now if we meet this condition it will break out of this loop and terminate. Now the infinite loop looks more finite
    }
}