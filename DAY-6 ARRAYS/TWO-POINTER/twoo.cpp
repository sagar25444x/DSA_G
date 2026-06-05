#include <iostream>
using namespace std;

int main()
{
  int arr[] = {4, 3, 2, 1};

  int size = 4;

  int st = 0;
  int end = size - 1;

  while (st < end)
  {
    swap(arr[st], arr[end]);

    st++;
    end--;
  }

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}

/*
==================== README ====================

Program Type:
Reverse Array

Original Array:
[4, 3, 2, 1]

Reversed Array:
[1, 2, 3, 4]

------------------------------------------------
TWO POINTER APPROACH

We use:

st   → start pointer
end  → end pointer

Logic:
Swap first and last element

Then move inward.

------------------------------------------------
STEP BY STEP TABLE

Initial Array:

[4, 3, 2, 1]

------------------------------------------------
Iteration 1

st = 0
end = 3

Swap:
4 ↔ 1

Array:
[1, 3, 2, 4]

Move pointers:

st++
end--

st = 1
end = 2

------------------------------------------------
Iteration 2

Swap:
3 ↔ 2

Array:
[1, 2, 3, 4]

Move pointers:

st = 2
end = 1

Loop ends

------------------------------------------------
MAIN LOGIC

while(st < end)
{
    swap(arr[st], arr[end]);

    st++;
    end--;
}

------------------------------------------------
WHY st < end ?

Wrong:

while(st <= end)

Problem:
Middle element swaps
with itself.

Example:

[1, 2, 3, 4, 5]

3 swaps with 3

Unnecessary operation.

Correct:

while(st < end)

------------------------------------------------
TIME COMPLEXITY

O(n)

Why?

Only half array traversed.

n/2 swaps

Still O(n)

------------------------------------------------
SPACE COMPLEXITY

O(1)

Why?

No extra array used.

In-place reversal.

------------------------------------------------
MEMORY TRICK

"Swap outer elements,
move inward."

Left ↔ Right

================================================
*/