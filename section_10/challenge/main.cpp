// Section 10
// Challenge -
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your subsitition.
For example, to encrypt you can replace the character at position n in alphabet
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{

    string alphabet{"[ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{" [XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string secret_message{};
    cout << "Enter your secret message : ";
    getline(cin, secret_message); // read the multi word string from our user input and read it

    string encrypted_message{};

    cout << "\nEncrypting message..." << endl;

    // iterate through each character
    for (char c : secret_message)
    {
        size_t position = alphabet.find(c); // find the character as it self in the right pos in alphabet or process as is
        if (position != string::npos)       // found it in the alpabet and the string definitley has a position
        {
            // need a new character in the key
            // initialize this variable as the new postion in the string
            char new_char{key.at(position)};
            encrypted_message += new_char;
        }
        else
        {
            encrypted_message += c; // add the character as is do not substitute i.e for symbols not included in the string like ' or ? etch
        }
    }

    cout << "\nEncrypted message:" << encrypted_message << endl;

    string decrypted_message{};
    cout << "\nDecrypting message..." << endl;

//same logic but flipped
    for (char c : encrypted_message)
    {
        size_t position = key.find(c);
        if (position != string::npos)
        {
            char new_char { alphabet.at(position) };
            decrypted_message += new_char;
        }
        else
        {
            decrypted_message += c;
        }
    }
    cout << "\nSecret message: " << decrypted_message << endl;

    cout << endl;
    return 0;
}
