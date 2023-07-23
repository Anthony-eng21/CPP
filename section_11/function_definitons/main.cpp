// function definitions
// area of circle volume of a cylinder
#include <iostream>
#include <cmath>

using namespace std;

const double pi{3.14159};

double calc_area_circle(double radius)
{
    return pi * pow(radius, 2); // pi * radius ** 2
}

double calc_volume_cylinder(double radius, double height)
{
    // return pi * pow(radius, 2) * height;
    return calc_area_circle(radius) * height; // provided helper() no need to repeat code 🤬
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

int main()
{
    area_circle();     // pi * radius ** 2
    volume_cylinder(); // pi * radius ** 2 * height

    return 0;
}