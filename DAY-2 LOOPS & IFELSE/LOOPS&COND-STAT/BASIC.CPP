/*1. Conditional Statements
Conditional statements are used to make decisions in our code based on whether a given condition evaluates to true (yes) or false (no) [01:25].

A. The if and if-else Statements
Used to execute a block of code only if a specific condition is met. If the condition is false, the else block executes.*/

#include <iostream>
using namespace std;

int main() {
    int age = 20;

    if (age >= 18) {
        cout << "You are eligible to vote.\n";
    } else {
        cout << "You are not eligible to vote.\n";
    }
    return 0;
}


/*B. The if-else if-else Ladder
Used when we have multiple sequential conditions to check.*/
#include <iostream>
using namespace std;

int main() {
    int n = -5;

    if (n > 0) {
        cout << "n is positive\n"; [00:07:11]
    } else if (n < 0) {
        cout << "n is negative\n"; [00:06:59]
    } else {
        cout << "n is zero\n";
    }
    return 0;
}




/*2. Loops in C++
Loops are used to execute a block of code repeatedly until a specific condition becomes false.

A. while Loop
The while loop checks the condition before executing the loop body. Use it when the number of iterations is not known beforehand.*/

while (condition) {
    // code block
    // update expression
}

// Example: Print numbers from 1 to 5
#include <iostream>
using namespace std;

int main() {
    int count = 1;
    while (count <= 5) {
        cout << count << " ";
        count++;
    }
    return 0;
}


/*B. for Loop
The for loop groups initialization, condition, and update expressions together in a single line. It is ideal when you know exactly how many times the loop should run.

Syntax:

C++*/
for (initialization; condition; update) {
    // code block
}

// Example: Print numbers from 1 to 5

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    return 0;
}

/*C. do-while Loop
The do-while loop executes the code block at least once before checking the condition because the condition is evaluated at the end.

Syntax:

C++*/
do {
    // code block
} while (condition);



/*3. Nested Loops
A loop inside another loop is called a nested loop. They are commonly used for working with multi-dimensional spaces, matrices, or generating patterns [01:34:14].

Example:

C++*/
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 3; i++) { // Outer Loop
        for (int j = 1; j <= 3; j++) { // Inner Loop
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}