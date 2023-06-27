#include <iostream>
#include <vector>

using namespace std;

int main()
{

    // declare 2 empty vects named vector1 and vector2

    vector<int> vector1;
    vector<int> vector2;

    // add 10 and 20 to vector 1 dynamically using .push_back()

    vector1.push_back(10);
    vector1.push_back(20);

    // display the elements in vector1 using the at() method as well as it's size using the .size()
    cout << "\nvector 1:" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;

    cout << "vector 1 contains " << vector1.size() << " elements" << endl;

    // add 100 and 200 to vector2 dynamically using push back;

    vector2.push_back(100);
    vector2.push_back(200);

    // display the elements in vector2 using the .at() and .size()
    cout << "\nvector2:" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "vector 2 contains " << vector2.size() << " elements" << endl;

    // declare an empty 2D vector called vector_2d
    // remember it's of type int remember multi-dim vecotrs are vectors of vecotrs >> notation below
    //makes copiesof what we are putting into the vecotr so when allocating the changes are copied and changed but not pasted to the orignal(shallow copies)

    vector<vector<int>> vector_2d;

    // add vector 1 to vector2_d dynamically
    // add vector 2 to vector2_d dynamically

    // storage is allocated and stored into our multi-dim vector
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "\nvector2d:" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    // change vector1.at(0) to 1000
    vector1.at(0) = 1000;

    // display the elements in vector_2d again using the at() method.

    cout << "\nvector2d:" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    //display the elements in vector1 

    cout << "\nvector1:" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "Vector 1 containts " << vector1.size() << " elements" << endl;

    return 0;
}