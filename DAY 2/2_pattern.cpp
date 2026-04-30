// op- 
//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * * 

#include <iostream>
using namespace std;

int main()
{
  int n = 5;
  // cin>>n;

  for (int i = 0; i < n; i++)
  {
    // spaces  
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << "  ";
    }

    // stars  
    for (int j = 0; j < 2 * i + 1; j++)
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
Centered Pyramid

------------------------------------------------
SPACE TABLE

Row(i) | Formula (n-i-1) | Spaces
----------------------------------
0      | 5-0-1 = 4       | 4
1      | 5-1-1 = 3       | 3
2      | 5-2-1 = 2       | 2
3      | 5-3-1 = 1       | 1
4      | 5-4-1 = 0       | 0

Logic:
Spaces are decreasing
Formula = n - i - 1

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
Stars are increasing (odd numbers)
Formula = 2*i + 1

------------------------------------------------
FINAL LOGIC

Spaces = n-i-1   (decrease)
Stars  = 2*i+1   (increase, odd numbers)

Memory Trick:
Center align → spaces decrease
Growing pyramid → stars increase (odd pattern)

================================================
*/