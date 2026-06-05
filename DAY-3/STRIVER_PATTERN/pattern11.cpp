// op-
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {

        // Decide starting number
        int start;
        if (i % 2 == 0) {
            start = 1;
        }
        else {
            start = 0;
        }

        // Print pattern
        for (int j = 0; j <= i; j++) {
            cout << start << " ";

            // Toggle between 0 and 1
            if (start == 1) {
                start = 0;
            }
            else {
                start = 1;
            }
        }

        cout << endl;
    }

    return 0;
}

/*
==================== README ====================

Pattern Type:
Binary Triangle Pattern

------------------------------------------------
ROW TABLE

Row(i) | Numbers Printed
-------------------------
0      | 1
1      | 0 1
2      | 1 0 1
3      | 0 1 0 1
4      | 1 0 1 0 1

Logic:
Each row prints i+1 elements

Formula:
j <= i

------------------------------------------------
START VALUE TABLE

Row(i) | i % 2 | Start Value
------------------------------
0      | 0     | 1
1      | 1     | 0
2      | 0     | 1
3      | 1     | 0
4      | 0     | 1

Logic:
Even row → start with 1
Odd row  → start with 0

Formula:
if(i % 2 == 0)
    start = 1;
else
    start = 0;

------------------------------------------------
TOGGLE LOGIC

Current | Next
----------------
1       | 0
0       | 1

Logic:
After printing one number,
change it to opposite.

if(start == 1)
    start = 0;
else
    start = 1;

------------------------------------------------
FINAL LOGIC

1. Check row number
2. Decide starting value
   Even row → 1
   Odd row  → 0
3. Print till j <= i
4. Toggle after every print

Memory Trick:
Row decides start,
Toggle does the rest.

================================================
*/