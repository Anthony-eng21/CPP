#include <iostream>

// While Loop
//  While loops are used for input validation because they keep running until the condition is met.
// super useful for when we want to have the user be reprompted.
using namespace std;

int main()
{
    // While Counting Down:
    //  int num {};
    //  cout << "Enter a positive number - start the countdown:";
    //  cin >> num;

    // while (num > 0) {
    //     cout << num << endl;
    //     --num; //count down loop ends when we hit 0; when the pre or post decrememnt are in a single line like this they mean the same thing. (same thing cus !(part of an expression here))
    // }
    // cout << "Blastoff!" << endl;

    // While counting up:
    // int num{};

    // cout << "Enter a positive integer to count up to: ";
    // cin >> num;

    // int i{1}; //starting to one. we need another counter variable becasue we want a place to start from in this use case
    // while (num >= i) { //count up to the given int
    //     cout << i << endl;
    //     i++; //increment: //count up loop ends when we hit our given user integer; when the pre or post decrememnt are in a single line like this they mean the same thing. (same thing cus !(part of an expression here))
    // }

    // input validation with while:
    // int number{};

    // cout << "Enter an integer less than 100: ";
    // cin >> number;

    // // if it's greater than 100 repeat the same user action
    // while (number >= 100)
    // { //!(number < 100)
    //     cout << "Enter an integer less than 100: ";
    //     cin >> number;
    // }

    // cout << "Thanks!" << endl;

    //important that we explicitly set this bool to false or else they won't enter our while loop so right conditions are really important and kind of tricky with double bools
    bool done{false}; //default isnt done. need more input 
    int number{};

    while(!done) {
        cout << "Enter an Integer between 1 and 5: ";
        cin >> number;
        //equal sign is important
        if(number <= 1 || number >= 5) { // boundaries are 2 -------- 4 nothing less nothing more
            cout << "Out of range, try again." << endl; //catch that condition if the user didnt do it right and done is still false so we go right to the top of the loop and check the condition again.
        } else { //succeed we did it and the condition above failed
            cout << "Thanks!" << endl;
            done = true; //this needs to be set to true. or the loop will never end.
        }
    }

    cout << endl;
    return 0;
}