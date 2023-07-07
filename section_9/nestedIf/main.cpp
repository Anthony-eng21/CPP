#include <iostream>
#include <string>

using namespace std;

int main()
{
    int score {};
    cout << "Enter your score on the exam (0-100):";
    cin >> score;

    string letter_grade {}; // Changed variable type to string

    if (score >= 0 && score <= 100) { //input boundaries
        if (score >= 90) //nested conditionals
            letter_grade = "A";
        else if (score >= 80)
            letter_grade = "B";
        else if (score >= 70)
            letter_grade = "C";
        else if (score >= 60)
            letter_grade = "D";
        else
            letter_grade = "F";

        cout << "Your grade is: " << letter_grade << endl;

        if(letter_grade == "F") 
            cout << "Sorry, you must repeat this class." << endl;
        else 
            cout << "Congratulations, you passed with flying colors." <<endl;

    } else {
        cout << "Sorry, " << score << " is not in range." << endl;
    }

    cout << endl;
    return 0;
}
