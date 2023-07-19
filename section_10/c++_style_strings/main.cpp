#include <iostream>
#include <iomanip>
#include <string> // important!

using namespace std;
int main()
{

    string s0;
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{"Kiwi"};
    string s4{"apple"};
    string s5{s1};       // Apple
    string s6{s1, 0, 3}; // App
    string s7(10, 'X');  // XXXXXXXXXX constructor style initialization here with the PARENTHESIS

    cout << s0 << endl;          // No garbage
    cout << s0.length() << endl; // empty string

    // Initialization
    //    cout << "\nInitialization" << "\n------------------------------------------" << endl;
    //    cout << "s1 is initialized to: " << s1 << endl;
    //    cout << "s2 is initialized to: " << s2 << endl;
    //    cout << "s3 is initialized to: " << s3 << endl;
    //    cout << "s4 is initialized to: " << s4 << endl;
    //    cout << "s5 is initialized to: " << s5 << endl;
    //    cout << "s6 is initialized to: " << s6 << endl;
    //    cout << "s7 is initialized to: " << s7 << endl;

    // Comparison
    //    cout << "\nComparison" << "\n------------------------------------------" << endl;
    //    cout << boolalpha; //aplha bool values i.e true and false
    //    cout << s1  << " == " << s5 << ": " << (s1 == s5) << endl; 		        // True    Apple == Apple
    //    cout << s1  << " == " << s2 << ": " << (s1 == s2) << endl;	            // False   Apple != Banana
    //    cout << s1  << " != " << s2 << ": " << (s1 != s2) << endl;		        // True    Apple != Banana
    //    cout << s1  << " < " << s2 << ": " << (s1 < s2) << endl;;		        // True         Apple < Banana
    //    cout << s2  << " > " << s1 << ": " <<(s2 > s1) << endl;		            // True         Banana > Apple
    //    cout << s4  << " < " << s5 << ": " <<(s4 < s5) << endl;		            // False        apple >Apple
    //    cout << s1  << " == " << "Apple" << ": " <<(s1 == "Apple") << endl;;	    // True Apple == Apple

    // Assignment / overwriting values
    //    cout << "\nAssignment" << "\n------------------------------------------" << endl;
    
    //    s1 = "Watermelon";
    //    cout << "s1 is now: " << s1 << endl;    // Watermelon
    //    s2 = s1;
    //    cout << "s2 is now: " << s2 << endl;    // Watermelon
    
    //    s3 = "Frank";
    //    cout << "s3 is now: " << s3 << endl;    // Frank
    
    //manipulate characters 
    //    s3[0] = 'C';    // Crank 
    //    cout << "s3 change first letter to 'C': "  << s3 << endl;   //Crank
    //    s3.at(0) = 'P'; //at method is nice here we can use it becasue strings are objects like vectors.
    //    cout << "s3 change first letter to 'P': "  << s3 << endl;   // Prank

    // Concatenation

    //    s3 = "Watermelon";
    //    cout << "\nConcatenation" << "\n------------------------------------------" << endl;
    
    //    s3 =  s5 + " and " + s2 + " juice";     // Apple and Banana juice
    //    cout << "s3 is now: " << s3 << endl;    // Apple and Banana Juice

    //  s3 = "nice " + " cold " + s5 + "juice";         // Compiler error because they are c style strings and not objects. literal + object is okay but literal + literal throws an error

    //  for loop
       cout << "\nLooping" << "\n------------------------------------------" << endl;
    
       s1 = "Apple";
       for (size_t i {0}; i < s1.length(); ++i) //size_t in these cases is the proper type to use when looping through objects like this
           cout << s1.at(i);      //  or s1[i]    Apple / .at() does bound checking while array syntax [] does not
       cout << endl;
    
    // Range-based for loop
       for (char  c: s1)
           cout << c;     // Apple
       cout << endl;

    // Substring
       cout << "\nSubstring" << "\n------------------------------------------" << endl;
       s1 = "This is a test";
    
    //first arg is where to start and the second arg is how many elements we want back
       cout << s1.substr(0,4) << endl;	    // This _
       cout << s1.substr(5,2) << endl;	    // is
       cout << s1.substr(10,4) << endl;   	// test

    // Erase
       cout << "\nErase" << "\n------------------------------------------" << endl;
    
       s1 = "This is a test";
       s1.erase(0,5);     // Erase This from s1 results in "is a test"
       cout << "s1 is now: " << s1<< endl;     // is a test

    // getline doesn't stop at the space the same way that extraction operator does able to write Tony Woodworth with it escaping at the white space
        cout << "\ngetline" << "\n------------------------------------------" << endl;
    
       string full_name {};
    
       cout << "Enter your full name: ";
       getline(cin, full_name);
    
       cout << "Your full name is: " << full_name << endl;

    // Find
       cout << "\nfind" << "\n------------------------------------------" << endl;
    
       s1 = "The secret word is Boo";
       string word {};
    
       cout << "Enter the word to find: ";
       cin >> word;
    
    //size_t is always zero or more or an error
       size_t position = s1.find(word);
       if (position != string::npos)
           cout << "Found " << word << " at position: " << position << endl;
       else
           cout << "Sorry, " << word <<  " not found" << endl;

    cout << endl;
    return 0;
}
