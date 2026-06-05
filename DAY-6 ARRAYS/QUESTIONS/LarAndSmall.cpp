#include <iostream>
#include <climits>
using namespace std;

int largest(int arr[], int size)
{
  int largest = INT_MIN;

  for (int i = 0; i < size; i++)
  {
    largest = max(arr[i], largest);
  }

  return largest;
}

int smallest(int arr[], int size)
{
  int smallest = INT_MAX;

  for (int i = 0; i < size; i++)
  {
    smallest = min(arr[i], smallest);
  }

  return smallest;
}

int main()
{
  int arr[] = {20, 10, 34, 21, 1};

  int size = sizeof(arr) / sizeof(int);

  cout << "Largest: " << largest(arr, size) << endl;
  cout << "Smallest: " << smallest(arr, size);

  return 0;
}

/*
==================== README ====================

Program Type:
Find Largest and Smallest Element

Array:
[20, 10, 34, 21, 1]

------------------------------------------------
LARGEST ELEMENT LOGIC

Formula Used:

largest = max(arr[i], largest)

Meaning:

Compare:
current element
VS
current largest

Whichever is bigger,
store it.

------------------------------------------------
LARGEST DRY RUN

i   | arr[i] | largest before | largest after
------------------------------------------------
0   | 20     | INT_MIN        | 20
1   | 10     | 20             | 20
2   | 34     | 20             | 34
3   | 21     | 34             | 34
4   | 1      | 34             | 34

Final Largest:
34

------------------------------------------------
SMALLEST ELEMENT LOGIC

Formula Used:

smallest = min(arr[i], smallest)

Meaning:

Compare:
current element
VS
current smallest

Whichever is smaller,
store it.

------------------------------------------------
SMALLEST DRY RUN

i   | arr[i] | smallest before | smallest after
--------------------------------------------------
0   | 20     | INT_MAX         | 20
1   | 10     | 20              | 10
2   | 34     | 10              | 10
3   | 21     | 10              | 10
4   | 1      | 10              | 1

Final Smallest:
1

------------------------------------------------
WHY INT_MIN and INT_MAX?

Largest:
Start with smallest possible integer

INT_MIN

Why?
Handles negative numbers also.

Example:
[-10, -5, -20]

------------------------------------------------
Smallest:
Start with biggest possible integer

INT_MAX

Why?
So smaller numbers can replace it.

------------------------------------------------
TIME COMPLEXITY

Largest  → O(n)
Smallest → O(n)

Total:
O(n)

Why?
Single traversal for each function.

------------------------------------------------
SPACE COMPLEXITY

O(1)

Why?
Only variables used.

------------------------------------------------
MEMORY TRICK

Largest:
max() = champion finder

Smallest:
min() = weakest finder

================================================
*/