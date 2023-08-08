#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// default args in c++ have to be on the tail-end when called and initialized
double calc_cost(double base_cost = 100.0, double tax_rate = 0.06, double shipping_cost = 3.50); // fn() prototype

void greeting(string name, string prefix = "Mrs.", string suffix = "");

void greeting(string name, string prefix, string suffix)
{
    cout << "Hello " << prefix +" " +  name + " " + suffix << endl;
}

double calc_cost(double base_cost, double tax_rate, double shipping_cost)
{
    return base_cost += (base_cost * tax_rate) + shipping_cost;
}

int main()
{
    double cost{0};
    cost = calc_cost(100, 0.08, 4.25); // overwrite the default here and

    cout << fixed << setprecision(2);
    cout << "Cost is: " << cost << endl;

    cost = calc_cost(100, 0.08); // here to to a higher tax_rate
    cout << "Cost is: " << cost << endl;

    cost = calc_cost(200);
    cout << "Cost is: " << cost << endl;

    cost = calc_cost();
    cout << "Cost is: " << cost << endl;

    greeting("Tiny doog", "Mr.");
    greeting("hailey doog", "Professor", "Von-Doom");
    greeting("hailey doog");

    cout << endl;
    return 0;
}