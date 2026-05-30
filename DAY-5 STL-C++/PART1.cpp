/*
==========================================================
         C++ STL (STANDARD TEMPLATE LIBRARY)
                     PART - 1
==========================================================

Topics Covered:
1. Introduction to STL
2. C++ Skeleton Review
3. Pairs
4. Vectors
5. Iterators
6. Traversing Vectors (Loops)

==========================================================
                1. INTRODUCTION TO STL
==========================================================

STL = Standard Template Library

It is a powerful library in C++ that provides:

1. Containers
   -> Used to store data
   Example:
   vector, stack, queue, set, map

2. Algorithms
   -> Used to perform operations
   Example:
   sort(), binary_search()

3. Iterators
   -> Used to access elements of containers

Why STL?

Without STL:
------------
We would have to write lengthy code
for common operations.

With STL:
---------
We can perform complex operations
in just a few lines of code.

Example:
sort(arr, arr + n);

Instead of manually writing sorting logic.

*/

/*
==========================================================
             2. C++ SKELETON REVIEW
==========================================================

Normally in C++, we import libraries
one by one.

Example:

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

But C++ provides a master header file:

<bits/stdc++.h>

This automatically includes almost
all standard libraries.

NOTE:
------
Mostly used in Competitive Programming.

Not recommended in interviews
or production-level software.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  cout << "STL Started!" << endl;

  return 0;
}

/*
==========================================================
           WHY "using namespace std;" ?
==========================================================

Without it:

std::cout << "Hello";

With it:

cout << "Hello";

It saves time and makes code shorter.

But remember:
It imports the entire standard namespace.

*/

/*
==========================================================
                    3. PAIRS
==========================================================

A pair is used to store TWO values
together.

It can store:
- Same data types
- Different data types

Syntax:

pair<dataType1, dataType2> variable_name;

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  // Creating a pair
  pair<int, int> p = {1, 3};

  // Accessing values
  cout << p.first << endl;
  cout << p.second << endl;

  return 0;
}

/*
==========================================================
              NESTED PAIRS (3+ VALUES)
==========================================================

A pair inside another pair.

Useful for storing multiple values.

Example:
{1, {3, 4}}

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  pair<int, pair<int, int>> nested =
      {
          1,
          {3, 4}};

  cout << nested.first << endl;
  cout << nested.second.first << endl;
  cout << nested.second.second << endl;

  return 0;
}

/*
==========================================================
                  ARRAY OF PAIRS
==========================================================

We can also create an array of pairs.

Example:

{
    {1,2},
    {2,5},
    {5,1}
}

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  pair<int, int> arr[] =
      {
          {1, 2},
          {2, 5},
          {5, 1}};

  // Accessing second element of 2nd pair
  cout << arr[1].second;

  return 0;
}

/*
==========================================================
                    4. VECTORS
==========================================================

A vector is a dynamic array.

Dynamic means:
---------------
Its size can increase or decrease
automatically.

Unlike arrays:
---------------
Arrays have fixed size.

Example:
int arr[5];

Vector size changes dynamically.

Syntax:

vector<dataType> variable_name;

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  // Empty vector
  vector<int> v;

  return 0;
}

/*
==========================================================
              INSERTING ELEMENTS IN VECTOR
==========================================================

1. push_back()
----------------
Adds element at the end.

2. emplace_back()
------------------
Faster than push_back()

Because:
It directly constructs object
inside memory.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v;

  // Insert elements
  v.push_back(1);
  v.push_back(5);

  v.emplace_back(10);

  // Printing vector
  for (int element : v)
  {
    cout << element << " ";
  }

  return 0;
}

/*
==========================================================
               VECTOR OF PAIRS
==========================================================

We can also store pairs inside vectors.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<pair<int, int>> vec;

  // Using push_back()
  vec.push_back({1, 2});

  // Using emplace_back()
  vec.emplace_back(5, 10);

  for (auto pairValue : vec)
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
             PRESETTING VECTOR SIZE
==========================================================

Syntax:

vector<int> v(size, value);

Example:
vector<int> v(5, 100);

Output:
{100, 100, 100, 100, 100}

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  // Size = 5
  // Default value = 100

  vector<int> v1(5, 100);

  for (auto element : v1)
  {
    cout << element << " ";
  }

  return 0;
}

/*
==========================================================
                  COPYING VECTOR
==========================================================

Deep Copy:
----------
Copies all values into another vector.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v1(5, 100);

  // Copying vector
  vector<int> v2(v1);

  for (auto element : v2)
  {
    cout << element << " ";
  }

  return 0;
}

/*
==========================================================
              ACCESSING VECTOR ELEMENTS
==========================================================

Methods:

1. v[index]
2. v.at(index)
3. v.back()

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

  // Access first element
  cout << v[0] << endl;

  // Safer access
  cout << v.at(0) << endl;

  // Last element
  cout << v.back() << endl;

  return 0;
}

/*
==========================================================
                   5. ITERATORS
==========================================================

Iterator:
---------
An iterator points to the memory
address of an element.

Think of iterator like a pointer.

Common Iterators:

v.begin()
-> Points to first element

v.end()
-> Points AFTER last element

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v =
      {
          10,
          20,
          30};

  // Iterator
  vector<int>::iterator it =
      v.begin();

  // Access value using *
  cout << *(it);

  return 0;
}

/*
==========================================================
                BEGIN() AND END()
==========================================================

v.begin()
---------
Points to first element

v.end()
-------
Points to memory location
RIGHT AFTER last element

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

  auto start = v.begin();
  auto ending = v.end();

  cout << *start << endl;

  return 0;
}

/*
==========================================================
             6. TRAVERSING VECTOR
==========================================================

Ways to Traverse:

1. Iterator Loop
2. For-each Loop

*/

/*
==========================================================
               ITERATOR LOOP
==========================================================

auto keyword:
--------------
Automatically detects data type.

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

  for (auto it = v.begin();
       it != v.end();
       it++)
  {
    cout << *it << " ";
  }

  return 0;
}

/*
==========================================================
               FOR-EACH LOOP
==========================================================

Short and easy way to print vector.

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

  for (auto element : v)
  {
    cout << element << " ";
  }

  return 0;
}

/*
==========================================================
                    PART - 1 END
==========================================================

Topics Completed:
✔ STL Introduction
✔ C++ Skeleton Review
✔ Pairs
✔ Nested Pair
✔ Array of Pairs
✔ Vector
✔ Vector of Pair
✔ Vector Copy
✔ Accessing Elements
✔ Iterators
✔ begin() and end()
✔ Traversing Vector

==========================================================
*/