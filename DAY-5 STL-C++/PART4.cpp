/*
==========================================================
         C++ STL (STANDARD TEMPLATE LIBRARY)
                     PART - 4
==========================================================

Topics Covered:
1. STL Algorithms
2. Sorting
3. Descending Sorting
4. Custom Comparator
5. Built-in Bit Functions
6. Permutations

==========================================================
                1. STL ALGORITHMS
==========================================================

Algorithms in STL help us perform
common operations in very few lines.

Examples:
----------
✔ Sorting
✔ Searching
✔ Counting
✔ Reversing

Most algorithms are available inside:

#include <algorithm>

But since we are using:

#include <bits/stdc++.h>

Everything is already included.

*/

/*
==========================================================
                    2. SORTING
==========================================================

sort() is one of the most important
STL functions.

Used to arrange data in:

✔ Ascending Order (Default)
✔ Descending Order

Syntax:

sort(start_iterator, end_iterator);

NOTE:
------
End iterator is EXCLUDED.

Range:
[start, end)

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[] =
      {
          1,
          5,
          3,
          2};

  // Sort array
  sort(arr, arr + 4);

  /*
  Sorted Array:
  {1, 2, 3, 5}
  */

  for (int i = 0; i < 4; i++)
  {
    cout << arr[i]
         << " ";
  }

  return 0;
}

/*
==========================================================
               SORTING A VECTOR
==========================================================

sort(v.begin(), v.end())

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v =
      {
          9,
          3,
          1,
          7,
          5};

  sort(v.begin(), v.end());

  /*
  Sorted:
  {1, 3, 5, 7, 9}
  */

  for (auto element : v)
  {
    cout << element
         << " ";
  }

  return 0;
}

/*
==========================================================
              SORT SPECIFIC RANGE
==========================================================

You can sort only
particular elements.

Syntax:

sort(start, end)

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[] =
      {
          9,
          8,
          7,
          2,
          1};

  // Sort index 2 → 4
  sort(arr + 2, arr + 5);

  /*
  Result:
  {9, 8, 1, 2, 7}
  */

  for (int element : arr)
  {
    cout << element
         << " ";
  }

  return 0;
}

/*
==========================================================
              SORT IN DESCENDING ORDER
==========================================================

Using:

greater<int>()

Syntax:

sort(start, end, greater<int>())

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v =
      {
          5,
          1,
          8,
          3};

  sort(v.begin(),
       v.end(),
       greater<int>());

  /*
  Result:
  {8, 5, 3, 1}
  */

  for (auto element : v)
  {
    cout << element
         << " ";
  }

  return 0;
}

/*
==========================================================
               3. CUSTOM COMPARATOR
==========================================================

Comparator:
-----------
A custom function used to define
our own sorting rules.

Why needed?
------------
When default sorting is not enough.

Example Problem:
----------------
Sort pairs such that:

1. Second element
   → Increasing order

2. If second elements same
   → First element in
     Descending order

*/

#include <bits/stdc++.h>
using namespace std;

// Custom Comparator Function
bool customComparator(
    pair<int, int> p1,
    pair<int, int> p2)
{
  // Increasing order of second
  if (p1.second < p2.second)
  {
    return true;
  }

  if (p1.second > p2.second)
  {
    return false;
  }

  /*
  If second elements equal
  */

  // Descending order of first
  if (p1.first > p2.first)
  {
    return true;
  }

  return false;
}

int main()
{
  pair<int, int> arr[] =
      {
          {1, 2},
          {2, 1},
          {4, 1}};

  sort(arr,
       arr + 3,
       customComparator);

  for (auto pairValue : arr)
  {
    cout << pairValue.first
         << " "
         << pairValue.second
         << endl;
  }

  return 0;
}

/*
==========================================================
         HOW CUSTOM COMPARATOR WORKS?
==========================================================

Comparator returns:

true
-----
Means:
"Correct order"

false
------
Means:
"Swap required"

Example:

(4,1) and (2,1)

Second values equal.

Compare first values:

4 > 2

Return true

Correct order:
(4,1), (2,1)

*/

/*
==========================================================
           4. BUILT-IN BIT FUNCTIONS
==========================================================

Useful for Bit Manipulation.

Function:

__builtin_popcount()

Purpose:
---------
Counts total number of 1s
(Set Bits) in binary.

Example:

7 in binary:

0111

Total set bits = 3

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int num = 7;

  int count =
      __builtin_popcount(num);

  cout << count;

  return 0;
}

/*
==========================================================
            POPCOUNT FOR LONG LONG
==========================================================

For long long numbers:

Use:

__builtin_popcountll()

(ll = long long)

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long number =
      12345678912345;

  int count =
      __builtin_popcountll(number);

  cout << count;

  return 0;
}

/*
==========================================================
                  5. PERMUTATIONS
==========================================================

Permutation:
-------------
Different arrangements
of elements.

STL Function:

next_permutation()

Purpose:
---------
Generates next
lexicographical arrangement.

IMPORTANT RULE:
----------------
Always SORT first.

Why?
-----
To generate ALL permutations.

Syntax:

next_permutation(
    start,
    end
)

Returns:
---------
true  → Next exists
false → No permutation left

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s = "123";

  // Always sort first
  sort(s.begin(),
       s.end());

  do
  {
    cout << s
         << endl;
  }

  while (
      next_permutation(
          s.begin(),
          s.end()));

  return 0;
}

/*
==========================================================
          OUTPUT OF PERMUTATION PROGRAM
==========================================================

123
132
213
231
312
321

*/

/*
==========================================================
                BONUS IMPORTANT STL
==========================================================

1. reverse()

Used to reverse data.

Example:

reverse(v.begin(), v.end());



2. max_element()

Returns iterator to
largest element.

Example:

*max_element(v.begin(), v.end());



3. min_element()

Returns iterator to
smallest element.

Example:

*min_element(v.begin(), v.end());



4. binary_search()

Checks if element exists.

Returns:
---------
true / false

Example:

binary_search(
    v.begin(),
    v.end(),
    10
);

NOTE:
------
Array/Vector MUST be sorted.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v =
      {
          10,
          20,
          30,
          40};

  // Reverse
  reverse(v.begin(),
          v.end());

  for (auto element : v)
  {
    cout << element
         << " ";
  }

  cout << endl;

  // Maximum Element
  cout << *max_element(
              v.begin(),
              v.end())
       << endl;

  // Minimum Element
  cout << *min_element(
              v.begin(),
              v.end())
       << endl;

  // Binary Search
  cout << binary_search(
      v.begin(),
      v.end(),
      20);

  return 0;
}

/*
==========================================================
                  PART - 4 END
==========================================================

Topics Completed:
✔ STL Algorithms
✔ Sorting
✔ Descending Sorting
✔ Custom Comparator
✔ Built-in Bit Functions
✔ __builtin_popcount()
✔ next_permutation()
✔ reverse()
✔ max_element()
✔ min_element()
✔ binary_search()

🎉 COMPLETE STL FINISHED
==========================================================
*/