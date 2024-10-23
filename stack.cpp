#include "stack.h" // include the header file for the stack class
#include <iostream> // include the standard input-output stream library

using namespace std; // use the standard namespace

// constructor for the stack class
stack::stack() {
    // initialize the stack array with zeros
    for(int i = 0; i < 5; i++) {
        arr[i] = 0; // set each element of the array to zero
    }
    top = &arr[0]; // assign the address of arr[0] to the top pointer
    size = 0; // initialize the size of the stack to zero
}

// destructor for the stack class
stack::~stack() {
    // no need to delete arr; for a fixed-size array
}

// function to return the current size of the stack
int stack::sizeofstack() {
    return size; // return the size of the stack
}

// function to push an element onto the stack
int stack::push(int x) {
    if(size == 0) { // check if the stack is empty
        *top = x; // assign the value x to the top element
        size++; // increment the size of the stack
    }
    else {
        top++; // move the top pointer to the next position
        *top = x; // assign the value x to the new top element
        size++; // increment the size of the stack
    }
    return 0; // return 0 to indicate success
}

// function to get the top element of the stack
int stack::Top() {
    if(size == 0) { // check if the stack is empty
        cout << "stack is empty" << endl; // print a message if the stack is empty
        return 0; // return 0 as there is no top element
    }
    return *top; // return the value of the top element
}

// function to pop an element from the stack
int stack::pop() {
    if(size == 0) { // check if the stack is empty
        cout << "stack is empty" << endl; // print a message if the stack is empty
        return 0; // return 0 as there is nothing to pop
    }
    else {
        cout << "popped element: " << *top << endl; // print the popped element
        int temp = *top; // store the value of the top element in a temporary variable
        *top = 0; // set the top element to zero
        top--; // move the top pointer back to the previous position
        size--; // decrement the size of the stack
        return temp; // return the popped element
    }
}
