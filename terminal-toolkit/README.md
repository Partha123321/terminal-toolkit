# Terminal Toolkit

A beginner-friendly collection of small command-line utilities written in C++.

The goal of this project is to practise C++ fundamentals while building useful terminal tools. Each utility is small, self-contained, and easy to extend.

## Tools included

1. **Word Counter** — counts words, lines, and characters in a text file.
2. **Number Converter** — converts non-negative integers between binary, decimal, and hexadecimal.
3. **Simple Calculator** — performs basic arithmetic operations.

## Requirements

- A C++17-compatible compiler, such as `g++`
- A terminal or command prompt

## Build

Compile a tool from the project root:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic src/word_counter.cpp -o word_counter
```

On Windows with MinGW, the output can be named `word_counter.exe`.

## Run

### Word Counter

```bash
./word_counter sample.txt
```

On Windows:

```powershell
.\word_counter.exe sample.txt
```

### Number Converter

```bash
g++ -std=c++17 -Wall -Wextra -pedantic src/number_converter.cpp -o number_converter
./number_converter
```

### Simple Calculator

```bash
g++ -std=c++17 -Wall -Wextra -pedantic src/calculator.cpp -o calculator
./calculator
```

## Project structure

```text
terminal-toolkit/
├── README.md
├── CONTRIBUTING.md
├── LICENSE
├── .gitignore
└── src/
    ├── calculator.cpp
    ├── number_converter.cpp
    └── word_counter.cpp
```

## Roadmap

- [ ] Add unit tests
- [ ] Add a temperature converter
- [ ] Add a file extension summary tool
- [ ] Add cross-platform build instructions
- [ ] Improve input validation

## Contributing

Contributions are welcome! See [CONTRIBUTING.md](CONTRIBUTING.md) for simple guidelines.

## License

This project is released under the MIT License. See [LICENSE](LICENSE).
