#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> numbers{}; // users number list
    char selection{};      // user selection p, a, m, s, q, l operations
    do
    {
        // Display the menu unconditionally
        // a do while works great here
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display a mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;

        cout << "\nEnter your choice: ";
        cin >> selection;

        // Selection logic starts here
        // using character literals for user input not strings
        // using if else if ladder statement for our program flow

        // print nums from our vector<int>numbers {} list
        if (selection == 'p' || selection == 'P')
        {
            if (numbers.size() == 0)                // nothing in the list
                cout << "[] this is empty" << endl; // do this
            else
            {                 // otherwise print out all the numbers in the list
                cout << "[ "; // nice brackets to make the printed list look good
                for (auto num : numbers)
                    cout << num << " ";
                cout << "]" << endl;
            }
        }
        // Add number into our number vec list
        else if (selection == 'a' || selection == 'A')
        {
            int num_to_add{}; // var we read into that goes into the nuumbers vector
            cout << "Enter an integer to add to the list: ";
            cin >> num_to_add;
            numbers.push_back(num_to_add);          // write into the vector here with pushback
            cout << num_to_add << " added" << endl; // display some info when the num_to_add data was 'saved'
        }
        // Calc Mean of nums in our list
        else if (selection == 'm' || selection == 'M')
        {
            if (numbers.size() == 0)
                cout << "Unable to calc mean - no data" << endl;

            // Stuff in our vector logic here so we need to
            // calculate the mea nof our items in our numbers vec
            else
            {
                int total{}; // stores the value of all the nums added together
                for (auto num : numbers)
                    total += num; // get sum of the num(s) here in our numbers vec and add them together
                // static cast here is really nice WE DONT WANT INT DIVISION
                // cout << total << endl;
                cout << "The mean is: " << static_cast<double>(total) / numbers.size() << endl;
            }
        }
        // Display the smallest int in the list
        else if (selection == 's' || selection == 'S')
        {
            if (numbers.size() == 0)
                cout << "Unable to determine the list is empty";
            else
            {
                // assume the first element is the one with the lowest int value in the list
                int smallest = numbers.at(0);
                for (auto num : numbers)
                    if (num < smallest) // current num in our loop is smaller than the "smallest"(swap)
                        smallest = num;
                cout << "The smallest number in the list is: " << smallest << endl;
            }
        }
        // Display largest int in the list
        else if (selection == 'l' || selection == 'L')
        {
            if (numbers.size() == 0)
                cout << "Unable to determine the list is empty";
            else
            {
                int largest = numbers.at(0); // similiar logic assume its the first element in the list
                for (auto num : numbers)
                    if (num > largest)
                        largest = num;
                cout << "The largest number in the list is: " << largest << endl;
            }
        }
        else if (selection == 'q' || selection == 'Q')
        {
            cout << "Goodbye user " << endl;
        }
        //Illegal selection 
        else 
        {
            cout << "Unknown selection, please try again" << endl;
        }

    } while (selection != 'q' && selection != 'Q');
    cout << endl;
    return 0;
}
