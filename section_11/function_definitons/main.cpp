// function definitions
// area of circle volume of a cylinder
#include <iostream>
#include <cmath>

using namespace std;
//Function Protos / Forward declarations (scope said "fuck it") later <std.h> including our own user made header files 
double calc_volume_cylinder(double radius, double height);
double calc_area_circle(double); //when returning the type is necessary name of param is optional
void area_circle(/*int*/); //error: too few arguments to function
void volume_cylinder();

const double pi = 3.14159;

int main()
{
    area_circle();     // pi * radius ** 2
    volume_cylinder(); // pi * radius ** 2 * height
    return 0;
}

double calc_volume_cylinder(double radius, double height)
{
    // return pi * pow(radius, 2) * height;
    return calc_area_circle(radius) * height; // provided helper() no need to repeat code 🤬
}

double calc_area_circle(double radius)
{
    return pi * pow(radius, 2); // pi * radius ** 2
}

void area_circle()
{
    double radius{};
    cout << "\nEnter the radius of a circle: ";
    cin >> radius;

    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder()
{
    double radius{};
    double height{};
    cout << "\nEnter the radius of a cylinder: ";
    cin >> radius;
    cout << "\nEnter the height of a cylinder: ";
    cin >> height;

    cout << "The volume of a cylinder with radius "
         << radius
         << " and height"
         << height
         << " is "
         << calc_volume_cylinder(radius, height) << endl;
}