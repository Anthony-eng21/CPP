#include <iostream>

// Switch cases in c++ 
using namespace std;

int main()
{
    char letter_grade {};

    cout << "Enter the letter grade you expect on the exam:";
    cin >> letter_grade;

    switch (letter_grade)
    {
    case 'a':
    case 'A':
        cout << "You need a 90 or above, study hard!" << endl;
        break;

    case 'b':
    case 'B':
        cout << "You need a 80-89 for a B, go study" << endl;
        break;

    case 'c':
    case 'C':
        cout << "You need a 70-79 for a C, average grade some to no studying" << endl;
        break;

    case 'd':
    case 'D':
        cout << "You need a 60-69 for a D, strive for a better grade" << endl;
        break;

    //F has additional logic i.e the extra code block where we confirm with the student that they really want to fail
    case 'f':
    case 'F':
    //make a code block here because we declare a new variable 
    {
        char confirm{0};
        cout << "Are you sure (Y/N)?";
        cin >> confirm;

        if(confirm == 'y' || confirm == 'Y') 
            cout << "Okay I guess you don't want to study" << endl;
        else if (confirm == 'n' || confirm == 'N')
            cout <<"Good, go study" << endl;
        else 
            cout << "Illegal choice (just flunk the class then)";

        break;
    }

    default: 
        cout << "Sorry, that's not a valid grade.";
    }

    cout << endl;
    return 0;
}