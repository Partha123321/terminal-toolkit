#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: word_counter <file-path>\n";
        return 1;
    }

    std::ifstream file(argv[1], std::ios::binary);
    if (!file) {
        std::cerr << "Error: Could not open file: " << argv[1] << '\n';
        return 1;
    }

    std::size_t characters = 0;
    std::size_t words = 0;
    std::size_t lines = 0;
    bool inside_word = false;
    char ch;
    bool saw_anything = false;
    char last_char = '\0';

    while (file.get(ch)) {
        saw_anything = true;
        last_char = ch;
        ++characters;

        if (ch == '\n') {
            ++lines;
        }

        const bool whitespace =
            ch == ' ' || ch == '\n' || ch == '\t' ||
            ch == '\r' || ch == '\f' || ch == '\v';

        if (whitespace) {
            inside_word = false;
        } else if (!inside_word) {
            ++words;
            inside_word = true;
        }
    }

    if (file.bad()) {
        std::cerr << "Error: A problem occurred while reading the file.\n";
        return 1;
    }

    // Count a final non-empty line even if it has no trailing newline.
    if (saw_anything && last_char != '\n') {
        ++lines;
    }

    std::cout << "File: " << argv[1] << '\n'
              << "Lines: " << lines << '\n'
              << "Words: " << words << '\n'
              << "Characters (bytes): " << characters << '\n';

    return 0;
}
