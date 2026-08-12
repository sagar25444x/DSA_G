/*
==========================================================
                 C++ VECTORS (PART - 1)
==========================================================

Topics Covered:
1. What is a Vector?
2. Static Array vs Dynamic Vector
3. What is STL?
4. Vector as an STL Container
5. Vector Header File
6. Vector Declaration
7. Vector Initialization
8. Basic Vector Traversal

==========================================================
              1. WHAT IS A VECTOR?
==========================================================

A vector is a DYNAMIC ARRAY provided by
the C++ Standard Template Library (STL).

Simple Meaning:
----------------
A vector is similar to an array,
but its size can change during
program execution.

Array:
-------
Fixed Size

Vector:
--------
Dynamic Size

Example:

Array:
int arr[5];

The size is fixed at 5.

Vector:
vector<int> vec;

The vector can grow or shrink
during program execution.

==========================================================
              IMPORTANT FEATURES OF VECTOR
==========================================================

1. Dynamic Size
----------------
Vector can automatically
increase or decrease its size.

2. Contiguous Memory
--------------------
Vector stores elements in
continuous memory locations,
just like an array.

3. Fast Index Access
--------------------
Elements can be accessed
using index in O(1) time.

Example:

vec[0]
vec[1]
vec[2]

4. Part of STL
---------------
Vector is an STL container.

==========================================================
          2. STATIC ARRAY VS VECTOR
==========================================================

                ARRAY              VECTOR

Size:           Fixed              Dynamic

Example:        int arr[5]         vector<int> vec

Resize:         Not automatic      Automatic

Memory:         Fixed              Dynamic

Index Access:   O(1)               O(1)

STL:            No                 Yes

==========================================================
              EXAMPLE OF ARRAY
==========================================================
*/

#include <iostream>
using namespace std;

int main()
{
    // Static array
    int arr[5] =
    {
        10,
        20,
        30,
        40,
        50
    };

    /*
    Array size is fixed.

    We cannot automatically
    add another element to
    this array.
    */

    return 0;
}


/*
==========================================================
              EXAMPLE OF VECTOR
==========================================================
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Creating an empty vector
    vector<int> vec;

    /*
    Initially:

    Size = 0

    We can add elements later.
    */

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    /*
    Vector now contains:

    {10, 20, 30}
    */

    return 0;
}


