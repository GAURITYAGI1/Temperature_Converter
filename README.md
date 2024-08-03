# Temperature_Converter

The Temperature Converter is a C++ program that converts temperatures between Celsius, Fahrenheit, and Kelvin. It provides a simple command-line interface for users to input the temperature in one unit and convert it to the other two units.

## Features

- Convert temperatures between Celsius, Fahrenheit, and Kelvin.
- Handles invalid inputs gracefully.

## Prerequisites

- C++ compiler (e.g., g++, clang++)
- Basic knowledge of C++ and command-line operations

## Building the Program

To build the Temperature Converter program, follow these steps:

1. **Clone the Repository:**

   ```bash
   git clone https://github.com/yourusername/temperature-converter.git
   cd temperature-converter
   ```

2. **Compile the Program:**

   Use `g++` or any C++ compiler of your choice. The following command compiles the source file `main.cpp`:

   ```bash
   g++ -o temperature_converter main.cpp
   ```

   This will generate an executable file named `temperature_converter`.

## Running the Program

To run the Temperature Converter program, use the following command:

```bash
./temperature_converter
```

### Usage

After running the program, you will be prompted to enter a temperature value and specify the unit of the temperature you wish to convert. The program will then display the temperature in the other two units.

Example:

```
Enter temperature: 100
Enter unit (C for Celsius, F for Fahrenheit, K for Kelvin): C

100 Celsius is:
- 212 Fahrenheit
- 373.15 Kelvin
```

## Example

Here's an example interaction with the program:

```
$ ./temperature_converter
Enter temperature: 32
Enter unit (C for Celsius, F for Fahrenheit, K for Kelvin): F

32 Fahrenheit is:
- 0 Celsius
- 273.15 Kelvin
```

## Code Overview

The source code is located in the `main.cpp` file. It includes:

- Functions for converting between Celsius, Fahrenheit, and Kelvin.
- A main function that handles user input and displays the results.

## Contributing

If you would like to contribute to this project, please fork the repository and submit a pull request with your changes. For major changes or improvements, please open an issue to discuss your proposed changes before submitting a pull request.

Made With ❤💖!!
