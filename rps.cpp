#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // Seed for random number generation
    std::string choices[] = {"Rock", "Paper", "Scissors"};
    
    // User input
    int userChoice;
    std::cout << "Choose an option:\n";
    std::cout << "0: Rock\n1: Paper\n2: Scissors\n";
    std::cout << "Enter your choice: ";
    std::cin >> userChoice;

    if (userChoice < 0 || userChoice > 2) {
        std::cout << "Invalid choice. Please run the program again.\n";
        return 1;
    }

    // Computer choice
    int computerChoice = std::rand() % 3;

    // Display choices
    std::cout << "You chose: " << choices[userChoice] << "\n";
    std::cout << "Computer chose: " << choices[computerChoice] << "\n";

    // Determine winner
    if (userChoice == computerChoice) {
        std::cout << "It's a tie!\n";
    } else if ((userChoice == 0 && computerChoice == 2) || 
               (userChoice == 1 && computerChoice == 0) || 
               (userChoice == 2 && computerChoice == 1)) {
        std::cout << "You win!\n";
    } else {
        std::cout << "Computer wins!\n";
    }

    return 0;
}