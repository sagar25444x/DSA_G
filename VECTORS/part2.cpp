/*
==========================================================
                 C++ VECTORS (PART - 2)
==========================================================

Topics Covered:
1. size()
2. capacity()
3. push_back()
4. pop_back()
5. front()
6. back()
7. at()
8. clear()
9. empty()
10. size vs capacity
11. Capacity Growth

==========================================================
                 1. size()
==========================================================

size() returns the CURRENT number of
elements stored inside the vector.

Syntax:

vec.size();

Example:

Vector:
{10, 20, 30}

size = 3

Time Complexity:
----------------
O(1)

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
        30
    };

    cout << "Size: "
         << vec.size();

    return 0;
}


/*
==========================================================
                 2. capacity()
==========================================================

capacity() tells us how many elements
the vector can currently store before
it needs to allocate new memory.

Syntax:

vec.capacity();

IMPORTANT:
----------
size and capacity are NOT the same.

size:
------
Number of elements currently stored.

capacity:
----------
Total storage currently available.

Time Complexity:
----------------
O(1)

==========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    cout << "Size: "
         << vec.size()
         << endl;

    cout << "Capacity: "
         << vec.capacity();

    return 0;
}


/*
==========================================================
              3. push_back()
==========================================================

push_back() adds a new element
at the END of the vector.

Syntax:

vec.push_back(value);

Example:

Before:
{10, 20}

vec.push_back(30);

After:
{10, 20, 30}

Time Complexity:
----------------
O(1) amortized

==========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;

    // Add elements at the end
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    for (auto value : vec)
    {
        cout << value
             << " ";
    }

    return 0;
}


/*
==========================================================
                4. pop_back()
==========================================================

pop_back() removes the LAST element
from the vector.

Syntax:

vec.pop_back();

Example:

Before:
{10, 20, 30}

After pop_back():

{10, 20}

IMPORTANT:
----------
pop_back() does not return
the removed element.

Time Complexity:
----------------
O(1)

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
        30
    };

    // Remove last element
    vec.pop_back();

    for (auto value : vec)
    {
        cout << value
             << " ";
    }

    return 0;
}


/*
==========================================================
                  5. front()
==========================================================

front() returns the FIRST element
of the vector.

Syntax:

vec.front();

Example:

Vector:
{10, 20, 30}

front() = 10

Time Complexity:
----------------
O(1)

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
        30
    };

    cout << "First Element: "
         << vec.front();

    return 0;
}


/*
==========================================================
                   6. back()
==========================================================

back() returns the LAST element
of the vector.

Syntax:

vec.back();

Example:

Vector:
{10, 20, 30}

back() = 30

Time Complexity:
----------------
O(1)

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
        30
    };

    cout << "Last Element: "
         << vec.back();

    return 0;
}


/*
==========================================================
                     7. at()
==========================================================

at(index) is used to access
an element at a particular index.

Syntax:

vec.at(index);

Example:

vec.at(2);

Returns the element
at index 2.

IMPORTANT:
----------
at() performs bounds checking.

If the index is invalid,
it throws an exception.

Time Complexity:
----------------
O(1)

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
        40
    };

    cout << vec.at(2);

    return 0;
}


/*
==========================================================
              vec[index] VS vec.at(index)
==========================================================

Both can be used to access
vector elements.

Example:

vec[2]

vec.at(2)

Difference:

vec[2]
-------
Does not perform bounds checking.

vec.at(2)
----------
Performs bounds checking.

For normal DSA problems,
vec[index] is commonly used.

==========================================================
*/


