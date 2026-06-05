/*
==========================================================
              ARRAYS IN C++ (PART - 1)
==========================================================

Topics Covered:
1. Introduction to Data Structures
2. Why Arrays?
3. Characteristics of Arrays
4. Declaration & Initialization

==========================================================
        1. INTRODUCTION TO DATA STRUCTURES
==========================================================

What is a Data Structure?
--------------------------

A Data Structure is a special way
to organize, store, and manage data
efficiently inside memory.

Why do we need Data Structures?
--------------------------------

Real-world applications like:

✔ Websites
✔ Apps
✔ Games
✔ Banking Systems

all work with huge amounts of data.

To handle this data efficiently,
we use Data Structures.

Example:
---------
Imagine storing marks of students.

Without a proper structure,
managing data becomes difficult.

Types of Data Structures:
--------------------------

1. Linear Data Structure
-------------------------
Data is arranged sequentially
(one after another).

Examples:
✔ Array
✔ Linked List
✔ Queue
✔ Stack


2. Non-Linear Data Structure
-----------------------------
Data is arranged in hierarchical
(parent-child) structure.

Examples:
✔ Tree
✔ Graph

*/

/*
==========================================================
                WHY ARRAYS?
==========================================================

Problem:
---------
Suppose you want to store marks
of 5 students.

Without Array:

*/

#include <iostream>
using namespace std;

int main()
{
  int marks1 = 90;
  int marks2 = 85;
  int marks3 = 92;
  int marks4 = 78;
  int marks5 = 88;

  cout << marks1 << endl;
  cout << marks2 << endl;
  cout << marks3 << endl;
  cout << marks4 << endl;
  cout << marks5 << endl;

  return 0;
}

/*
Problem with this approach:
----------------------------

1. Too many variables
2. Hard to manage
3. Impossible for large data

Imagine storing marks
of 1000 students!

We would need:

marks1
marks2
marks3
...
marks1000

This becomes very difficult.

Solution:
-----------
ARRAY

Array allows us to store
multiple values using
ONE variable name.

*/

/*
==========================================================
                  2. WHAT IS AN ARRAY?
==========================================================

Definition:
------------

An Array is a collection of
same type of elements stored
inside contiguous memory locations.

Simple Meaning:
----------------
A single variable that can
store multiple values.

Example:

marks = {90, 85, 92, 78, 88}

Instead of using:

marks1
marks2
marks3
marks4
marks5

*/

/*
==========================================================
        3. CHARACTERISTICS OF ARRAYS
==========================================================

An array has 3 major properties:

1. Homogeneous Elements
2. Contiguous Memory Allocation
3. Zero Indexing

*/

/*
==========================================================
         A. HOMOGENEOUS ELEMENTS
==========================================================

Homogeneous means:

All elements must have
the SAME data type.

Example:

int arr[5];

Only integers allowed.

Correct:
---------
{1, 2, 3, 4, 5}

Wrong:
-------
{1, 'A', 4.5}

Different data types
cannot be mixed.

*/

/*
==========================================================
      B. CONTIGUOUS MEMORY ALLOCATION
==========================================================

Array elements are stored
in continuous memory locations.

Example:

int arr[5] = {10,20,30,40,50};

Suppose:

arr[0] stored at address 100

Then:

arr[1] → 104
arr[2] → 108
arr[3] → 112
arr[4] → 116

Why +4?

Because:

int takes 4 bytes memory.

Memory Representation:

+------+------|------|------|------+
|  10  |  20  |  30  |  40  |  50  |
+------+------|------|------|------+
   100    104    108    112    116

This continuous storage
makes arrays fast.

*/

/*
==========================================================
              C. ZERO INDEXING
==========================================================

Arrays in C++ start from index 0.

Example:

int arr[5] =
{
    10,
    20,
    30,
    40,
    50
};

Index:

Value:   10   20   30   40   50
Index:    0    1    2    3    4

Rule:
------
First Index = 0

Last Index = size - 1

Example:

Size = 5

Last index = 5 - 1 = 4

*/

/*
==========================================================
        4. DECLARATION OF ARRAY
==========================================================

Syntax:

dataType arrayName[size];

Example:

int marks[5];

Meaning:
---------
Array name = marks

Size = 5

Can store:
-----------
5 integer values

*/

#include <iostream>
using namespace std;

int main()
{
  // Declaration only
  int marks[5];

  /*
  Since values are not assigned,
  array contains garbage values.
  */

  return 0;
}

/*
==========================================================
       ARRAY INITIALIZATION
==========================================================

Initialization means:
----------------------
Giving values during declaration.

Syntax:

dataType arrayName[size] =
{
    values
};

*/

#include <iostream>
using namespace std;

int main()
{
  int marks[5] =
      {
          90,
          85,
          92,
          78,
          88};

  cout << marks[0]
       << endl;

  cout << marks[1]
       << endl;

  return 0;
}

/*
==========================================================
         IMPLICIT ARRAY SIZING
==========================================================

Compiler automatically calculates
size if values are given.

Example:

int arr[] = {1,2,3,4,5};

Compiler calculates:

Size = 5

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

  for (int i = 0; i < 5; i++)
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

1. Array stores SAME data type.

2. Array indexing starts from 0.

3. Arrays are stored in
continuous memory.

4. Fixed Size:
---------------
Array size cannot change
after declaration.

Example:

int arr[5];

You cannot make it:

arr[10]

later.

Use Vector for dynamic size.

*/

/*
==========================================================
               PART - 1 END
==========================================================

Topics Completed:
✔ Data Structures
✔ Why Arrays?
✔ Array Introduction
✔ Characteristics of Arrays
✔ Homogeneous Elements
✔ Contiguous Memory
✔ Zero Indexing
✔ Declaration
✔ Initialization
✔ Implicit Sizing

Next:
PART - 2

(sizeof(),
Traversing Arrays,
Input/Output,
Modifying Elements)

==========================================================
*/