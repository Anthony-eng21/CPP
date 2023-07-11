#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // for (int i {1}; i <= 10; ++i)
    //     cout << i << endl; // 1 - 10

    // for (int i {1}; i <= 10; i += 2) // 1 3 5 7 9 hits 11 then fails
    //     cout << i << endl;

    // for (int i {10}; i > 0; --i) //decrement down starting from 10 to 0 (0 is our bound. only prints to 1)
    //     cout << i << endl;
    // cout << "Blast off!" << endl;

    // for (int i{10}; i <= 100; i += 10)
    // {
    //     if (i % 15 == 0) //only prints values divisble by 15 in our 10s here / 30 60 90
    //     {
    //         cout << i << endl;
    //     }
    // }

    // j and i increment one on each iteration of the loop till we hit our bound that i cant be more than 5
    //  for (int i{1}, j{5}; i <= 5; ++i, ++j)
    //      cout << i << " + " << j << " = " << (i + j) << endl;

    // print out the i and every 10th item we make a new line break but in between each number there needs to be a space.
    //  for (int i{1}; i <= 100; ++i)
    //  {
    //      cout << i;
    //      if (i % 10 == 0) //set the row for 10 ints in a row. i can change to whatever value i.e 5
    //          cout << endl;
    //      else
    //          cout << " ";
    //  }

    //Same Same but different with the conditional operator
    // for (int i{1}; i <= 100; ++i)
    // {
    //     cout << i << (i % 10 == 0 ? "\n" : " "); //oneliner🤯
    // }

    //looping over vectors
    // nums.size returns unsigned ints (unsigned == strictly positve)
    
    vector<int> nums {10,20,30,40,50};
                        //bound
    for (unsigned i{0}; i < nums.size(); ++i)
        cout << nums[i] << endl;

    cout << endl;
    return 0;
}
