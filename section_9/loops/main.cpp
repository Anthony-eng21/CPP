#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name{};

    cout << "What's your name lad let's find you a match" << endl;

    //Reference to the input stream. Stores characters from is into __str until '' is found, the end of the stream is encountered, or str.max_size() is reached. Any previous contents of __str are erased. If end of line is encountered, it is extracted but not stored into __str.
    getline(cin, name);

    if (name == "John")
    {
        cout << "Virgins only go to heaven not all the way." << endl;
    }
    else
    {
        cout << "You will find love indefinitely";
    }
    cout << endl;
    return 0;
}
