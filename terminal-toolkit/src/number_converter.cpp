#include <iostream>
#include <limits>
#include <string>

std::string toBase(unsigned long long number, unsigned int base) {
    const std::string digits = "0123456789ABCDEF";

    if (number == 0) {
        return "0";
    }

    std::string result;
    while (number > 0) {
        result.insert(result.begin(), digits[number % base]);
        number /= base;
    }
    return result;
}

int main() {
    unsigned long long number = 0;

    std::cout << "Number Converter\n"
              << "Enter a non-negative decimal integer: ";

    if (!(std::cin >> number)) {
        std::cerr << "Invalid input. Please enter a non-negative integer.\n";
        return 1;
    }

    std::cout << "Binary:      " << toBase(number, 2) << '\n'
              << "Decimal:     " << number << '\n'
              << "Hexadecimal: " << toBase(number, 16) << '\n';

    return 0;
}
