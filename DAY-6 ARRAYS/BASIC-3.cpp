/*
==========================================================
              ARRAYS IN C++ (PART - 3)
==========================================================

Topics Covered:
1. Largest Element in Array
2. Smallest Element in Array
3. Linear Search
4. Reverse Array
5. Two Pointer Technique
6. Time Complexity

==========================================================
        1. LARGEST ELEMENT IN ARRAY
==========================================================

Problem:
---------
Find the largest number
inside an array.

Approach:
----------
1. Create a variable largest
2. Store smallest possible value
3. Traverse array
4. Compare each element
5. Update largest if bigger value found

We use:

INT_MIN

Meaning:
---------
Smallest possible integer value.

Need Header File:

#include <climits>

*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int nums[] =
      {
          15,
          4,
          23,
          -8,
          42,
          0};

  int size = 6;

  // Smallest possible integer
  int largest = INT_MIN;

  // Traverse array
  for (int i = 0;
       i < size;
       i++)
  {
    if (nums[i] > largest)
    {
      largest = nums[i];
    }
  }

  cout << "Largest Value: "
       << largest;

  return 0;
}

/*
Output:
--------
Largest Value: 42

*/

/*
==========================================================
       SMALLEST ELEMENT IN ARRAY
==========================================================

Problem:
---------
Find the smallest value
inside an array.

Approach:
----------
1. Create smallest variable
2. Initialize with INT_MAX
3. Compare all elements
4. Update if smaller found

INT_MAX:
---------
Largest possible integer.

*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int nums[] =
      {
          15,
          4,
          23,
          -8,
          42,
          0};

  int size = 6;

  // Largest possible integer
  int smallest = INT_MAX;

  for (int i = 0;
       i < size;
       i++)
  {
    if (nums[i] < smallest)
    {
      smallest = nums[i];
    }
  }

  cout << "Smallest Value: "
       << smallest;

  return 0;
}

/*
Output:
--------
Smallest Value: -8

*/

/*
==========================================================
      FIND BOTH SMALLEST & LARGEST
==========================================================

Efficient Approach:
-------------------
Find both values
in a SINGLE loop.

*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int nums[] =
      {
          15,
          4,
          23,
          -8,
          42,
          0};

  int size = 6;

  int smallest = INT_MAX;
  int largest = INT_MIN;

  for (int i = 0;
       i < size;
       i++)
  {
    // Smallest check
    if (nums[i] < smallest)
    {
      smallest = nums[i];
    }

    // Largest check
    if (nums[i] > largest)
    {
      largest = nums[i];
    }
  }

  cout << "Smallest: "
       << smallest
       << endl;

  cout << "Largest: "
       << largest;

  return 0;
}

/*
==========================================================
              2. LINEAR SEARCH
==========================================================

Linear Search:
---------------
Searches element one by one
from start to end.

Flow:
------
Index 0 → Index 1 → Index 2
→ Index 3 ...

Until target found.

If found:
----------
Return index.

If not found:
--------------
Return -1

Time Complexity:
----------------
Best Case:
O(1)

Worst Case:
O(N)

*/

#include <iostream>
using namespace std;

// Function for Linear Search
int linearSearch(
    int arr[],
    int size,
    int target)
{
  for (int i = 0;
       i < size;
       i++)
  {
    // Element found
    if (arr[i] == target)
    {
      return i;
    }
  }

  // Element not found
  return -1;
}

int main()
{
  int data[] =
      {
          12,
          45,
          7,
          91,
          33,
          56};

  int size = 6;

  int target = 91;

  int resultIndex =
      linearSearch(
          data,
          size,
          target);

  if (resultIndex != -1)
  {
    cout << "Element Found At Index: "
         << resultIndex;
  }
  else
  {
    cout << "Element Not Found";
  }

  return 0;
}

/*
Output:
--------
Element Found At Index: 3

*/

/*
==========================================================
            3. REVERSE ARRAY
==========================================================

Problem:
---------
Reverse an array.

Example:

Original:
10 20 30 40 50

Reversed:
50 40 30 20 10

Efficient Method:
------------------
Two Pointer Technique

*/

/*
==========================================================
          TWO POINTER TECHNIQUE
==========================================================

We use:

start pointer
end pointer

Step 1:
---------
start = 0

end = size - 1

Step 2:
---------
Swap values

Step 3:
---------
Move pointers inward

start++
end--

Repeat until:

start >= end

Time Complexity:
----------------
O(N)

Space Complexity:
-----------------
O(1)

*/

#include <iostream>
using namespace std;

// Reverse Function
void reverseArray(
    int arr[],
    int size)
{
  int start = 0;
  int end = size - 1;

  while (start < end)
  {
    // Swapping values
    int temp = arr[start];

    arr[start] = arr[end];

    arr[end] = temp;

    // Move pointers
    start++;
    end--;
  }
}

int main()
{
  int targetArray[] =
      {
          10,
          20,
          30,
          40,
          50};

  int size = 5;

  reverseArray(
      targetArray,
      size);

  cout << "Reversed Array: ";

  for (int i = 0;
       i < size;
       i++)
  {
    cout
        << targetArray[i]
        << " ";
  }

  return 0;
}

/*
Output:
--------
50 40 30 20 10

*/

/*
==========================================================
            DRY RUN OF REVERSE ARRAY
==========================================================

Array:
10 20 30 40 50

Step 1:
---------
start = 0
end = 4

Swap:
10 ↔ 50

Array:
50 20 30 40 10

Step 2:
---------
start = 1
end = 3

Swap:
20 ↔ 40

Array:
50 40 30 20 10

Step 3:
---------
start = 2
end = 2

Condition false

STOP

Final:
-------
50 40 30 20 10

*/

/*
==========================================================
                IMPORTANT NOTES
==========================================================

1. INT_MIN
------------
Used for largest finding.

2. INT_MAX
------------
Used for smallest finding.

3. Linear Search
-----------------
Sequential searching.

4. Reverse Array
-----------------
Uses Two Pointer Technique.

5. Reverse Complexity
----------------------
Time = O(N)

Space = O(1)

*/

/*
==========================================================
               PART - 3 END
==========================================================

Topics Completed:
✔ Largest Element
✔ Smallest Element
✔ Min + Max Together
✔ Linear Search
✔ Reverse Array
✔ Two Pointer Technique
✔ Time Complexity

Next:
PART - 4

(Pass By Reference,
Array in Functions,
Practice Questions,
Important Notes)

==========================================================
*/