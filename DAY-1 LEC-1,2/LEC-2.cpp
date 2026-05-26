/*1. Structure of a C++ Program
Every standard C++ program requires boilerplate code to execute properly. C++ is a case-sensitive language [01:52].

The Boilerplate Code
When saving a C++ file, use the .cpp extension (e.g., code.cpp)*/

#include <iostream>  // Preprocessor directive to handle Input/Output streams
using namespace std; // Allows us to use standard identifiers like cout without std:: prefix

int main()
{ // Execution starts from the main function
  // Your code goes here
  return 0; // Signals successful execution
}

/*2. Input & Output Operations
C++ uses streams to handle input from the keyboard and output to the screen .

A. Output (cout)
To print text on the screen, use cout along with the insertion operator <<. Text must be wrapped inside double quotes.*/

#include <iostream>
using namespace std;

int main()
{
  cout << "Hello World!"; // Output Statement
  return 0;
}

/*B. Input (cin)
To take user inputs at runtime, use cin along with the extraction operator >>.*/
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age; // Takes input from user and stores it in variable 'age'
    cout << "Your age is: " << age << endl;
    return 0;
}

/*4. Operators in C++
Operators are symbols used to perform operations on variables and values .

A. Arithmetic Operators
Used to perform basic mathematical operations:

+ (Addition)

- (Subtraction)

* (Multiplication)

/ (Division)

% (Modulo - Returns the remainder of a division).

*/

int a = 10, b = 3;
int sum = a + b;       // 13
int diff = a - b;      // 7
int prod = a * b;      // 30
int div = a / b;       // 3 (Integer division drops decimal part)
int rem = a % b;       // 1 (Remainder)




/*
B. Unary Operators
Operators that operate on a single operand [01:15:14].

Increment (++): Increases value by 1.

Pre-increment (++a): Increments first, then uses value.

Post-increment (a++): Uses value first, then increments.

Decrement (--): Decreases value by 1.

Pre-decrement (--a): Decrements first, then uses value.

Post-decrement (a--): Uses value first, then decrements.
*/

int x = 5;
int y = ++x; // x becomes 6, y becomes 6

int p = 5;
int q = p++; // q becomes 5, p becomes 6
