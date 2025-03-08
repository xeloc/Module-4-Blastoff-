#include <iostream>

int main() {
    int startNumber;

    // Prompts the user to enter the starting number
    std::cout << "Enter a number to start the countdown: ";
    std::cin >> startNumber;

    // Countdown loop
    for (int i = startNumber; i > 0; --i) {
        std::cout << i << std::endl;
    }

    // End the countdown with "blast off!"
    std::cout << "Blast off!" << std::endl;

    return 0;
}