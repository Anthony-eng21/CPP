// Section 8
/*
    Increment operator ++
    Decrement operator --

    Increments or decrements its operand by 1
    Can be used with integers, floating point types and pointers

    Prefix   ++num
    Postfix      num++
    
    Don't overuse this operator!
    ALERT!!! Never use it twice for the same variable in the same statement!!
*/
#include <iostream>

using namespace std;

int main() {
    
    int counter {10};
    int result {0};
     
// Example 1 - simple increment
    // cout << "Counter : " << counter << endl;
    
    // counter = counter + 1; //incrementer logic behind the scenes
    // cout << "Counter : " << counter << endl;
  
    // counter++;
    // cout << "Counter : " << counter << endl;

    // ++counter; //same thing pre and post increment
    // cout << "Counter : " << counter << endl;

// Example 2 - preincrement
//    counter = 10;
//    result = 0;
   
//    cout << "Counter : " << counter << endl; //10
   
//    result = ++counter; // Note the pre increment baically result = counter (counter = counter + 1) (increments the counter before we use it(variable))
//    cout << "Counter : " << counter << endl; //10
//    cout << "Result : " << result << endl; //11

// Example 3 - post-increment
//    counter = 10;
//    result = 0;
   
//    cout << "Counter : " << counter << endl; //10
   
//    result = counter++; // Note the post increment(increments the counter after we use it(variable)) this becomes result = counter; counter = counter + 1;
//    cout << "Counter : " << counter << endl; //11
//    cout << "Result : " << result << endl; //10

// Example 4
//    counter = 10;
//    result = 0;

//    cout << "Counter : " << counter << endl; //10

//    result = ++counter + 10;  // Note the pre increment
       
//    cout << "Counter : " << counter << endl; //11
//    cout << "Result : " << result << endl; //21

// Example 5
   counter = 10;
   result = 0;

   cout << "Counter : " << counter << endl; //10

   result = counter++ + 10;  // Note the post increment
       
   cout << "Counter : " << counter << endl; //11
   cout << "Result : " << result << endl; //20

    cout << endl;
    return 0;
}