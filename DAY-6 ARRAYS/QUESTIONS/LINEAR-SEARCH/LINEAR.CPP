#include <iostream>
using namespace std;

int linear(int arr[], int size, int target)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == target)
    {
      return i;
    }
  }

  return -1;
}

int main()
{
  int arr[] = {20, 10, 34, 21, 1};

  int size = sizeof(arr) / sizeof(int);

  int target = 21;

  int idx = linear(arr, size, target);

  if (idx != -1)
  {
    cout << "Target element found at index: " << idx;
  }
  else
  {
    cout << "Element not found";
  }

  return 0;
}

/*
==================== README ====================

Program Type:
Linear Search

Array:
[20, 10, 34, 21, 1]

Target:
21

------------------------------------------------
STEP BY STEP TABLE

i   | arr[i] | target | Found?
--------------------------------
0   | 20     | 21     | No
1   | 10     | 21     | No
2   | 34     | 21     | No
3   | 21     | 21     | YES

Return:
3

------------------------------------------------
LOGIC EXPLANATION

Linear Search means:

Check every element one by one.

If target found:
return index

Else:
return -1

------------------------------------------------
MAIN LOGIC

for(int i = 0; i < size; i++)
{
    if(arr[i] == target)
    {
        return i;
    }
}

return -1;

------------------------------------------------
WHY RETURN -1?

-1 means:

"Element not found"

Because array index
can never be negative.

------------------------------------------------
IMPORTANT MISTAKE YOU DID

Wrong:

else return -1;

Why wrong?

Program stops after
first mismatch.

Example:

20 != 21

Immediately:
return -1

Whole array never checked.

Correct:
Only return -1
AFTER loop finishes.

------------------------------------------------
TIME COMPLEXITY

Best Case:
O(1)

Target found at first index

Worst Case:
O(n)

Target at last index
or not present

------------------------------------------------
SPACE COMPLEXITY

O(1)

------------------------------------------------
MEMORY TRICK

"Search one by one,
if found return index,
else return -1"

================================================
*/