/*
==========================================================
                  3. WHAT IS STL?
==========================================================

STL stands for:

Standard Template Library

STL provides ready-made
data structures and algorithms.

Think of STL as a TOOLBOX.

==========================================================
                     C++ STL
                        |
          +-------------+-------------+
          |                           |
          ▼                           ▼
    STL Containers              STL Algorithms
    (Store Data)                (Process Data)

    vector                     sort()
    list                       reverse()
    stack                      binary_search()
    queue                      min_element()
    set                        max_element()
    map

==========================================================
                 STL CONTAINERS
==========================================================

Some important STL containers:

1. vector
2. list
3. stack
4. queue
5. deque
6. set
7. map
8. unordered_set
9. unordered_map
10. priority_queue

Vector is one of the most
commonly used STL containers
in DSA.

==========================================================
             4. VECTOR HEADER FILE
==========================================================

To use vector, include:

#include <vector>

Example:
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;

    return 0;
}


/*
==========================================================
             USING bits/stdc++.h
==========================================================

In competitive programming,
we commonly use:

#include <bits/stdc++.h>

This includes most standard
C++ libraries automatically.

Example:
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> vec;

    return 0;
}


/*
==========================================================
             5. VECTOR DECLARATION
==========================================================

Basic Syntax:

vector<dataType> vectorName;

Example:

vector<int> vec;

This creates a vector of integers.

Other Examples:

vector<float> marks;

vector<double> prices;

vector<char> letters;

vector<string> names;

==========================================================
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Vector of integers
    vector<int> numbers;

    // Vector of characters
    vector<char> letters;

    // Vector of strings
    vector<string> names;

    // Vector of double values
    vector<double> prices;

    return 0;
}


/*
==========================================================
             6. VECTOR INITIALIZATION
==========================================================

There are several ways to
initialize a vector.

----------------------------------------------------------
METHOD 1: EMPTY VECTOR
----------------------------------------------------------

Syntax:

vector<int> vec;

Size = 0

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;

    cout << "Size: "
         << vec.size();

    return 0;
}


/*
==========================================================
        METHOD 2: VECTOR OF SPECIFIC SIZE
==========================================================

Syntax:

vector<int> vec(5);

Creates a vector of size 5.

Default value for int:

0

So:

{0, 0, 0, 0, 0}

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec(5);

    for (int i = 0;
         i < vec.size();
         i++)
    {
        cout << vec[i]
             << " ";
    }

    return 0;
}


/*
==========================================================
       METHOD 3: SIZE + SPECIFIC VALUE
==========================================================

Syntax:

vector<int> vec(5, 10);

Meaning:

Create 5 elements
and initialize each
element with 10.

Result:

{10, 10, 10, 10, 10}

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec(5, 10);

    for (int i = 0;
         i < vec.size();
         i++)
    {
        cout << vec[i]
             << " ";
    }

    return 0;
}


/*
==========================================================
             METHOD 4: INITIALIZER LIST
==========================================================

We can directly provide
values inside { }.

Syntax:

vector<int> vec =
{
    1, 2, 3, 4, 5
};

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec =
    {
        10,
        20,
        30,
        40,
        50
    };

    for (int i = 0;
         i < vec.size();
         i++)
    {
        cout << vec[i]
             << " ";
    }

    return 0;
}


/*
==========================================================
              METHOD 5: COPY VECTOR
==========================================================

We can create a new vector
using another vector.

Syntax:

vector<int> vec2(vec1);

This creates an independent
copy of vec1.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec1 =
    {
        10,
        20,
        30
    };

    // Copy vec1 into vec2
    vector<int> vec2(vec1);

    cout << "Vector 1: ";

    for (auto value : vec1)
    {
        cout << value
             << " ";
    }

    cout << endl;

    cout << "Vector 2: ";

    for (auto value : vec2)
    {
        cout << value
             << " ";
    }

    return 0;
}


/*
==========================================================
               7. ACCESSING VECTOR ELEMENTS
==========================================================

Vector elements can be accessed
using index.

Syntax:

vec[index]

Index starts from:

0

Example:

Vector:
{10, 20, 30, 40, 50}

Index:
 0   1   2   3   4

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec =
    {
        10,
        20,
        30,
        40,
        50
    };

    // First element
    cout << vec[0]
         << endl;

    // Third element
    cout << vec[2]
         << endl;

    // Last element
    cout << vec[4]
         << endl;

    return 0;
}


/*
==========================================================
             8. TRAVERSING A VECTOR
==========================================================

There are multiple ways to
traverse a vector.

Method 1:
---------
Normal for loop

Method 2:
---------
Range-based for loop

==========================================================
             METHOD 1: INDEX LOOP
==========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec =
    {
        10,
        20,
        30,
        40,
        50
    };

    for (int i = 0;
         i < vec.size();
         i++)
    {
        cout << vec[i]
             << " ";
    }

    return 0;
}


/*
==========================================================
         METHOD 2: RANGE-BASED FOR LOOP
==========================================================

Syntax:

for (int value : vec)

This automatically visits
every element.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec =
    {
        10,
        20,
        30,
        40,
        50
    };

    for (int value : vec)
    {
        cout << value
             << " ";
    }

    return 0;
}


/*
==========================================================
          RANGE-BASED LOOP USING auto
==========================================================

Instead of writing:

int value

We can write:

auto value

The compiler automatically
detects the data type.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec =
    {
        10,
        20,
        30,
        40,
        50
    };

    for (auto value : vec)
    {
        cout << value
             << " ";
    }

    return 0;
}


/*
==========================================================
       RANGE-BASED LOOP USING REFERENCE (&)
==========================================================

Using:

int &value

means value refers to
the original vector element.

Therefore, changes made to
value will change the
original vector.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec =
    {
        10,
        20,
        30,
        40,
        50
    };

    // Modify every element
    for (int &value : vec)
    {
        value *= 2;
    }

    /*
    Original:

    {10, 20, 30, 40, 50}

    After modification:

    {20, 40, 60, 80, 100}
    */

    for (auto value : vec)
    {
        cout << value
             << " ";
    }

    return 0;
}


/*
==========================================================
              IMPORTANT NOTES - PART 1
==========================================================

1. Vector is a dynamic array.

2. Vector is part of STL.

3. Vector stores elements in
   contiguous memory.

4. Vector provides O(1)
   index access.

5. Vector can automatically
   grow when elements are added.

6. Header file:

   #include <vector>

7. Empty vector:

   vector<int> vec;

8. Vector with size:

   vector<int> vec(5);

9. Vector with size + value:

   vector<int> vec(5, 10);

10. Direct initialization:

    vector<int> vec =
    {1, 2, 3, 4, 5};

11. Copy vector:

    vector<int> vec2(vec1);

12. Index starts from 0.

13. Range-based loop:

    for (auto value : vec)

14. Reference loop:

    for (auto &value : vec)

    Can modify original elements.

==========================================================
                  PART - 1 END
==========================================================

Topics Completed:
✔ What is Vector?
✔ Static Array vs Vector
✔ STL Introduction
✔ STL Containers
✔ Vector Declaration
✔ Vector Initialization
✔ Vector Indexing
✔ Vector Traversal
✔ Range-Based Loop
✔ Reference-Based Loop

Next:
PART - 2

Vector Functions:
-----------------
✔ size()
✔ capacity()
✔ push_back()
✔ pop_back()
✔ front()
✔ back()
✔ at()
✔ clear()
✔ empty()

==========================================================
*/