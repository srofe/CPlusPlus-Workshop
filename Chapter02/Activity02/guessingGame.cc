#include <iostream>

int getRandomNumber(int min, int max);

int main() {
    bool isRunning = true;
    int guessCount = 0;
    int minNumber = 0;
    int maxNumber = 0;
    int randomNumber = 0;
    std::string input;

    std::cout << " **** Number Guessing Game\n\n";
    while (isRunning) {
        std::cout << "Enter the number of guesses: ";
        getline(std::cin, input);
        guessCount = std::stoi(input);

        std::cout << "Enter the minimum number: ";
        getline(std::cin, input);
        minNumber = std::stoi(input);

        std::cout << "Enter the maximum number: ";
        getline(std::cin, input);
        maxNumber = std::stoi(input);
        std::cout << std::endl;

        randomNumber = getRandomNumber(minNumber, maxNumber);

        for (int i = 0; i < guessCount; ++i) {
            std::cout << "Enter your guess: ";
            getline(std::cin, input);
            int guess = std::stoi(input);

            if (guess < randomNumber) {
                std::cout << "Your guess was too low. You have " << guessCount - i - 1 << " guesses remaining.\n";
            } else if (guess > randomNumber) {
                std::cout << "Your guess was too high. You have " << guessCount - i - 1 << " guesses remaining.\n";
            } else {
                std::cout << "Well done you guessed the number correctly: " << guess << std::endl;
                break;
            }
        }

        std::cout << "Enter 0 to exit, or any number to play again: ";
        getline(std::cin, input);
        int option = std::stoi(input);
        if (option == 0) {
            isRunning = false;
        } else {
            std::cout << std::endl;
        }
    }

    return 0;
}

int getRandomNumber(int min, int max) {
    srand((unsigned)time(0));
    return min + rand() % (max - min + 1);
}
