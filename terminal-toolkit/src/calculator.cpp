#include <iostream>
#include <limits>

int main() {
    double first = 0.0;
    double second = 0.0;
    char operation = '\0';

    std::cout << "Simple Calculator\n"
              << "Enter an expression (example: 12.5 * 4): ";

    if (!(std::cin >> first >> operation >> second)) {
        std::cerr << "Invalid input. Example: 12.5 * 4\n";
        return 1;
    }

    switch (operation) {
        case '+':
            std::cout << "Result: " << first + second << '\n';
            break;
        case '-':
            std::cout << "Result: " << first - second << '\n';
            break;
        case '*':
            std::cout << "Result: " << first * second << '\n';
            break;
        case '/':
            if (second == 0.0) {
                std::cerr << "Error: Division by zero is not allowed.\n";
                return 1;
            }
            std::cout << "Result: " << first / second << '\n';
            break;
        default:
            std::cerr << "Unsupported operator. Use +, -, *, or /.\n";
            return 1;
    }

    return 0;
}
