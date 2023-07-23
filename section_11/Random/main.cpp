// Section 11
// Random Numbers

#include <iostream>
#include <cstdlib>      // required for rand()
#include <ctime>       // required for time()

using namespace std;

int main() {
      
    int random_number {};
    size_t count {10};           // number of random numbers to generate
    int min {1};                  // lower bound (inclusive) 
    int max {6};                 // upper bound (inclusive) | 123456 |
    
    // seed the random number generator !!
    // If you don't seed the generator you will get the same requence random numbers every run !Important
    
    cout << "RAND_MAX on my system is: " << RAND_MAX << endl; //RANDMAX is guaranteed to be at least 32767 ON ANY SYSTEM 
    srand(time(nullptr /*nullpointer => "" 0 etc*/)); // use current time as seed for random generator (standard)
    
    for (size_t i{1}; i<=count; ++i)  { //ten random numbers 
        random_number = rand() % max + min;     // generate a random number [min, max] % scale the numbers down to | 1 - 6 | inclusive 
        cout << random_number << endl;
    }

    cout  << endl;
    return 0;
}

