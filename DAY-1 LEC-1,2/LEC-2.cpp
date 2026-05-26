/*1. Structure of a C++ Program
Every standard C++ program requires boilerplate code to execute properly. C++ is a case-sensitive language [01:52].

The Boilerplate Code
When saving a C++ file, use the .cpp extension (e.g., code.cpp)*/

#include <iostream> // Preprocessor directive to handle Input/Output streams
using namespace std; // Allows us to use standard identifiers like cout without std:: prefix

int main() { // Execution starts from the main function
    // Your code goes here
    return 0; // Signals successful execution
}





/*2. Input & Output Operations
C++ uses streams to handle input from the keyboard and output to the screen .

A. Output (cout)
To print text on the screen, use cout along with the insertion operator <<. Text must be wrapped inside double quotes.*/

#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!"; // Output Statement
    return 0;
}