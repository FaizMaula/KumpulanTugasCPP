#include <iostream>

int getLargestPrime(int number) {
    if (number <= 1) {
        return -1; // Invalid input
    }

    for (int i = number - 1; i > 1; i--) {
        if (number % i == 0) {
            number = i;

        }

    }
    return number;
}

int main() {
    int number = 37  ; // Replace this with the desired input number
    int largestPrime = getLargestPrime(number);

    if (largestPrime == -1) {
        std::cout << "Invalid input. Please provide a number greater than 1." << std::endl;
    } else {
        std::cout << "Largest Prime Factor: " << largestPrime << std::endl;
    }

    return 0;
}