/*
==========================================================
                    8. clear()
==========================================================

clear() removes ALL elements
from the vector.

Syntax:

vec.clear();

Example:

Before:
{10, 20, 30}

After:

{}

Size becomes:

0

IMPORTANT:
----------
clear() removes elements,
but capacity may remain allocated.

Time Complexity:
----------------
O(N)

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
        30
    };

    vec.clear();

    cout << "Size: "
         << vec.size();

    return 0;
}


/*
==========================================================
                    9. empty()
==========================================================

empty() checks whether
the vector contains any elements.

Returns:

true
-----
If vector is empty.

false
------
If vector contains elements.

Syntax:

vec.empty();

Time Complexity:
----------------
O(1)

==========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;

    if (vec.empty())
    {
        cout << "Vector is Empty";
    }
    else
    {
        cout << "Vector is Not Empty";
    }

    return 0;
}


/*
==========================================================
            10. SIZE VS CAPACITY
==========================================================

This is one of the MOST IMPORTANT
vector concepts.

size:
------
Number of elements currently
stored in the vector.

capacity:
----------
Number of elements that can be
stored in the currently allocated
memory before reallocation.

Example:

Vector:

{10, 20, 30}

Suppose:

size = 3
capacity = 4

Then:

3 elements are being used.

1 additional space is available.

==========================================================
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    cout << "Size: "
         << vec.size()
         << endl;

    cout << "Capacity: "
         << vec.capacity()
         << endl;

    return 0;
}


/*
==========================================================
              11. CAPACITY GROWTH
==========================================================

When:

size == capacity

and we add another element,

the vector needs more memory.

The vector then:

1. Allocates a new memory block.
2. Moves/copies existing elements.
3. Releases the old memory block.
4. Adds the new element.

The exact growth factor is
implementation-dependent.

A common implementation grows
capacity approximately by 2x.

Example growth pattern:

1
2
4
8
16
...

==========================================================
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;

    for (int i = 1;
         i <= 5;
         i++)
    {
        // Add new element
        vec.push_back(i);

        cout
        << "Added: "
        << i
        << " | Size: "
        << vec.size()
        << " | Capacity: "
        << vec.capacity()
        << endl;
    }

    return 0;
}


/*
==========================================================
              UNDERSTANDING THE OUTPUT
==========================================================

The exact capacity values can vary
between C++ implementations.

A common output pattern is:

Added: 1 | Size: 1 | Capacity: 1
Added: 2 | Size: 2 | Capacity: 2
Added: 3 | Size: 3 | Capacity: 4
Added: 4 | Size: 4 | Capacity: 4
Added: 5 | Size: 5 | Capacity: 8

Notice:

After adding 4:

Size     = 4
Capacity = 4

There is no extra space.

When we add 5:

Vector needs more memory.

Capacity increases.

==========================================================
            WHY DOES VECTOR GROW THIS WAY?
==========================================================

Reallocating memory and moving
existing elements takes O(N).

If the vector increased its capacity
by only one element every time,
reallocation would happen very often.

By growing capacity geometrically,
reallocations happen much less often.

Therefore:

push_back()

has:

O(1) AMORTIZED TIME COMPLEXITY

==========================================================
*/


/*
==========================================================
              12. COMPLETE VECTOR EXAMPLE
==========================================================

This example combines the most
important functions from Part 2.

==========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Create empty vector
    vector<int> vec;

    // Add elements
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // Display size
    cout << "Size: "
         << vec.size()
         << endl;

    // Display capacity
    cout << "Capacity: "
         << vec.capacity()
         << endl;

    // First element
    cout << "First Element: "
         << vec.front()
         << endl;

    // Last element
    cout << "Last Element: "
         << vec.back()
         << endl;

    // Access using index
    cout << "Element at Index 1: "
         << vec[1]
         << endl;

    // Access using at()
    cout << "Element at Index 2: "
         << vec.at(2)
         << endl;

    // Remove last element
    vec.pop_back();

    cout << "After pop_back(): ";

    for (auto value : vec)
    {
        cout << value
             << " ";
    }

    cout << endl;

    // Check whether vector is empty
    if (vec.empty())
    {
        cout << "Vector is Empty";
    }
    else
    {
        cout << "Vector is Not Empty";
    }

    return 0;
}


/*
==========================================================
                IMPORTANT FUNCTIONS
==========================================================

Function                  Purpose
----------------------------------------------------------

vec.size()                Current number of elements

vec.capacity()            Currently allocated capacity

vec.push_back(x)          Add x at the end

vec.pop_back()            Remove last element

vec.front()               First element

vec.back()                Last element

vec.at(i)                 Access element with bounds checking

vec.clear()               Remove all elements

vec.empty()               Check whether vector is empty

==========================================================
              TIME COMPLEXITY SUMMARY
==========================================================

size()          → O(1)

capacity()      → O(1)

push_back()     → O(1) amortized

pop_back()      → O(1)

front()         → O(1)

back()          → O(1)

at()            → O(1)

clear()         → O(N)

empty()         → O(1)

==========================================================
                  PART - 2 END
==========================================================

Topics Completed:
✔ size()
✔ capacity()
✔ push_back()
✔ pop_back()
✔ front()
✔ back()
✔ at()
✔ clear()
✔ empty()
✔ size vs capacity
✔ Vector capacity growth
✔ Amortized O(1)
✔ Complete Vector Example

Next:
PART - 3

Vector Operations:
------------------
✔ Insert
✔ Erase
✔ Iterators
✔ begin()
✔ end()
✔ Iterator Traversal
✔ Pair with Vector

==========================================================
*/