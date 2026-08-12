/*
==========================================================
                 C++ VECTORS (PART - 3)
==========================================================

Topics Covered:
1. insert()
2. erase()
3. Iterator
4. begin()
5. end()
6. Iterator Traversal
7. Vector + Pair
8. Vector of Pairs
9. Important Notes

==========================================================
                    1. insert()
==========================================================

insert() is used to add an element
at a specific position in a vector.

Syntax:

vec.insert(position, value);

Example:

vec = {10, 20, 30}

vec.insert(vec.begin() + 1, 99);

Result:

{10, 99, 20, 30}

Important:
----------
vec.begin() points to the
first element.

So:

vec.begin() + 0
-> index 0

vec.begin() + 1
-> index 1

vec.begin() + 2
-> index 2

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

    // Insert 99 at index 1
    vec.insert(
        vec.begin() + 1,
        99
    );

    /*
    Before:

    {10, 20, 30}

    After:

    {10, 99, 20, 30}
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
             2. INSERT MULTIPLE ELEMENTS
==========================================================

We can insert multiple copies
of the same value.

Syntax:

vec.insert(position, count, value);

Example:

vec.insert(
    vec.begin() + 1,
    3,
    100
);

This means:

Insert 100
3 times
starting at index 1.

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

    vec.insert(
        vec.begin() + 1,
        3,
        100
    );

    /*
    Result:

    {10, 100, 100, 100, 20, 30}
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
                    3. erase()
==========================================================

erase() removes elements from
a vector.

There are two common ways:

1. Erase one element
2. Erase a range of elements

==========================================================
             ERASING ONE ELEMENT
==========================================================

Syntax:

vec.erase(position);

Example:

vec.erase(vec.begin() + 1);

This removes the element
at index 1.

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

    // Remove element at index 1
    vec.erase(
        vec.begin() + 1
    );

    /*
    Before:

    {10, 20, 30, 40}

    After:

    {10, 30, 40}
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
              ERASING A RANGE
==========================================================

Syntax:

vec.erase(start, end);

IMPORTANT:
----------
The end position is EXCLUSIVE.

This is called:

[start, end)

Example:

vec.erase(
    vec.begin() + 1,
    vec.begin() + 4
);

It removes:

index 1
index 2
index 3

But NOT:

index 4

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

    vec.erase(
        vec.begin() + 1,
        vec.begin() + 4
    );

    /*
    Removed:

    20
    30
    40

    Remaining:

    10 50
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
                    4. ITERATOR
==========================================================

An iterator is an object that
allows us to move through
elements of a container.

Think of an iterator like a
pointer that points to elements
inside a vector.

Example:

vector<int>::iterator it;

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

    // Create iterator
    vector<int>::iterator it;

    // Iterator points to first element
    it = vec.begin();

    // Dereference iterator
    cout << *it;

    return 0;
}


/*
Output:
--------
10

==========================================================
                5. begin()
==========================================================

begin() returns an iterator
pointing to the FIRST element.

Vector:

{10, 20, 30}

begin()
   |
   ▼
  10   20   30

Example:

vec.begin()

points to:

10

To get the value:

*vec.begin()

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

    cout << *vec.begin();

    return 0;
}


/*
Output:
--------
10

==========================================================
                    6. end()
==========================================================

end() returns an iterator
pointing JUST AFTER the
last element.

This is very important.

Vector:

{10, 20, 30}

              end()
                |
                ▼
10     20     30     [past last]

end() does NOT point
to 30.

It points to the position
after 30.

Therefore:

*vec.end()

should NOT be used.

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

    /*
    begin() -> first element
    end()   -> position after last
    */

    cout << *vec.begin();

    return 0;
}


/*
==========================================================
             7. ITERATOR TRAVERSAL
==========================================================

We can use iterators to
traverse the entire vector.

Syntax:

for (
    vector<int>::iterator it = vec.begin();
    it != vec.end();
    it++
)
{
    cout << *it;
}

Here:

it
--
Iterator

*it
---
Value stored at iterator

it++
----
Move to next element

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

    for (
        vector<int>::iterator it = vec.begin();
        it != vec.end();
        it++
    )
    {
        cout << *it
             << " ";
    }

    return 0;
}


/*
==========================================================
                 USING auto
==========================================================

Instead of writing:

vector<int>::iterator

we can use:

auto

The compiler automatically
detects the iterator type.

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

    for (
        auto it = vec.begin();
        it != vec.end();
        it++
    )
    {
        cout << *it
             << " ";
    }

    return 0;
}


/*
==========================================================
             ITERATOR vs INDEX LOOP
==========================================================

INDEX LOOP:

for (int i = 0;
     i < vec.size();
     i++)
{
    cout << vec[i];
}


ITERATOR LOOP:

for (auto it = vec.begin();
     it != vec.end();
     it++)
{
    cout << *it;
}

Both can be used to
traverse a vector.

For beginners:

Index loop is usually
easier to understand.

Iterators become important
when working with STL algorithms.

==========================================================
*/


/*
==========================================================
                8. VECTOR + PAIR
==========================================================

A pair is used to store
TWO values together.

Example:

pair<int, int>

can store:

{10, 20}

We can create a vector
of pairs.

Syntax:

vector<pair<int, int>> vec;

==========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Vector containing pairs
    vector<pair<int, int>> vec;

    // Add pair using push_back()
    vec.push_back(
        {10, 20}
    );

    vec.push_back(
        {30, 40}
    );

    vec.push_back(
        {50, 60}
    );

    /*
    Vector:

    {
        {10, 20},
        {30, 40},
        {50, 60}
    }
    */

    return 0;
}


