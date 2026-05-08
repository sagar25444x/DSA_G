// op-
// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 

#include <iostream>
using namespace std;

int main()
{
  int n = 5;
  // cin>>n;

  for (int i = 0; i < n; i++)
  {
    // spaces
    for (int j = 0; j < i; j++)
    {
      cout << "  ";
    }

    // stars  
    for (int j = 0; j < 2 * (n - i) - 1; j++)
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
Inverted Centered Pyramid

------------------------------------------------
SPACE TABLE

Row(i) | Formula (i) | Spaces
--------------------------------
0      | 0           | 0
1      | 1           | 1
2      | 2           | 2
3      | 3           | 3
4      | 4           | 4

Logic:
Spaces are increasing
Formula = i

------------------------------------------------
STAR TABLE

Row(i) | Formula (2*(n-i)-1) | Stars
-------------------------------------
0      | 2*(5-0)-1 = 9       | * * * * * * * * *
1      | 2*(5-1)-1 = 7       | * * * * * * *
2      | 2*(5-2)-1 = 5       | * * * * *
3      | 2*(5-3)-1 = 3       | * * *
4      | 2*(5-4)-1 = 1       | *

Logic:
Stars are decreasing (odd numbers)
Formula = 2*(n - i) - 1

------------------------------------------------
FINAL LOGIC

Spaces = i              (increase)
Stars  = 2*(n-i) - 1   (decrease, odd numbers)

Memory Trick:
Reverse pyramid → spaces increase
Shrinking center → stars decrease (odd pattern)

================================================
*/