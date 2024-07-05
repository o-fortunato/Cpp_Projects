/*
Write a program that asks the user to enter their full name and their age.
As output, tell the user the sum of their age and the number of letters in their name
(use the std::string::length() member function to get the length of the string).

For simplicity, count any spaces in the name as a letter.

Sample output:

Enter your full name: John Doe
Enter your age: 32
Your age + length of name is: 40

Reminder: We need to be careful not to mix signed and unsigned values.
std::string::length() returns an unsigned value. 
If you’re C++20 capable, use std::ssize() to get the length as a signed value.
Otherwise, static_cast the return value of std::string::length() to an int.
*/

#include <iostream>
#include <string>

//Function that asks for full name
std::string getFullName() {
	std::cout << "Enter your full name: ";
	std::string fullName{};
	std::getline(std::cin >> std::ws, fullName);

	return fullName;
}

//Function that asks for age
int getAge() {
	std::cout << "Enter your age: ";
	int age{};
	std::cin >> age;

	return age;
}

// Sum Name + Age
int sumAgeName(int age, int nameLength) {
	return age + nameLength;
}

int main() {

	std::string fullName{ getFullName() };
	int age{ getAge() };
	//Output sum (age + letters in name) - Note: Count whitespace as letter
	std::cout << "Your age + length of name is: " << sumAgeName(age, static_cast<int>(fullName.length()));


	return 0;
}