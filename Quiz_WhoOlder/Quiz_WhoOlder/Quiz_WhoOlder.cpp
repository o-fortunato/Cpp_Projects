/*
Write a program that asks for the name and age of two people, then prints which person is older.

Here is the sample output from one run of the program:

Enter the name of person #1: John Bacon
Enter the age of John Bacon: 37
Enter the name of person #2: David Jenkins
Enter the age of David Jenkins: 44
David Jenkins (age 44) is older than John Bacon (age 37).
*/

#include <iostream>
#include <string>
#include <string_view>

//Function returns name
std::string getName(int personNr) {
	std::cout << "Enter the name of person #" << personNr << ": ";
	std::string name{};
	std::getline(std::cin >> std::ws, name);

	return name;
}

//function returns age
int getAge(std::string_view name) {
	std::cout << "Enter the age of " << name << ": ";
	int age{};
	std::cin >> age;

	return age;
}

int main() {
	std::string person1{ getName(1) };
	int agePerson1{ getAge(person1) };
	std::string person2{ getName(2) };
	int agePerson2{ getAge(person2) };

	(agePerson1 >= agePerson2) ? (std::cout << person1 << " (age " << agePerson1 << ") is older than " << person2 << " (age " << agePerson2 << ").") :
		(std::cout << person2 << " (age " << agePerson2 << ") is older than " << person1 << " (age " << agePerson1 << ").");

	return 0;
}