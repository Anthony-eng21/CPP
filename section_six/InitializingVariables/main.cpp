#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the width of the room: ";
    int room_width{0}; // initialize with 0
    cin >> room_width;

    cout << "Enter the length of the room: ";
    int room_length{0};
    cin >> room_length;
    
    cout << "Area of the room is " << room_width * room_length << " square feet" << endl;

    return 0;
}