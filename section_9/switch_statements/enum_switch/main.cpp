#include <iostream>

using namespace std;

int main()
{
    //enumeration type with constants 
    //Direction is the referenc name for this new type
    //the compiler knows of these values so if you fail to add all of them in
    // this syntax it'll throw a notice unless you have a default value of course
    enum Direction {
        left, right, up, down
    };

    //heading is of type Direction
    Direction heading {down};

    //this variable heading in the switch case could be any of the above constant cases. so they need to be included for best practice
    //or you can make an individual type for any of the constants
    switch (heading)
    {
    case left:
        cout << "going left" << endl;
        break;
    
    case right:
         cout << "Going right" << endl;
         break;
    
    case up:
         cout << "Going up" << endl;
         break;
    
    case down:
         cout << "Going down" << endl;
         break;
    
    default:
        cout << "OK" << endl;
        break;
    }

    cout << endl;
    return 0;
}