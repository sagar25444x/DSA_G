/*
==========================================================
              ARRAYS IN C++ (PART - 4)
==========================================================

Topics Covered:
1. Arrays in Functions
2. Pass By Reference in Arrays
3. Practice Questions
4. Time Complexity Summary
5. Important Notes

==========================================================
           1. ARRAYS IN FUNCTIONS
==========================================================

Arrays can be passed
inside functions.

Why?

Because writing everything
inside main() is not a good practice.

Functions make code:

✔ Reusable
✔ Cleaner
✔ Easy to Debug

Syntax:

functionName(arrayName, size);

Example:

printArray(arr, size);

*/

#include <iostream>
using namespace std;

// Function to print array
void printArray(
    int arr[],
    int size)
{
  for (int i = 0;
       i < size;
       i++)
  {
    cout
        << arr[i]
        << " ";
  }
}

int main()
{
  int nums[] =
      {
          10,
          20,
          30,
          40,
          50};

  int size = 5;

  printArray(
      nums,
      size);

  return 0;
}

/*
Output:
--------
10 20 30 40 50

*/

/*
==========================================================
       IMPORTANT CONCEPT: PASS BY REFERENCE
==========================================================

Normally variables are passed
by VALUE.

Meaning:
---------
Copy gets created.

Example:

x = 10

Function receives copy of x.

Original x stays unchanged.

But arrays behave differently.

Arrays are passed by REFERENCE.

Meaning:
---------
Original array is shared.

No copy gets created.

So:

Any modification inside function
changes original array.

*/

#include <iostream>
using namespace std;

// Function to modify array
void changeArray(
    int arr[],
    int size)
{
  // Changing first element
  arr[0] = 999;
}

int main()
{
  int nums[] =
      {
          10,
          20,
          30};

  int size = 3;

  changeArray(
      nums,
      size);

  /*
  Original array changed
  */

  for (int i = 0;
       i < size;
       i++)
  {
    cout
        << nums[i]
        << " ";
  }

  return 0;
}

/*
Output:
--------
999 20 30

Notice:
---------
Even though we changed
inside function,

original array changed too.

Because:

Arrays are passed
by reference.

*/

/*
==========================================================
       PASS BY VALUE VS PASS BY REFERENCE
==========================================================

PASS BY VALUE:
----------------
Copy is sent.

Original data unchanged.

PASS BY REFERENCE:
-------------------
Original data sent.

Changes affect original.

*/

#include <iostream>
using namespace std;

// Pass By Value
void changeValue(int x)
{
  x = 100;
}

int main()
{
  int number = 10;

  changeValue(number);

  cout << number;

  return 0;
}

/*
Output:
--------
10

Why unchanged?

Because:
---------
Only copy changed.

*/

#include <iostream>
using namespace std;

// Array Function
void changeArray(
    int arr[],
    int size)
{
  arr[0] = 100;
}

int main()
{
  int arr[] =
      {
          10,
          20,
          30};

  int size = 3;

  changeArray(
      arr,
      size);

  cout
      << arr[0];

  return 0;
}

/*
Output:
--------
100

Why changed?

Because:
---------
Original array passed.

*/

/*
==========================================================
              PRACTICE QUESTION - 1
==========================================================

Question:
----------
Take 5 numbers as input
and print their sum.

*/

#include <iostream>
using namespace std;

int main()
{
  int arr[5];

  int sum = 0;

  cout
      << "Enter 5 Numbers: ";

  for (int i = 0;
       i < 5;
       i++)
  {
    cin >> arr[i];

    sum += arr[i];
  }

  cout
      << "Sum = "
      << sum;

  return 0;
}

/*
==========================================================
              PRACTICE QUESTION - 2
==========================================================

Question:
----------
Find largest element
in array.

*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int arr[] =
      {
          2,
          15,
          8,
          99,
          23};

  int size = 5;

  int largest = INT_MIN;

  for (int i = 0;
       i < size;
       i++)
  {
    if (arr[i] > largest)
    {
      largest =
          arr[i];
    }
  }

  cout
      << "Largest = "
      << largest;

  return 0;
}

/*
==========================================================
              PRACTICE QUESTION - 3
==========================================================

Question:
----------
Search target element.

If found:
----------
Print index.

Otherwise:
-----------
Print Not Found.

*/

#include <iostream>
using namespace std;

int main()
{
  int arr[] =
      {
          10,
          20,
          30,
          40,
          50};

  int target = 30;

  int index = -1;

  for (int i = 0;
       i < 5;
       i++)
  {
    if (arr[i] == target)
    {
      index = i;
      break;
    }
  }

  if (index != -1)
  {
    cout
        << "Found at index: "
        << index;
  }
  else
  {
    cout
        << "Not Found";
  }

  return 0;
}

/*
==========================================================
            PRACTICE QUESTION - 4
==========================================================

Question:
----------
Reverse an array.

*/

#include <iostream>
using namespace std;

int main()
{
  int arr[] =
      {
          1,
          2,
          3,
          4,
          5};

  int size = 5;

  int start = 0;
  int end = size - 1;

  while (start < end)
  {
    swap(
        arr[start],
        arr[end]);

    start++;
    end--;
  }

  for (int i = 0;
       i < size;
       i++)
  {
    cout
        << arr[i]
        << " ";
  }

  return 0;
}

/*
==========================================================
         TIME COMPLEXITY SUMMARY
==========================================================

1. Traversing Array
--------------------
O(N)

2. Linear Search
-----------------
Best Case:
O(1)

Worst Case:
O(N)

3. Find Largest/Smallest
-------------------------
O(N)

4. Reverse Array
-----------------
O(N)

5. Accessing Element
---------------------
O(1)

Reason:
---------
Direct indexing.

Example:

arr[3]

Instant access.

*/

/*
==========================================================
              IMPORTANT NOTES
==========================================================

1. Arrays are FIXED SIZE.

2. Arrays store
same data type only.

3. Arrays use
Zero Indexing.

4. Arrays are stored
in contiguous memory.

5. Array passed to function
changes original array.

6. Traversing:
---------------
Mostly done using loops.

7. Reverse Array:
------------------
Two Pointer Technique.

8. Searching:
---------------
Linear Search
used for unsorted arrays.

*/

/*
==========================================================
             ARRAYS COMPLETE 🎉
==========================================================

Topics Completed:
✔ Array Basics
✔ Declaration
✔ Initialization
✔ sizeof()
✔ Traversing
✔ Input / Output
✔ Modification
✔ Largest Element
✔ Smallest Element
✔ Linear Search
✔ Reverse Array
✔ Two Pointer Technique
✔ Arrays in Functions
✔ Pass By Reference
✔ Practice Questions
✔ Time Complexity

Next Recommended Topic:
------------------------
1. Sorting
2. Binary Search
3. Strings
4. Recursion

==========================================================
*/