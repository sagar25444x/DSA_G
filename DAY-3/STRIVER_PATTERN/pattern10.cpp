#include <iostream>
using namespace std;

void pattern10(int n)
{
    // Upper triangle
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Lower triangle
    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j < i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    pattern10(n);

    return 0;
}

/*
==================== README ====================

Pattern Type:
Half Diamond Pattern

Example Output (n = 5)

*
**
***
****
*****
****
***
**
*

------------------------------------------------
UPPER HALF TABLE

Row(i) | Formula (i+1) | Stars
--------------------------------
0      | 0+1 = 1       | *
1      | 1+1 = 2       | **
2      | 2+1 = 3       | ***
3      | 3+1 = 4       | ****
4      | 4+1 = 5       | *****

Logic:
Stars are increasing

Formula:
j < i+1

------------------------------------------------
LOWER HALF TABLE

Row(i) | Formula (i-1) | Stars
--------------------------------
5      | 5-1 = 4       | ****
4      | 4-1 = 3       | ***
3      | 3-1 = 2       | **
2      | 2-1 = 1       | *
1      | 1-1 = 0       | empty

Logic:
Stars are decreasing

Formula:
j < i-1

------------------------------------------------
FINAL LOGIC

Step 1:
Print increasing triangle

Step 2:
Print decreasing triangle

Upper  → increase stars
Lower  → decrease stars

------------------------------------------------
IMPORTANT NOTE

Wrong:
pattern10(5);

Why wrong?
User input is ignored.

Correct:
pattern10(n);

================================================
*/