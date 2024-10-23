# Stack Implementation in C++

This repository contains a simple implementation of a stack data structure in C++. The stack is implemented using a fixed-size array, providing essential operations like push, pop, and checking the top element.

## Features
- **Push Operation**: Add an element to the top of the stack.
- **Pop Operation**: Remove and return the top element of the stack.
- **Top Operation**: Get the value of the top element without removing it.
- **Size Operation**: Retrieve the current size of the stack.
- **User-friendly Menu**: Interactive command-line interface for performing operations.

## Getting Started
To use this program, ensure you have a C++ compiler installed on your machine. You can use `g++` for compiling the code.

### Prerequisites
- A C++ compiler (e.g., g++)
- A text editor or IDE (e.g., Visual Studio Code, Code::Blocks)

### Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/khizerhaider/stack-in-cpp.git
2.Navigate to the project directory:
cd stack-in-cpp

USAGE
1.Compile the program:
g++ ./main.cpp ./stack.cpp ./stack.h -o program

2.Run the compiled program:
./program

3.Follow the on-screen prompts to perform stack operations. You can select an option by entering the corresponding number.

Options:

    Enter 1 to push an element onto the stack.
    Enter 2 to pop the top element from the stack.
    Enter 3 to view the top element of the stack.
    Enter 4 to check the current size of the stack.
    Enter 5 to exit the program.
Code Structure

    stack.h: Header file containing the stack class definition and declarations of its member functions.
    stack.cpp: Implementation file where the member functions of the stack class are defined.
    main.cpp: Contains the main function that drives the program and provides a user interface.
