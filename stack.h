#ifndef STACK_H // include guard to prevent multiple inclusions of this header file
#define STACK_H

class stack { // definition of the stack class
    private:
        int* top; // pointer to the top of the stack
        int arr[5]; // fixed-size array to hold stack elements
        int size; // current size of the stack

    public:
        stack(); // constructor to initialize the stack
        ~stack(); // destructor to clean up resources

        int push(int x); // function to add an element to the stack
        int pop(); // function to remove and return the top element of the stack
        int Top(); // function to return the top element without removing it
        int sizeofstack(); // function to return the current size of the stack
};

#endif // end of the include guard
