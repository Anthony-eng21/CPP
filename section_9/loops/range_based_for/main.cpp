#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // io manipulation operators

using namespace std;

int main()
{
    // int scores[] {10, 20, 30};

    // //auto keyword => auto type hinting (compiler figures out the type)
    // for(auto score: scores)
    //     cout << (score * 2) << endl;

    // LOOPING OVER VECTORS (WEATHER EXAMPLE)
    //  vector<double> temperatures {87.9, 67.5, 68.3, 90.2};

    // double average_temp {};
    // double total {};

    // //helper var (never < 0)
    // unsigned forecast_size = temperatures.size();

    // for (auto temp: temperatures)
    //     total += temp;

    // if (forecast_size != 0)
    //     average_temp = total / forecast_size;

    // cout << fixed << setprecision(1); //round to the nearest value after the decimal point.

    // cout << "Average temp is: " << average_temp << endl;

    // Setting up with a "default" initializer list
    //  for (auto val: {1,2,3,4,5})
    //      cout << val << endl;

    // with C style strings
    //  for(auto c: "this is a test")
    //  if(c != ' ') //if the current character*(c) isn't a white space print it if not dont print it out
    //      cout << c << endl;

    // cout << endl;

    for (auto c : "this is a test")
        if(c == ' ')
        //\t is the escaped character regex whatever you call it for a TAB
            cout << "\t";
        else 
            cout << c;
            //this    is      a       test
    cout << endl;

    return 0;
}