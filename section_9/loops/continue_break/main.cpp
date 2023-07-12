#include <iostream>
#include <vector>
//CONTINUE AND BREAK
using namespace std;
/*break is used to completely exit a loop, while continue is used to skip the remaining code in the current iteration and move to the next iteration of the loop.
 These keywords provide control over the execution flow within loops, allowing you to fine-tune the behavior based on specific conditions or requirements.*/
int main() {
    // for (int i = 1; i <= 10; i++) {
    //     // Check if the number is divisible by 3
    //     if (i % 3 == 0) {
    //         // Skip the current iteration and continue to the next iteration
    //         continue;
    //     }
        
    //     std::cout << i << " ";
        
    //     // Check if the number is greater than 7
    //     if (i > 6) {
    //         // Terminate the loop completely
    //         break;
    //     }
    // }
    
    // std::cout << std::endl;
    vector<int> values {1, -1, 2, 3, -1, -99, 7, 8, 10};

    for(auto value: values) {
        if(value == -99)
            break;
        else if(value == -1)
            continue;
        else 
            cout << value << endl;
    }

    return 0;
}