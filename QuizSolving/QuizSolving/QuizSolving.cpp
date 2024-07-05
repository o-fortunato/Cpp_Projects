// QuizSolving.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*

Write a single-file program (named main.cpp) that reads two separate integers from the user, adds them together, and then outputs the answer. The program should use three functions:

A function named “readNumber” should be used to get (and return) a single integer from the user.
A function named “writeAnswer” should be used to output the answer. This function should take a single parameter and have no return value.
A main() function should be used to glue the above functions together.

*/

/*
Modify the program you wrote in exercise #1 so that readNumber() and writeAnswer() live in a separate file called “io.cpp”. Use a forward declaration to access them from main().

If you’re having problems, make sure “io.cpp” is properly added to your project so it gets compiled.
*/

#include <iostream>

/*
Write the following program: The user is asked to enter 2 floating point numbers (use doubles).
The user is then asked to enter one of the following mathematical symbols: +, -, *, or /.
The program computes the answer on the two numbers the user entered and prints the results.
If the user enters an invalid symbol, the program should print nothing.

Example of program:

Enter a double value: 6.2
Enter a double value: 5
Enter +, -, *, or /: *
6.2 * 5 is 31
*/

double inputDouble() {
	std::cout << "Input number: ";
	double x{};
	std::cin >> x;

	return x;
}

int main() {
	//Input 2 doubles
	double x{ inputDouble()};
	double y{ inputDouble()};

	//Input symbol
	std::cout << "Now, input a single symbol (+, -, *, or /): ";
	char opSymbol{};
	std::cin >> opSymbol;
	//Calculate the expression
	//Print result
	//If invalid symbol, print nothing
	switch (opSymbol) {
	case '+':
		std::cout << x << " " << opSymbol << " " << y << " = " << x + y;
		break;
	case '-':
		std::cout << x << " " << opSymbol << " " << y << " = " << x - y;
		break;
	case '*':
		std::cout << x << " " << opSymbol << " " << y << " = " << x * y;
		break;
	case '/':
		std::cout << x << " " << opSymbol << " " << y << " = " << x / y;
		break;
	}

	return 0;
	
}