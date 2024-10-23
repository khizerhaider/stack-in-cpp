#include <iostream> // include the standard input-output stream library
using namespace std; // use the standard namespace
#include "stack.h" // include the header file for the stack class

int main() {
    stack s1; // create an instance of the stack class
    int option; // variable to store the user's menu option

    do {
        option = 0; // initialize option to 0
        int value = 0; // variable to store the value to push onto the stack

        // display the stack menu
        cout << "------------------- stack adt ------------------" << endl;   
        cout << "what operation do you want to perform? select option number. enter 0 to try again and 5 to exit." << endl;
        cout << "1. push()" << endl; // option to push an element onto the stack
        cout << "2. pop()" << endl; // option to pop the top element from the stack
        cout << "3. top()" << endl; // option to view the top element of the stack
        cout << "4. sizeofstack()" << endl; // option to check the size of the stack
        cout << "5. exit" << endl; // option to exit the program
        cout << "------------------- stack adt ------------------" << endl; 

        cin >> option; // take user input for the option

        // handle user selection with a switch statement
        switch (option) {
            case 0: // if the user enters 0, do nothing and go back to the start of the loop
                break;
            case 1: // push option
                cout << "enter an item to push in the stack" << endl; // prompt user for input
                cin >> value; // get the value from the user
                s1.push(value); // push the value onto the stack
                break;
            case 2: // pop option
                cout << "pop function called - popped value: " << s1.pop() << endl; // pop and display the value
                break;
            case 3: // top option
                cout << "top function called - value at top of stack: " << s1.Top() << endl; // display the top value
                break;
            case 4: // sizeofstack option
                cout << "size function called - size of stack: " << s1.sizeofstack() << endl; // display the size of the stack
                break;
            case 5: // exit option
                cout << "thank you for using our program" << endl; // display a thank you message
                continue; // continue to the end of the loop
                
            default: // handle invalid options
                cout << "enter proper option number" << endl; // prompt user to enter a valid option
        }
    } while (option != 5); // repeat the loop until the user chooses to exit

    return 0; // exit the program
}
