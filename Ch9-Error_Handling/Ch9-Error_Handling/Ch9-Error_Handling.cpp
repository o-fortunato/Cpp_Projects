/*
Update your previous solution to handle invalid guesses(e.g.‘x’), out of bounds guesses(e.g. 0 or 101), or valid guesses that have extraneous characters(e.g. 43x).
Also handle the user entering extra characters when the game asks them whether they want to play again.

Hint: Write a separate function to handle the user inputting their guess(along with the associated error handling).
*/


#include <iostream>
#include "Random.h"

void ignoreLine() {
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int getGuess() {
	int guess{};
	while (true) {
		std::cin >> guess;
		//If guess is invalid (e.g.'x')
		if (!std::cin) {
			if (std::cin.eof()) // If the stream was closed
			{
				exit(0); // Shut down the program now
			}

			// Let's handle the failure
			std::cin.clear(); // Put us back in 'normal' operation mode
			ignoreLine();     // And remove the bad input
			std::cout << "Invalid Input. Please try again.\n";
			continue;
		}
		//If guess is out of bonds
		if (guess < 1 || guess>100) {
			std::cout << "Guess is out of bonds. Insert a value between 1 and 100.\n";
			ignoreLine();
			continue;
		}
		ignoreLine();
		return guess;
	}

	return guess;
}

// returns true if the user won, false if they lost
bool playHiLo(int guesses, int min, int max)
{
	std::cout << "Let's play a game. I'm thinking of a number between " << min << " and " << max << ". You have " << guesses << " tries to guess what it is.\n";
	int number{ Random::get(min, max) }; // this is the number the user needs to guess

	// Loop through all of the guesses
	for (int count{ 1 }; count <= guesses; ++count)
	{
		std::cout << "Guess #" << count << ": ";
		
		int guess{ getGuess() };

		if (guess > number)
			std::cout << "Your guess is too high.\n";
		else if (guess < number)
			std::cout << "Your guess is too low.\n";
		else // guess == number, so the user won
		{
			std::cout << "Correct! You win!\n";
			return true;
		}
	}

	// The user lost
	std::cout << "Sorry, you lose. The correct number was " << number << '\n';
	return false;
}

bool playAgain()
{
	// Keep asking the user if they want to play again until they pick y or n.
	while (true)
	{
		char ch{};
		std::cout << "Would you like to play again (y/n)? ";
		std::cin >> ch;
		ignoreLine();

		switch (ch)
		{
		case 'y': return true;
		case 'n': return false;
		}
	}
}

int main()
{
	constexpr int guesses{ 7 }; // the user has this many guesses
	constexpr int min{ 1 };
	constexpr int max{ 100 };

	do
	{
		playHiLo(guesses, min, max);
	} while (playAgain());

	std::cout << "Thank you for playing.\n";

	return 0;
}