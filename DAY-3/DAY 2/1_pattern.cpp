// op-
// * * * * *                         
//     * * * * 
//         * * * 
//             * * 
//                 * 

#include <iostream>
using namespace std;

int main()
{
  int n = 5;
  // cin>>n;

  for (int i = 0; i < n; i++)
  {
    // spaces
    for (int j = 0; j < 2 * i; j++)
    {
      cout << "  ";
    }

    // stars
    for (int j = 0; j < n - i; j++)
    {
      cout << "* ";
    }

    cout << endl;
  }
  return 0;
}

/*
==================== README ====================

Pattern Type:
Right shifted inverted triangle

-----------------------------------------------
SPACE TABLE

Row(i) | Formula (2*i) | Spaces
--------------------------------
0      | 2*0 = 0       | 0
1      | 2*1 = 2       | 2
2      | 2*2 = 4       | 4
3      | 2*3 = 6       | 6
4      | 2*4 = 8       | 8

Logic:
Spaces are increasing
Formula = 2 * i

-----------------------------------------------
STAR TABLE

Row(i) | Formula (n-i) | Stars
--------------------------------
0      | 5-0 = 5       | * * * * *
1      | 5-1 = 4       | * * * *
2      | 5-2 = 3       | * * *
3      | 5-3 = 2       | * *
4      | 5-4 = 1       | *

Logic:
Stars are decreasing
Formula = n - i

-----------------------------------------------
FINAL LOGIC

Spaces = 2*i   (increase)
Stars  = n-i   (decrease)

Memory Trick:
Right shift → spaces increase
Shrinking shape → stars decrease

===============================================
*/