#include <iostream>
using namespace std;

// Function prototypes
void celsiusToFahrenheit(float celsius);
void celsiusToKelvin(float celsius);
void fahrenheitToCelsius(float fahrenheit);
void fahrenheitToKelvin(float fahrenheit);
void kelvinToCelsius(float kelvin);
void kelvinToFahrenheit(float kelvin);

int main() {
    int choice;
    float temperature;

    cout << "Temperature Converter\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Celsius to Kelvin\n";
    cout << "3. Fahrenheit to Celsius\n";
    cout << "4. Fahrenheit to Kelvin\n";
    cout << "5. Kelvin to Celsius\n";
    cout << "6. Kelvin to Fahrenheit\n";
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    if (choice < 1 || choice > 6) {
        cout << "Invalid choice. Please run the program again and choose a valid option.\n";
        return 1;
    }

    cout << "Enter the temperature: ";
    cin >> temperature;

    switch (choice) {
        case 1:
            celsiusToFahrenheit(temperature);
            break;
        case 2:
            celsiusToKelvin(temperature);
            break;
        case 3:
            fahrenheitToCelsius(temperature);
            break;
        case 4:
            fahrenheitToKelvin(temperature);
            break;
        case 5:
            kelvinToCelsius(temperature);
            break;
        case 6:
            kelvinToFahrenheit(temperature);
            break;
    }

    return 0;
}

// Function definitions
void celsiusToFahrenheit(float celsius) {
    float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    cout << celsius << " Celsius is equal to " << fahrenheit << " Fahrenheit.\n";
}

void celsiusToKelvin(float celsius) {
    float kelvin = celsius + 273.15;
    cout << celsius << " Celsius is equal to " << kelvin << " Kelvin.\n";
}

void fahrenheitToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    cout << fahrenheit << " Fahrenheit is equal to " << celsius << " Celsius.\n";
}

void fahrenheitToKelvin(float fahrenheit) {
    float celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    float kelvin = celsius + 273.15;
    cout << fahrenheit << " Fahrenheit is equal to " << kelvin << " Kelvin.\n";
}

void kelvinToCelsius(float kelvin) {
    float celsius = kelvin - 273.15;
    cout << kelvin << " Kelvin is equal to " << celsius << " Celsius.\n";
}

void kelvinToFahrenheit(float kelvin) {
    float celsius = kelvin - 273.15;
    float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    cout << kelvin << " Kelvin is equal to " << fahrenheit << " Fahrenheit.\n";
}
