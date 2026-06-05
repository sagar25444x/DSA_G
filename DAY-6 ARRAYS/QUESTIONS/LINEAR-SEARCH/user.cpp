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
  int size;

  cout << "Enter size: ";
  cin >> size;

  int arr[size];

  cout << "Enter array elements: ";

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  int target;

  cout << "Enter target: ";
  cin >> target;

  int idx = linear(arr, size, target);

  if (idx != -1)
  {
    cout << "Target found at index: " << idx;
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
Linear Search (User Input)

------------------------------------------------
WHAT PROGRAM DOES?

1. Takes array size input
2. Takes array elements
3. Takes target element
4. Searches target in array
5. Returns index if found
6. Returns -1 if not found

------------------------------------------------
EXAMPLE INPUT

Enter size: 5

Enter array elements:
20 10 34 21 1

Enter target:
21

Output:
Target found at index: 3

------------------------------------------------
STEP BY STEP TABLE

Array:
[20, 10, 34, 21, 1]

Target:
21

i   | arr[i] | target | Match?
--------------------------------
0   | 20     | 21     | No
1   | 10     | 21     | No
2   | 34     | 21     | No
3   | 21     | 21     | YES

Return:
3

------------------------------------------------
LINEAR SEARCH LOGIC

Check every element one by one.

If target found:
return index

Else:
return -1

------------------------------------------------
MAIN FUNCTION LOGIC

Step 1:
Take size input

Step 2:
Create array

int arr[size];

Step 3:
Take array input

for loop

Step 4:
Take target input

Step 5:
Call function

linear(arr, size, target)

------------------------------------------------
FUNCTION LOGIC

for(int i=0; i<size; i++)
{
    if(arr[i] == target)
    {
        return i;
    }
}

return -1;

------------------------------------------------
WHY -1?

Because array index
can never be negative.

So:
-1 means

"Element not found"

------------------------------------------------
TIME COMPLEXITY

Best Case:
O(1)

Target at first position

Worst Case:
O(n)

Target at last position
or absent

------------------------------------------------
SPACE COMPLEXITY

O(1)

------------------------------------------------
MEMORY TRICK

"Check one by one,
if found → return index
if not → return -1"

================================================
*/