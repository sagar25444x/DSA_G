/*
==========================================================
               1. CONDITIONAL STATEMENTS
==========================================================

Conditional statements are used to make decisions
in our program.

They check whether a condition is:

TRUE  → Execute one block of code
FALSE → Execute another block of code

Example:
If age is greater than or equal to 18,
the user can vote.

*/


/*
==========================================================
             A. IF AND IF-ELSE STATEMENT
==========================================================

The if statement executes code only when
a condition becomes true.

The else block executes when the condition
becomes false.

Syntax:

if(condition)
{
    // Code executes if condition is true
}
else
{
    // Code executes if condition is false
}

*/


#include <iostream>
using namespace std;

int main()
{
    // Variable declaration
    int age = 20;

    // Checking voting eligibility
    if (age >= 18)
    {
        cout << "You are eligible to vote.\n";
    }
    else
    {
        cout << "You are not eligible to vote.\n";
    }

    return 0;
}


/*
==========================================================
          B. IF - ELSE IF - ELSE LADDER
==========================================================

Used when multiple conditions need to be checked.

Program flow:
1. First if condition is checked.
2. If false, else if condition is checked.
3. If all conditions are false,
   else block executes.

Syntax:

if(condition1)
{
    // Code
}
else if(condition2)
{
    // Code
}
else
{
    // Code
}

*/


#include <iostream>
using namespace std;

int main()
{
    int n = -5;

    // Check if number is positive
    if (n > 0)
    {
        cout << "n is positive\n";
    }

    // Check if number is negative
    else if (n < 0)
    {
        cout << "n is negative\n";
    }

    // If neither positive nor negative
    else
    {
        cout << "n is zero\n";
    }

    return 0;
}


/*
==========================================================
                    2. LOOPS IN C++
==========================================================

Loops are used to repeat a block of code
multiple times until a condition becomes false.

Types of Loops:
1. while loop
2. for loop
3. do-while loop

*/


/*
==========================================================
                  A. WHILE LOOP
==========================================================

The while loop checks the condition FIRST.

If condition = true
→ Loop executes

If condition = false
→ Loop stops

Used when number of iterations
is NOT known beforehand.

Syntax:

while(condition)
{
    // Code block

    // Update expression
}

*/


#include <iostream>
using namespace std;

int main()
{
    // Initialization
    int count = 1;

    // Loop runs until count <= 5
    while (count <= 5)
    {
        cout << count << " ";

        // Update expression
        count++;
    }

    return 0;
}


/*
==========================================================
                    B. FOR LOOP
==========================================================

The for loop combines:

1. Initialization
2. Condition
3. Update

in a single line.

Used when number of iterations
is known beforehand.

Syntax:

for(initialization; condition; update)
{
    // Code block
}

*/


#include <iostream>
using namespace std;

int main()
{
    // Print numbers from 1 to 5
    for (int i = 1; i <= 5; i++)
    {
        cout << i << " ";
    }

    return 0;
}


/*
==========================================================
                 C. DO-WHILE LOOP
==========================================================

The do-while loop executes the code
AT LEAST ONCE.

Why?

Because condition is checked AFTER
execution.

Syntax:

do
{
    // Code block
}
while(condition);

*/


#include <iostream>
using namespace std;

int main()
{
    int number = 1;

    do
    {
        cout << number << " ";

        number++;
    }
    while (number <= 5);

    return 0;
}


/*
==========================================================
                   3. NESTED LOOPS
==========================================================

A loop inside another loop is called
a Nested Loop.

Uses:
- Pattern printing
- Matrices
- Multi-dimensional problems

Outer Loop:
Controls number of rows

Inner Loop:
Controls number of columns

Example:
Print a 3 × 3 star pattern

* * *
* * *
* * *

*/


#include <iostream>
using namespace std;

int main()
{
    // Outer loop → Rows
    for (int i = 1; i <= 3; i++)
    {
        // Inner loop → Columns
        for (int j = 1; j <= 3; j++)
        {
            cout << "* ";
        }

        // Move to next line
        cout << "\n";
    }

    return 0;
}