// op-
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *

#include <iostream>
using namespace std;

int main() {

    int n = 5;

    // Upper Pyramid
    for(int i = 0; i < n; i++) {

        // spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }

        // stars
        for(int j = 0; j < 2 * i + 1; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    // Lower Pyramid
    for(int i = n - 1; i >= 0; i--) {

        // spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }

        // stars
        for(int j = 0; j < 2 * i + 1; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}

/*
==================== README ====================

Pattern Type:
Diamond Pattern

------------------------------------------------
UPPER HALF (Pyramid)

SPACE TABLE

Row(i) | Formula (n-i-1) | Spaces
----------------------------------
0      | 5-0-1 = 4       | 4
1      | 5-1-1 = 3       | 3
2      | 5-2-1 = 2       | 2
3      | 5-3-1 = 1       | 1
4      | 5-4-1 = 0       | 0

Logic:
Spaces decrease

Formula:
n - i - 1

------------------------------------------------
STAR TABLE

Row(i) | Formula (2*i+1) | Stars
----------------------------------
0      | 2*0+1 = 1       | *
1      | 2*1+1 = 3       | * * *
2      | 2*2+1 = 5       | * * * * *
3      | 2*3+1 = 7       | * * * * * * *
4      | 2*4+1 = 9       | * * * * * * * * *

Logic:
Stars increase (odd numbers)

Formula:
2*i + 1

------------------------------------------------
LOWER HALF (Reverse Pyramid)

SPACE TABLE

Row(i) | Formula (n-i-1) | Spaces
----------------------------------
4      | 5-4-1 = 0       | 0
3      | 5-3-1 = 1       | 1
2      | 5-2-1 = 2       | 2
1      | 5-1-1 = 3       | 3
0      | 5-0-1 = 4       | 4

Logic:
Spaces increase

------------------------------------------------
STAR TABLE

Row(i) | Formula (2*i+1) | Stars
----------------------------------
4      | 2*4+1 = 9       | * * * * * * * * *
3      | 2*3+1 = 7       | * * * * * * *
2      | 2*2+1 = 5       | * * * * *
1      | 2*1+1 = 3       | * * *
0      | 2*0+1 = 1       | *

Logic:
Stars decrease (odd numbers)

------------------------------------------------
FINAL LOGIC

Step 1:
Print normal pyramid

Step 2:
Print reverse pyramid

Upper  → stars increase
Lower  → stars decrease

Formula Used:

Spaces = n-i-1
Stars  = 2*i+1

------------------------------------------------
IMPORTANT NOTE

Current code prints middle row twice.

Reason:
Lower loop starts from:
i = n - 1

To avoid duplicate center:
Use:
for(int i = n - 2; i >= 0; i--)

================================================
*/