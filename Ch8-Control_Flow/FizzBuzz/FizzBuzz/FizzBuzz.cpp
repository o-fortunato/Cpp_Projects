/*
Fizz Buzz is a simple math game used to teach children about divisibility.
It is also sometimes used as an interview question to assess basic programming skills.

The rules of the game are simple: Starting at 1, and counting upward, replace any number divisible only by three with the word “fizz”,
any number only divisible by five with the word “buzz”, and any number divisible by both 3 and 5 with the word “fizzbuzz”.

Implement this game inside a function named fizzbuzz() that takes a parameter determining what number to count up to.
Use a for-loop and a single if-else chain (meaning you can use as many else-if as you like).

The output of fizzbuzz(15) should match the following:

1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz

Modify the FizzBuzz program you wrote in the previous quiz to add the rule that numbers divisible by seven should be replaced with “pop”.
Run the program for 150 iterations.

In this version, using an if/else chain to explicitly cover every possible combination of words will result in a function that is too long.
Optimize your function so only 4 if-statements are used: one for each of the non-compound words (“fizz”, “buzz”, “pop”), and one for the case where a number is printed.
*/

#include <iostream>

void fizzBuzz(int maxNum) {
	for (int i{ 1 }; i <= maxNum; i++) {
		bool printed{ false };
		if (i % 3 == 0) {
			std::cout << "fizz";
			printed = true;
		}
		if (i % 5 == 0) {
			std::cout << "buzz";
			printed = true;
		}
		if (i % 7 == 0) {
			std::cout << "pop";
			printed = true;
		}
		if(!printed) {
			std::cout << i;
		}
		std::cout << '\n';
	}
}

int main() {
	fizzBuzz(150);

	return 0;
}