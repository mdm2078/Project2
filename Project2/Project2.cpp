// Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath> // For power function
using namespace std;

// Function prototypes
void add(double a, double b);
void subtract(double a, double b);
void multiply(double a, double b);
void divide(double a, double b);
void power(double a, double b);

int main() {
	int operation;
	double num1, num2;
	char repeat;

	do {
		// Display the menu of operations
		cout << "Choose an operation:\n";
		cout << "1. Add\n";
		cout << "2. Subtract\n";
		cout << "3. Multiply\n";
		cout << "4. Dvide\n";
		cout << "5. Power\n";
		cout << "Enter the number of the operation:";
		cin >> operation;

		// Prompt for necessary input based on operation
		if (operation >= 1 && operation <= 5) {
			cout << "Enter the first number:";
			cin >> num1;
			cout << "Enter the second number:";
			cin >> num2;

		}

		// Perform the selected operation
		switch (operation) {
		case 1:
			add(num1, num2);
			break;
		case 2:
			subtract(num1, num2);
			break;
		case 3:
			multiply(num1, num2);
			break;
		case 4:
			divide(num1, num2);
			break;
		case 5:
			power(num1, num2);
			break;
		default:
			cout << "Invalid operation selected.\n";
		}

		// Ask if the user wants to perform another operation
		cout << "Do you want to perfom another operation? (y/n):";
		cin >> repeat;

	} while (repeat == 'y' || repeat == 'Y'); // Repeat if the user inputs 'y' or 'Y'

	cout << "Goodbye!\n";
	return 0;

}

// Function implementations
void add(double a, double b) {
	cout << "Result:" << a << "+" << b << "=" << (a + b) << endl;

}
void subtract(double a, double b) {
	cout << "Result:" << a << "-" << b << "=" << (a - b) << endl;

}

void multiply(double a, double b) {
	cout << "Result:" << aa << "*" << b << "=" << (a * b) << endl;


}

void divide(double a, double b) {
	if (b != 0) {
		cout << "Result:" << a << "/" << b << "=" << (a / b) << emdl;

	}
	else {
		cout << "Error: Division by zero is undefined.\n";
	}
}

void power(double a, double b) {
	cout << "Result:" << a << "^" << b << "=" << pow(a, b) << endl;


	return 0;

}