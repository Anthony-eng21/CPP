// Section 7
// Arrays

#include <iostream>

using namespace std;

int main()
{

    char vowels[]{'a', 'e', 'i', 'o', 'u'}; // compiler will figure out how big this array is we don't declare that ourselves
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;

    //    cin >> vowels[5];  //out of bounds - don't do this!!program will not escape (finish executing) it's run time when somethng is out of bounds
    // like this so no warnings just weird behavior lol

    double hi_temps[]{90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;

    // pretty self explanatory 3=> <=(cock lol) overwiting an index with a new value
    hi_temps[0] = 100.7; // set the first element in hi_temps to 100.7
                         //                                        // we'll talk about assignment statement in an upcoming section

    // again overwriting
    cout << "The first high temperature is now: " << hi_temps[0] << endl;
    // //

//inizialitation behavior
/** with no arr initialization we only read junk/garbage memory we have no idea what will happen in our "cells"
 *  in our arr in this circumstance always initialize our arrays 
 if nothing is passed it assumes 0 for the cell data.
 if only one or, some are passed it fills the cells starting at index[0]    */
    int test_scores[5]{110, 90, 80, 70, 60};

    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2:  " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

        cout << "\nEnter 5 test scores: ";
        cin >> test_scores[0];
        cin >> test_scores[1];
        cin >> test_scores[2];
        cin >> test_scores[3];
        cin >> test_scores[4];

        cout << "\nThe updated array is:" << endl;
        cout << "First score at index 0: " << test_scores[0] << endl;
        cout << "Second score at index 1: " << test_scores[1] << endl;
        cout << "Third score at index 2:  " << test_scores[2] << endl;
        cout << "Fourth score at index 3: " << test_scores[3] << endl;
        cout << "Fifth score at index 4: " << test_scores[4] << endl;

        //The (variable) name is the address in memory 
        // prints a hexadecimal number it's the memory addres of where the array is located its referenced by name
        //c++ does this calculation that takes the name finds it and then looks to into the compund values of the array and look into it's indexes 
        //that's why when we try to look for test_scores[5] it's junk and makes a bad memory request(garbage memory)
        cout << "\nNotice what the value of the array name is : " << test_scores << endl;


        cout << endl;
    return 0;
}
