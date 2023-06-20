//ctrl + shift + b run build task 
//right click on the exe that appears 
//click on the integrated terminal
// then type the path for the active executable we want to run 
// (.\main.exe)
#include <iostream>
using namespace std;

int main() {
    int num{100};
    cout << "Hello from proj2" << endl;
    cout << "enter your favorite number :" << endl;
    cin >> num;
    cout << "Your favorite number is " << num << endl;
    return 0;
}