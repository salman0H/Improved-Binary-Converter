# Binary Number Representation Converter

## Description

This C++ program provides a comprehensive tool for converting and manipulating binary number representations. It supports various binary number encoding methods, including:

- Decimal to Binary conversion
- Binary to Decimal conversion
- One's Complement representation
- Two's Complement representation
- Signed Magnitude representation

The application allows users to input a binary number and automatically generates a detailed history of number transformations, saving the results to a text file.

## Features

- Interactive binary number input
- Multiple binary representation conversions
- Automatic history logging
- Support for variable-length binary numbers

## Prerequisites

- C++ Compiler (C++11 or later)
- Standard C++ Libraries

## Compilation

Compile the program using a C++ compiler:

```bash
g++ -std=c++11 binary_converter.cpp -o binary_converter
```

## Usage

1. Run the compiled executable
2. Enter the number of bits
3. Input each bit (0 or 1) when prompted
4. The program will:
   - Convert the binary number to decimal
   - Calculate One's Complement
   - Calculate Two's Complement
   - Calculate Signed Magnitude representation
   - Save all transformations to `History.txt`

## Example

```
Enter number of your Bit: 
4
Enter number 1 : 1
Enter number 2 : 0
Enter number 3 : 1
Enter number 4 : 1
```

## Output

The program generates two types of output:
- Console output showing various number representations
- `History.txt` file with detailed conversion details

## Limitations

- Supports positive binary numbers
- Maximum input length depends on system architecture
- Precision limited by integer representation

## Contributing

Contributions, issues, and feature requests are welcome. Feel free to check [issues page](your-github-repo-link/issues).

## License

[Specify your license here, e.g., MIT]

## Author

[Your Name]
