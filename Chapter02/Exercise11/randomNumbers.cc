#include <iostream>

int main() {
    bool isRunning = true;
    std::string input;
    int count = 0;

    std::cout << " **** Random Number Generator **** \n";
    while (isRunning) {
        std::cout << "Enter amount of numbers to generate, or 0 to exit: ";
        getline(std::cin, input);
        count = std::stoi(input);

        if (count == 0) {
            break;
        }
        srand((unsigned ) time(0));

        for (int i = 0; i < count; ++i) {
            std::cout << rand() % 10;
            if (i == count - 1) {
                continue;
            }
            std::cout << ", ";
        }
        std::cout << "\n\n";
    }

    return 0;
}
