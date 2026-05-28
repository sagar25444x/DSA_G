/*
==========================================================
                 1. WHAT IS A FUNCTION?
==========================================================

A function is a reusable block of code designed to
perform a specific task.

Why do we use functions?
------------------------
If we need to execute the same logic repeatedly in a
program, instead of rewriting the same code again and
again, we place that logic inside a function and call
it whenever needed.

Think of a function like:
Input → Process → Output

A function can:
1. Take input (Parameters)
2. Process the data
3. Return an output

----------------------------------------------------------
Core Characteristics of Functions
----------------------------------------------------------

1. main() Function
------------------
- Every C++ program starts execution from the main() function.
- It is also a normal function.
- It returns an integer value.
- return 0; means the program executed successfully.

2. Declaration & Definition
---------------------------
- A function is usually declared/defined outside main().

3. Execution
------------
- A function does not execute automatically.
- It only runs when it is explicitly called.

*/


/*
==========================================================
                2. SYNTAX OF A FUNCTION
==========================================================

General Syntax:

return_type function_name(parameter1, parameter2)
{
    // Function body (Processing)
    return value;
}

----------------------------------------------------------
Breakdown of Syntax
----------------------------------------------------------

1. Return Type
--------------
Defines what type of data the function returns.

Examples:
int     → Returns integer value
double  → Returns decimal value
char    → Returns a character
bool    → Returns true/false

If the function returns nothing:
Use void

2. Function Name
----------------
- Unique identifier for the function.
- Follows variable naming rules.

3. Parameters
--------------
- Inputs passed to the function.
- Used to perform operations dynamically.

*/


#include <iostream>
using namespace std;


/*
==========================================================
             3. BASIC EXAMPLE: VOID FUNCTION
==========================================================

A void function performs a task but does not return
any value.

Example:
Print "Hello World!"

*/

// Function Definition
void printHello()
{
    cout << "Hello World!\n";
}

int main()
{
    // Calling function first time
    printHello();

    // Calling function second time
    printHello();

    return 0;
}


/*
==========================================================
      4. FUNCTION WITH PARAMETERS & RETURN VALUE
==========================================================

A function can:
1. Take parameters (input)
2. Process data
3. Return a value

Example:
Function to add two numbers.

*/

#include <iostream>
using namespace std;

// Function Definition
int sum(int a, int b)
{
    int result = a + b;

    // Returning final result
    return result;
}

int main()
{
    // Calling function and storing result
    int output = sum(10, 20);

    cout << "The sum is: " << output << endl;

    return 0;
}


/*
==========================================================
         5. SCOPE & MEMORY MANAGEMENT
==========================================================

1. Local Variables
------------------
Variables declared inside a function are called
local variables.

Example:
If a variable is created inside a function,
it cannot be accessed outside that function.

Example:

void demo()
{
    int x = 10;   // Local variable
}

x cannot be used outside demo() function.


2. Call Stack
-------------
Whenever a function is called:

Step 1:
Memory is allocated for:
- Function arguments
- Local variables

Step 2:
The function executes.

Step 3:
After completion (return or closing bracket),
memory is automatically removed from the stack.

This process is managed by the Call Stack.

*/


/*
==========================================================
             6. SELF STUDY / HOMEWORK
==========================================================

Topic: Switch Statement

- Used for conditional logic.
- Easier alternative to multiple if-else conditions.
- Common in beginner programming.

Syntax:

switch(variable)
{
    case value1:
        // Code
        break;

    case value2:
        // Code
        break;

    default:
        // Code
}

*/


/*
==========================================================
         SWITCH STATEMENT EXAMPLE
==========================================================
*/

#include <iostream>
using namespace std;

int main()
{
    char grade = 'B';

    switch (grade)
    {
        case 'A':
            cout << "Excellent!\n";
            break;

        case 'B':
            cout << "Well done\n";
            break;

        case 'C':
            cout << "Keep it up\n";
            break;

        default:
            cout << "Invalid grade\n";
    }

    return 0;
}