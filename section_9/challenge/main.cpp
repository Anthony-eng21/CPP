#include <iostream>
#include <vector>

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

            //Stuff in our vector logic here so we need to 
            //calculate the mea nof our items in our numbers vec
            else
            {
                int total{};
                for(auto num: numbers)
                    total += num; //get sum of the num(s) here in our numbers vec
                //static cast here is really nice WE DONT WANT INT DIVISION
                cout << "The mean is: " << static_cast<double>(total) / numbers.size() << endl;
            }
        }

    } while (selection != 'q' && selection != 'Q');

    cout << endl;
    return 0;
}
