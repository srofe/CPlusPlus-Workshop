#include <iostream>

#define CHILD_THRESHOLD 12
#define TEENAGER_THRESHOLD 19
#define YOUNG_ADULT_THRESHOLD 24
#define ADULT_THRESHOLD 69

#define CHILD "Child"
#define TEENAGER "Teenager"
#define YOUNG_ADULT "Young Adult"
#define ADULT "Adult"
#define ELDERLY "Elderly"

std::string group(int age);

int main() {
    std::string name;
    int age;

    std::cout << "Please enter your name: ";
    getline(std::cin, name);
    std::cout << "Please enter your age: ";
    std::cin >> age;

    std::cout << "Welcome " << name << std::endl;
    std::cout << "You are in the " << group(age) << " group." << std::endl;

    return 0;
}

std::string group(int age) {
    if (age <= CHILD_THRESHOLD) {
        return CHILD;
    } else if (age <= TEENAGER_THRESHOLD) {
        return TEENAGER;
    } else if (age <= YOUNG_ADULT_THRESHOLD) {
        return YOUNG_ADULT;
    } else if (age <= ADULT_THRESHOLD) {
        return ADULT;
    } else {
        return ELDERLY;
    }
}
