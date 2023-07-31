#include <iostream>
#include <cmath>
using namespace std;

// Function prototypes
double fahrenheit_to_celsius(double);
double fahrenheit_to_kelvin(double);

// Function to convert temperature from Fahrenheit to Celsius and Kelvin
void temperature_conversion(double fahrenheit_temperature) {
    // Call the conversion functions
    double celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);
    double kelvin_temperature = fahrenheit_to_kelvin(fahrenheit_temperature);

    // Display the converted temperatures
    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to "
         << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}

// Function to convert temperature from Fahrenheit to Celsius
double fahrenheit_to_celsius(double temperature) {
    return round(((temperature - 32) * 5) / 9);
} 

// Function to convert temperature from Fahrenheit to Kelvin
double fahrenheit_to_kelvin(double temperature) {
    return round(((temperature - 32) * 5) / 9 + 273); // To convert to Kelvin, add 273 to Celsius
}

int main() {
    double fahrenheit_temperature; // Variable to store user input

    // Prompt the user to enter the temperature in Fahrenheit
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit_temperature;

    // Call the function to convert and display the equivalent temperatures
    temperature_conversion(fahrenheit_temperature);

    return 0;
}
