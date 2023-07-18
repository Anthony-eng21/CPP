#include <iostream>
#include <cstring>      // for c-style string functions
#include <cctype>       // for character-based functions

using namespace std;    

int main()
{
    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};
    
    // cout << first_name;     // Will likely display garbage!

//    cout << "Please enter your first name: ";
//    cin >> first_name;

//    cout << "Please enter your last name: ";
//    cin >> last_name;
//    cout << "-------------------------------" << endl; 
   
//    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl; //strlen() returns the length of the string
//    cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;

//    strcpy(full_name, first_name);          // copy first_name to full_name
//    strcat(full_name, " ");                       // concatenate full_name and a space
//    strcat(full_name, last_name);           // concatenate last_name to full_name
//    cout << "Your full name is " << full_name << endl;

//    cout << "-------------------------------" << endl;
//    cout << "Enter your full name: ";
//    cin >> full_name;

//    cout << "Your full name is " << full_name << endl;

   //getline() will end at 50 or when the user hits enter and won't terminate when the compiler hit's a space in the string
   cout << "Enter your full name: ";
   cin.getline(full_name, 50); /*__s – A character array in which to store the data. __n – Maximum number of characters to extract.*/
   cout << "Your full name is " << full_name << endl;

   cout << "-------------------------------" << endl;
   strcpy(temp, full_name);
   if(strcmp(temp, full_name) == 0) //the same 
       cout << temp << " and " << full_name << " are the same" << endl;
   else //not the same
       cout << temp << " and " << full_name << " are different" << endl;
       
   cout << "-------------------------------" << endl;
    
    //size_t is more correct version of unsigned
   for(size_t i{ 0 }; i < strlen(full_name); ++i) {
       if(isalpha(full_name[i])) //the compiler checks if the letter on whatever iter. is an alphabetical char and if it is make each element upper case
           full_name[i] = toupper(full_name[i]);
   }
   cout << "Your full name is " << full_name << endl;


   cout << "-------------------------------" << endl;
   //should return 0 if the strings are not the same.
   if(strcmp(temp, full_name) == 0) //temp is now uppercase so fullname and temp now should be different
       cout << temp << " and " << full_name << " are the same" << endl;
   else
       cout << temp << " and " << full_name << " are different" << endl;

   cout << "-------------------------------" << endl;
   cout << "Result of comparing " << temp << " and " <<  full_name <<  ": " << strcmp(temp, full_name) << endl; // 1
   cout << "Result of comparing " << full_name << " and " <<  temp <<  ": " << strcmp(full_name, temp) << endl; // -1 

    cout  << endl;
    return 0;
}
