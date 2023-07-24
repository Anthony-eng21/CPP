// Section 11
// Function Parmameters
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);
//Functions pass by value / make a copy never the original data is mutable unless...
void pass_by_value1(int num) { //local copy
    num = 1000; //only changes the value here locally never changes main() where we call
}

void pass_by_value2(string s) { //local copy
    s = "Changed"; //only changes the value here locally never changes main() where we call
}

void pass_by_value3(vector<string> v) { //local copy 
    v.clear();  // delete all vector elements. It doesnt really do it in mains's scope only in this here functions scope
}

void print_vector(vector<string> v) {
    for (auto s: v) 
        cout << s << " ";
    cout << endl;
}

int main() {
    int num {10};
    int another_num {20};

    cout << "num before calling pass_by_value1: " << num << endl; // 10
    pass_by_value1(num); // 10 it's copy of in scope int num{10}
    cout << "num after calling pass_by_value1: " << num << endl; // 10
    
    cout << "\nanother_num before calling pass_by_value1: " << another_num << endl; // 20
    pass_by_value1(another_num); // 20 copy of in scope int another_num 
    cout << "another_num after calling pass_by_value1: " << another_num << endl; // 20

    string name {"Frank"};
    cout << "\nname before calling pass_by_value2: " << name << endl;
    pass_by_value2(name);
    cout << "name after calling pass_by_value2: " << name << endl;

    vector<string> stooges {"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling pass_by_value3: ";
    print_vector(stooges);
    pass_by_value3(stooges);
    cout << "stooges after calling pass_by_value3: ";
    print_vector(stooges);
    
    cout << endl;
    return 0;
}

