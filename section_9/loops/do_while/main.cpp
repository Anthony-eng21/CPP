#include <iostream>
using namespace std;

int main()
{
    char selection{};
    do
    {
        cout << "\n ---------------------" << endl;
        cout << "1. Do this " << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "4. Q, Quit " << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;

        // Check user selection and perform corresponding action
        if(selection == '1') { //make sure that the condition here for chars are in single quotes 
            cout << "You chose 1 - doing this" << endl;
        } else if (selection == '2'){
            cout << "You chose 2 - doing that" << endl;
        } else if (selection == '3'){
            cout << "You chose 3 - doing something else" << endl;
        } else if (selection == 'q' || selection == 'Q'){ // Either 'q' or 'Q' to quit
            cout << "Goodbye"; // Loop fails now and we move to the next code to quit the loop and print some helpful info to know we exited i.e goodbye
        } else {
            cout << "Unknown option -- try again ..." << endl;
        }

        // Use AND because in either case we need to reexecute the loop once this condition fails we exit the loop
    } while (selection != 'q' && selection != 'Q'); // Notice the ; after the condition - this is IMPORTANT
    
    cout << endl;
    return 0;
}
