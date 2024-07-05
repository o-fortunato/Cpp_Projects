#include <iostream>

//A program that lets you play Rock Paper Scissors

/*
The CPU picks one of the options, randomly
The user is asked what they want to play
The program compares the options

The program tells who won
The user is asked if they want to play again
    If yes, repeat program
    If no, the program stops
*/

int getUserInput() {
    std::cout << "What will you play? Choose a number:\n1 - Rock\n2 - Paper\n3 - Scissors\n\n";
    int userInput{};
    do {
        std::cin >> userInput;
        if (userInput < 1 || userInput > 3) {
            std::cout << "Pick a number between 1 and 3!\n";
        }
    } while (userInput < 1 || userInput > 3);
    return userInput;
}

int main()
{

    char playAgain{ 'n' };

    do {
        int userInput{ getUserInput() };
        int cpuInput{ rand() % 3 + 1 };

        switch (userInput) {
        case 1:
            switch (cpuInput) {
            case 1:
                std::cout << "User pick Rock!\nCPU Picks Rock!\n\nIt's a draw!";
                break;
            case 2:
                std::cout << "User pick Rock!\nCPU Picks Paper!\n\nCPU wins!";
                break;
            case 3:
                std::cout << "User pick Rock!\nCPU Picks Scissors!\n\nUser wins!";
                break;
            }
            break;
        case 2:
            switch (cpuInput) {
            case 1:
                std::cout << "User pick Paper!\nCPU Picks Rock!\n\nUser wins!";
                break;
            case 2:
                std::cout << "User pick Paper!\nCPU Picks Paper!\n\nIt's a draw!";
                break;
            case 3:
                std::cout << "User pick Paper!\nCPU Picks Scissors!\n\nCPU wins!";
                break;
            }
            break;
        case 3:
            switch (cpuInput) {
            case 1:
                std::cout << "User pick Scissors!\nCPU Picks Rock!\n\nCPU wins!";
                break;
            case 2:
                std::cout << "User pick Scissors!\nCPU Picks Paper!\n\nUser wins!";
                break;
            case 3:
                std::cout << "User pick Scissors!\nCPU Picks Scissors!\n\nIt's a draw!";
                break;
            }
            break;

        }
        do {
            std::cout << "Play again? y/n\n";
            std::cin >> playAgain;
        } while (playAgain != 'y' && playAgain != 'n');
    } while (playAgain == 'y');

    return 0;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
