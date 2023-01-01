#include <iostream>
#include <string>

#define GRADE_C_THRESHOLD 25
#define GRADE_B_THRESHOLD 50
#define GRADE_A_THRESHOLD 75

int main() {
    int value = 0;
    std::cout << "Please enter test score (0 - 100): ";
    std::cin >> value;

    if (value < GRADE_C_THRESHOLD) {
        std::cout << "Fail" << std::endl;
    } else if (value < GRADE_B_THRESHOLD) {
        std::cout << "Passe: Grade C" << std::endl;
    } else if (value < GRADE_A_THRESHOLD) {
        std::cout << "Passe: Grade B" << std::endl;
    } else {
        std::cout << "Passe: Grade A90" << std::endl;
    }

    return 0;
}