/*
==========================================================
           ACCESSING VECTOR OF PAIRS
==========================================================

For a pair:

.first
-------
First value

.second
--------
Second value

Example:

vec[0].first

vec[0].second

==========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> vec =
    {
        {10, 20},
        {30, 40},
        {50, 60}
    };

    // First pair
    cout << vec[0].first
         << " ";

    cout << vec[0].second
         << endl;

    // Second pair
    cout << vec[1].first
         << " ";

    cout << vec[1].second;

    return 0;
}


/*
Output:
--------
10 20
30 40

==========================================================
          9. TRAVERSING VECTOR OF PAIRS
==========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> vec =
    {
        {10, 20},
        {30, 40},
        {50, 60}
    };

    for (auto p : vec)
    {
        cout << p.first
             << " "
             << p.second
             << endl;
    }

    return 0;
}


/*
==========================================================
             USING REFERENCE WITH PAIR
==========================================================

We can also write:

for (auto &p : vec)

Using & means we are referring
to the original pair.

This allows us to modify
the vector elements.

==========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> vec =
    {
        {10, 20},
        {30, 40},
        {50, 60}
    };

    // Modify original pairs
    for (auto &p : vec)
    {
        p.first += 10;
        p.second += 10;
    }

    /*
    Result:

    {20, 30}
    {40, 50}
    {60, 70}
    */

    for (auto p : vec)
    {
        cout << p.first
             << " "
             << p.second
             << endl;
    }

    return 0;
}


/*
==========================================================
          PUSH_BACK vs EMPLACE_BACK
==========================================================

For vector of pairs:

push_back():

vec.push_back(
    {10, 20}
);

emplace_back():

vec.emplace_back(
    10,
    20
);

Both can add a pair.

emplace_back() constructs the
element directly inside the vector.

==========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> vec;

    // Using push_back
    vec.push_back(
        {10, 20}
    );

    // Using emplace_back
    vec.emplace_back(
        30,
        40
    );

    for (auto p : vec)
    {
        cout << p.first
             << " "
             << p.second
             << endl;
    }

    return 0;
}


/*
==========================================================
               10. COMPLETE EXAMPLE
==========================================================

Let's combine:

✔ push_back()
✔ insert()
✔ erase()
✔ begin()
✔ end()
✔ iterator
✔ pair

==========================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    Create vector
    */

    vector<int> vec =
    {
        10,
        20,
        30,
        40
    };


    /*
    ------------------------------------------------------
    INSERT
    ------------------------------------------------------
    */

    vec.insert(
        vec.begin() + 2,
        99
    );

    /*
    Vector:

    {10, 20, 99, 30, 40}
    */


    /*
    ------------------------------------------------------
    ERASE
    ------------------------------------------------------
    */

    vec.erase(
        vec.begin() + 2
    );

    /*
    Vector becomes:

    {10, 20, 30, 40}
    */


    /*
    ------------------------------------------------------
    ITERATOR TRAVERSAL
    ------------------------------------------------------
    */

    for (
        auto it = vec.begin();
        it != vec.end();
        it++
    )
    {
        cout << *it
             << " ";
    }

    return 0;
}


/*
==========================================================
              IMPORTANT NOTES - PART 3
==========================================================

1. insert()
------------
Used to add elements at
a specific position.

2. erase()
-----------
Used to remove elements.

3. begin()
-----------
Points to first element.

4. end()
---------
Points just AFTER the
last element.

5. Iterator
------------
Used to move through
container elements.

6. Dereference:
---------------
*it

Gets the value pointed
to by iterator.

7. Vector of pairs:
-------------------
vector<pair<int, int>>

8. Pair values:
---------------
p.first
p.second

9. push_back()
--------------
Adds element at end.

10. emplace_back()
------------------
Constructs element directly
inside the vector.

==========================================================
            IMPORTANT SYNTAX TO REMEMBER
==========================================================

INSERT:

vec.insert(
    vec.begin() + index,
    value
);


ERASE ONE:

vec.erase(
    vec.begin() + index
);


ERASE RANGE:

vec.erase(
    vec.begin() + start,
    vec.begin() + end
);


ITERATOR:

auto it = vec.begin();


VALUE:

*it


ITERATOR LOOP:

for (
    auto it = vec.begin();
    it != vec.end();
    it++
)
{
    cout << *it;
}


VECTOR OF PAIRS:

vector<pair<int, int>> vec;


PAIR ACCESS:

vec[i].first
vec[i].second


==========================================================
                  PART - 3 END
==========================================================

Topics Completed:
✔ insert()
✔ Insert Multiple Elements
✔ erase()
✔ Erase Range
✔ Iterator
✔ begin()
✔ end()
✔ Iterator Traversal
✔ auto Iterator
✔ Vector of Pairs
✔ Pair Access
✔ push_back() with Pair
✔ emplace_back()

Next:
PART - 4

Vector + Functions:
-------------------
✔ Pass Vector to Function
✔ Pass by Value
✔ Pass by Reference
✔ const Reference
✔ Linear Search
✔ Reverse Vector
✔ Single Number using XOR

==========================================================
*/