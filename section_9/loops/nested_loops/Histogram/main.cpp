// Section 9
// Nested Loops - Histogram

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int num_items{};
    
    cout << "How many data items do you have? ";
    cin >> num_items; //user initially writes here.
    
    vector<int> data {}; //data vector we store and read data_items
    
    for (int i{1}; i<= num_items; ++i) {
        int data_item{};
        cout << "Enter data item " << i << ": ";
        cin >> data_item; //user writes / creates their data items
        data.push_back(data_item); //stores the data item in the vector after they write their data item
    }
    
    cout << "\nDisplaying Histogram" << endl;
    for (auto val: data) { //read from data vector where the user data_items are
        for (int i{1}; i<=val; ++i) {
            //additonal nifty control statements
            if (i % 5 == 0) // every i that is divisble by 5 print *
                cout << " * ";
            else
                cout << "#"; // else any other divisible print - dashes
        }    
        cout << endl;
    }

    cout <<  endl;
    return 0;
}

