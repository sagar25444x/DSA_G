/*
==========================================================
              ARRAYS IN C++ (PART - 2)
==========================================================

Topics Covered:
1. sizeof() Operator
2. Array Memory Calculation
3. Accessing Elements
4. Taking Input in Array
5. Modifying Elements
6. Traversing Arrays

==========================================================
                1. sizeof() OPERATOR
==========================================================

sizeof() is used to find:

✔ Total memory size
✔ Single element size
✔ Length of array

It returns size in BYTES.

Syntax:

sizeof(variable)

*/

#include <iostream>
using namespace std;

int main()
{
  int arr[5] =
      {
          1,
          2,
          3,
          4,
          5};

  // Total size of array
  cout << "Total Array Size: "
       << sizeof(arr)
       << " bytes"
       << endl;

  return 0;
}

/*
Explanation:
------------

int takes 4 bytes memory.

Array size = 5

Formula:

Total Size =
Number of Elements × Size of Data Type

= 5 × 4

= 20 bytes

*/

/*
==========================================================
          FIND SINGLE ELEMENT SIZE
==========================================================

We can also find the memory
size of one element.

Syntax:

sizeof(arr[index])

*/

#include <iostream>
using namespace std;

int main()
{
  int arr[5] =
      {
          10,
          20,
          30,
          40,
          50};

  cout << "Single Element Size: "
       << sizeof(arr[0])
       << " bytes";

  return 0;
}

/*
Output:
--------
4 bytes

Because:
---------
int = 4 bytes

*/

/*
==========================================================
          FIND LENGTH OF ARRAY
==========================================================

Formula:

sizeof(arr)
/ sizeof(arr[0])

Why?

sizeof(arr)
-------------
Gives total array size.

sizeof(arr[0])
---------------
Gives size of one element.

Formula:

Total Size / One Element Size

*/

#include <iostream>
using namespace std;

int main()
{
  int arr[5] =
      {
          1,
          2,
          3,
          4,
          5};

  int length =
      sizeof(arr) / sizeof(arr[0]);

  cout << "Length: "
       << length;

  return 0;
}

/*
Calculation:
------------

sizeof(arr) = 20

sizeof(arr[0]) = 4

20 / 4 = 5

Array Length = 5

*/

/*
==========================================================
             2. ACCESSING ELEMENTS
==========================================================

Array elements are accessed
using INDEX.

Syntax:

arrayName[index]

Remember:
-----------
Index starts from 0.

*/

#include <iostream>
using namespace std;

int main()
{
  int arr[5] =
      {
          10,
          20,
          30,
          40,
          50};

  // Accessing elements
  cout << arr[0]
       << endl;

  cout << arr[2]
       << endl;

  cout << arr[4];

  return 0;
}

/*
Output:
--------
10
30
50

*/

/*
==========================================================
              3. TAKING INPUT
==========================================================

We use loops to fill arrays.

Why?

Because arrays contain
multiple values.

Syntax:

for loop

*/

#include <iostream>
using namespace std;

int main()
{
  int size = 5;

  int arr[5];

  cout << "Enter 5 Numbers: ";

  // Taking Input
  for (int i = 0;
       i < size;
       i++)
  {
    cin >> arr[i];
  }

  return 0;
}

/*
==========================================================
            4. TRAVERSING AN ARRAY
==========================================================

Traversing means:
-----------------
Visiting every element
one by one.

We mostly use:

for loop

*/

#include <iostream>
using namespace std;

int main()
{
  int arr[5] =
      {
          10,
          20,
          30,
          40,
          50};

  cout << "Array Elements: ";

  // Traversing Array
  for (int i = 0;
       i < 5;
       i++)
  {
    cout << arr[i]
         << " ";
  }

  return 0;
}

/*
==========================================================
           INPUT + OUTPUT TOGETHER
==========================================================

Real-world Example:

Take input from user
and print all elements.

*/

#include <iostream>
using namespace std;

int main()
{
  int size = 5;

  int arr[5];

  // Input
  cout << "Enter 5 Numbers: ";

  for (int i = 0;
       i < size;
       i++)
  {
    cin >> arr[i];
  }

  // Output
  cout << "Array Elements: ";

  for (int i = 0;
       i < size;
       i++)
  {
    cout << arr[i]
         << " ";
  }

  return 0;
}

/*
==========================================================
            5. MODIFYING ELEMENTS
==========================================================

Array values can be changed
using index.

Syntax:

arr[index] = newValue;

*/

#include <iostream>
using namespace std;

int main()
{
  int arr[5] =
      {
          10,
          20,
          30,
          40,
          50};

  /*
  Original Array:
  10 20 30 40 50
  */

  // Change third element
  arr[2] = 99;

  /*
  Updated Array:
  10 20 99 40 50
  */

  for (int i = 0;
       i < 5;
       i++)
  {
    cout << arr[i]
         << " ";
  }

  return 0;
}

/*
==========================================================
             COMPLETE PRACTICE PROGRAM
==========================================================

Task:
-----
1. Take input
2. Modify one element
3. Print updated array

*/

#include <iostream>
using namespace std;

int main()
{
  int size = 5;

  int arr[5];

  // Input
  cout << "Enter 5 Numbers: ";

  for (int i = 0;
       i < size;
       i++)
  {
    cin >> arr[i];
  }

  // Modify third element
  arr[2] = 99;

  // Print updated array
  cout << "Updated Array: ";

  for (int i = 0;
       i < size;
       i++)
  {
    cout << arr[i]
         << " ";
  }

  return 0;
}

/*
==========================================================
                IMPORTANT NOTES
==========================================================

1. sizeof(arr)
----------------
Returns total memory size.

2. sizeof(arr[0])
------------------
Returns size of one element.

3. Formula for Length:
-----------------------

sizeof(arr)
/ sizeof(arr[0])

4. Array Traversal:
-------------------
Mostly done using loops.

5. Array Modification:
-----------------------
Possible using index.

Example:

arr[2] = 100;

*/

/*
==========================================================
               PART - 2 END
==========================================================

Topics Completed:
✔ sizeof()
✔ Memory Calculation
✔ Array Length
✔ Accessing Elements
✔ Taking Input
✔ Traversing Arrays
✔ Input + Output
✔ Modifying Elements

Next:
PART - 3

(Largest/Smallest Element,
Linear Search,
Reverse Array)

==========================================================
*/