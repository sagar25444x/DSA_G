/*Problem Statement: Build a generic Calculator program in C++ [01:15:44]. The program should take two numbers as input from the user and output their:

Difference (-) 

Product (*) 

Division (/) ]

Modulo Remainder (%) 

*/

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    
    // Taking inputs
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    // Performing operations
    cout << "-----------------------------" << endl;
    cout << "Subtraction (-)    : " << (num1 - num2) << endl;
    cout << "Multiplication (*): " << (num1 * num2) << endl;
    
    if (num2 != 0) {
        cout << "Division (/)      : " << (num1 / num2) << endl;
        // Modulo can only be performed on integers
        cout << "Modulo (%)        : " << (static_cast<int>(num1) % static_cast<int>(num2)) << endl;
    } else {
        cout << "Division & Modulo by zero is not allowed!" << endl;
    }
    cout << "-----------------------------" << endl;

    return 0;
}