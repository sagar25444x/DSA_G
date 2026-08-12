/*
==========================================================
                 C++ VECTORS (PART - 4)
==========================================================

Topics Covered:
1. Passing Vector to a Function
2. Pass by Value
3. Pass by Reference
4. const Reference
5. Linear Search on Vector
6. Reverse Vector
7. Single Number using XOR
8. Time and Space Complexity
9. Important Revision Notes

==========================================================
        1. PASSING VECTOR TO A FUNCTION
==========================================================

Just like arrays, we can pass
a vector to a function.

Example:

void printVector(vector<int> vec)

The vector is passed as an
argument to the function.

IMPORTANT:
----------
There are different ways to
pass a vector to a function.

1. Pass by Value
2. Pass by Reference
3. Pass by const Reference

We need to understand the
difference between them.

==========================================================
              2. PASS BY VALUE
==========================================================

Syntax:

void function(vector<int> vec)

When a vector is passed by value,
a COMPLETE COPY of the vector
is created.

Original vector:
---------------
{10, 20, 30}

Function receives:
------------------
{10, 20, 30}

But this is a separate copy.

Therefore:

Changes inside the function
DO NOT affect the original vector.

Cost:
-----
Time  = O(N)
Space = O(N)

Because the complete vector
has to be copied.

==========================================================
*/

#include <bits/stdc++.h>
using namespace std;


// Function receives a COPY
void modifyVector(vector<int> vec)
{
    // Modify the copied vector
    vec[0] = 999;

    /*
    This changes only the copy.

    Original vector in main()
    will remain unchanged.
    */
}


int main()
{
    vector<int> vec =
    {
        10,
        20,
        30
    };

    // Pass vector by value
    modifyVector(vec);

    /*
    Original vector:

    {10, 20, 30}

    It did NOT change.
    */

    for (auto value : vec)
    {
        cout << value
             << " ";
    }

    return 0;
}


/*
Output:
--------
10 20 30


==========================================================
             3. PASS BY REFERENCE
==========================================================

Syntax:

void function(vector<int>& vec)

The & means:

REFERENCE

No complete copy of the vector
is created.

The function works with the
ORIGINAL vector.

Therefore:

Changes inside the function
WILL affect the original vector.

Cost:
-----
Time  = O(1)
Space = O(1)

No complete vector copy is created.

==========================================================
*/

#include <bits/stdc++.h>
using namespace std;


// Vector passed by reference
void modifyVector(vector<int>& vec)
{
    // Modify original vector
    vec[0] = 999;
}


int main()
{
    vector<int> vec =
    {
        10,
        20,
        30
    };

    // Pass original vector
    modifyVector(vec);

    /*
    Original vector becomes:

    {999, 20, 30}
    */

    for (auto value : vec)
    {
        cout << value
             << " ";
    }

    return 0;
}


/*
Output:
--------
999 20 30

==========================================================
          PASS BY VALUE VS REFERENCE
==========================================================

PASS BY VALUE:

void function(vector<int> vec)

✔ Creates copy
✔ Original unchanged
✔ Extra memory required
✔ O(N) copy cost


PASS BY REFERENCE:

void function(vector<int>& vec)

✔ No copy
✔ Original can be modified
✔ No vector duplication
✔ O(1) parameter passing

==========================================================
*/


/*
==========================================================
              4. CONST REFERENCE
==========================================================

Sometimes we want:

✔ No copy
✔ No modification

In that case we use:

const vector<int>& vec

Syntax:

void function(
    const vector<int>& vec
)

Meaning:

The function receives the
original vector by reference,

BUT

the function is NOT allowed
to modify it.

This is very useful when
we only want to READ data.

Cost:
-----
Time  = O(1)
Space = O(1)

==========================================================
*/

#include <bits/stdc++.h>
using namespace std;


// const reference
void printVector(
    const vector<int>& vec
)
{
    /*
    We can READ elements.
    */

    for (auto value : vec)
    {
        cout << value
             << " ";
    }

    /*
    We CANNOT modify elements.

    Example:

    vec[0] = 999;

    This will produce an error.
    */
}


int main()
{
    vector<int> vec =
    {
        10,
        20,
        30
    };

    printVector(vec);

    return 0;
}


/*
==========================================================
             WHICH ONE SHOULD WE USE?
==========================================================

If you need a COPY:

vector<int> vec


If you want to MODIFY original:

vector<int>& vec


If you only want to READ:

const vector<int>& vec


IMPORTANT DSA RULE:

When a function only needs to
read a vector, prefer:

const vector<int>& vec

This avoids unnecessary copying.

==========================================================
              5. LINEAR SEARCH
==========================================================

Problem:
---------

Given a vector and a target,
find the index of the target.

Example:

Vector:

{10, 20, 30, 40, 50}

Target:

30

Answer:

Index = 2

If target does not exist:

Return -1

==========================================================
              APPROACH
==========================================================

Step 1:
-------
Start from index 0.

Step 2:
-------
Compare current element
with target.

Step 3:
-------
If equal:

Return index.

Step 4:
-------
Continue until vector ends.

Step 5:
-------
If target is not found:

Return -1.

==========================================================
*/

#include <bits/stdc++.h>
using namespace std;


// Linear Search Function
int linearSearch(
    const vector<int>& vec,
    int target
)
{
    // Traverse vector
    for (int i = 0;
         i < vec.size();
         i++)
    {
        // Target found
        if (vec[i] == target)
        {
            return i;
        }
    }

    // Target not found
    return -1;
}


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

    int target = 30;

    int result =
        linearSearch(
            vec,
            target
        );

    if (result != -1)
    {
        cout
        << "Element Found At Index: "
        << result;
    }
    else
    {
        cout
        << "Element Not Found";
    }

    return 0;
}


/*
Output:
--------
Element Found At Index: 2


==========================================================
              LINEAR SEARCH COMPLEXITY
==========================================================

Best Case:

Target is at index 0.

Time:

O(1)


Worst Case:

Target is at the end
or does not exist.

Time:

O(N)


Space:

O(1)

Because we only use
a few variables.

==========================================================
             6. REVERSE A VECTOR
==========================================================

Problem:
---------

Reverse the vector.

Example:

Before:

10 20 30 40 50

After:

50 40 30 20 10

We can use:

TWO POINTER TECHNIQUE

==========================================================
             TWO POINTER APPROACH
==========================================================

Create:

start = 0

end = vec.size() - 1

Then:

1. Swap vec[start] and vec[end]
2. Move start forward
3. Move end backward
4. Repeat until start >= end

==========================================================
*/

#include <bits/stdc++.h>
using namespace std;


// Function to reverse vector
void reverseVector(
    vector<int>& vec
)
{
    int start = 0;

    int end =
        vec.size() - 1;


    // Continue until pointers meet
    while (start < end)
    {
        // Swap first and last
        swap(
            vec[start],
            vec[end]
        );

        // Move start forward
        start++;

        // Move end backward
        end--;
    }
}


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

    reverseVector(vec);

    cout << "Reversed Vector: ";

    for (auto value : vec)
    {
        cout << value
             << " ";
    }

    return 0;
}


/*
Output:
--------
Reversed Vector:
50 40 30 20 10


==========================================================
                 REVERSE DRY RUN
==========================================================

Original:

10 20 30 40 50

start = 0
end   = 4

Swap:

10 <-> 50

Result:

50 20 30 40 10


Move:

start = 1
end   = 3


Swap:

20 <-> 40

Result:

50 40 30 20 10


Move:

start = 2
end   = 2


Condition:

start < end

2 < 2

FALSE

STOP


Final:

50 40 30 20 10

==========================================================
              REVERSE COMPLEXITY
==========================================================

Time:

O(N)

Why?

We visit approximately
half of the elements,
which is still O(N).

Space:

O(1)

Why?

We only use:

start
end

No extra vector is created.

==========================================================
          7. SINGLE NUMBER USING XOR
==========================================================

This is a VERY IMPORTANT
DSA problem.

Problem:
---------

Given a vector where every
element appears twice except
one element,

find the element that appears
only once.

Example:

{4, 1, 2, 1, 2}

Answer:

4

==========================================================
                XOR OPERATOR
==========================================================

XOR operator:

^

Example:

5 ^ 3

XOR works bit by bit.

For this problem,
we mainly need three rules.

RULE 1:
-------

A ^ 0 = A


RULE 2:
-------

A ^ A = 0


RULE 3:
-------

A ^ B ^ A = B

This allows duplicate numbers
to cancel each other.

==========================================================
              SIMPLE EXAMPLE
==========================================================

Vector:

{4, 1, 2, 1, 2}

Start:

ans = 0

Step 1:

0 ^ 4 = 4

Step 2:

4 ^ 1

Step 3:

4 ^ 1 ^ 2

Step 4:

4 ^ 1 ^ 2 ^ 1

The two 1s cancel.

Step 5:

The two 2s cancel.

Final:

4

==========================================================
*/

#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:

    int singleNumber(
        vector<int>& nums
    )
    {
        // Start answer with 0
        int ans = 0;

        // XOR every element
        for (int value : nums)
        {
            ans ^= value;
        }

        // Return unique element
        return ans;
    }
};


int main()
{
    vector<int> nums =
    {
        4,
        1,
        2,
        1,
        2
    };

    Solution sol;

    int result =
        sol.singleNumber(nums);

    cout
    << "Single Number: "
    << result;

    return 0;
}


/*
Output:
--------
Single Number: 4


==========================================================
             XOR DRY RUN
==========================================================

nums:

4 1 2 1 2

Initial:

ans = 0


Step 1:

ans = 0 ^ 4

ans = 4


Step 2:

ans = 4 ^ 1


Step 3:

ans = 4 ^ 1 ^ 2


Step 4:

ans = 4 ^ 1 ^ 2 ^ 1

Because:

1 ^ 1 = 0

The duplicate 1 disappears.


Step 5:

The two 2s also disappear.

Therefore:

4 ^ 0 ^ 0

= 4


Answer:

4

==========================================================
              XOR COMPLEXITY
==========================================================

Time:

O(N)

Why?

We traverse the vector
only once.

Space:

O(1)

Why?

Only one variable:

ans

is used.

==========================================================
          8. COMPLETE VECTOR FUNCTION EXAMPLE
==========================================================

Let's combine everything
we learned in Part 4.

==========================================================
*/

#include <bits/stdc++.h>
using namespace std;


// --------------------------------------------------------
// Function 1: Print Vector
// const reference is used because
// we only need to read the vector.
// --------------------------------------------------------

void printVector(
    const vector<int>& vec
)
{
    for (auto value : vec)
    {
        cout << value
             << " ";
    }

    cout << endl;
}


// --------------------------------------------------------
// Function 2: Linear Search
// --------------------------------------------------------

int linearSearch(
    const vector<int>& vec,
    int target
)
{
    for (int i = 0;
         i < vec.size();
         i++)
    {
        if (vec[i] == target)
        {
            return i;
        }
    }

    return -1;
}


// --------------------------------------------------------
// Function 3: Reverse Vector
// Reference is used because
// original vector must change.
// --------------------------------------------------------

void reverseVector(
    vector<int>& vec
)
{
    int start = 0;

    int end =
        vec.size() - 1;

    while (start < end)
    {
        swap(
            vec[start],
            vec[end]
        );

        start++;
        end--;
    }
}


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


    // Print original vector
    cout << "Original Vector: ";

    printVector(vec);


    // Search for 30
    int index =
        linearSearch(
            vec,
            30
        );

    cout
    << "30 Found At Index: "
    << index
    << endl;


    // Reverse vector
    reverseVector(vec);


    // Print reversed vector
    cout
    << "Reversed Vector: ";

    printVector(vec);


    return 0;
}


/*
Output:
--------

Original Vector:
10 20 30 40 50

30 Found At Index:
2

Reversed Vector:
50 40 30 20 10


==========================================================
              9. IMPORTANT REVISION
==========================================================

PASS BY VALUE:

vector<int> vec

✔ Creates copy
✔ Original doesn't change
✔ Time: O(N)
✔ Extra Space: O(N)


PASS BY REFERENCE:

vector<int>& vec

✔ No copy
✔ Original can change
✔ Time: O(1)
✔ Extra Space: O(1)


CONST REFERENCE:

const vector<int>& vec

✔ No copy
✔ Can read
✔ Cannot modify
✔ Time: O(1)
✔ Extra Space: O(1)


==========================================================
              FUNCTION SELECTION RULE
==========================================================

Need a copy?

Use:

vector<int> vec


Need to modify original?

Use:

vector<int>& vec


Only need to read?

Use:

const vector<int>& vec


==========================================================
              IMPORTANT DSA PATTERNS
==========================================================

LINEAR SEARCH:

for (int i = 0;
     i < vec.size();
     i++)
{
    if (vec[i] == target)
    {
        return i;
    }
}


REVERSE:

int start = 0;

int end =
    vec.size() - 1;

while (start < end)
{
    swap(
        vec[start],
        vec[end]
    );

    start++;
    end--;
}


SINGLE NUMBER:

int ans = 0;

for (int value : nums)
{
    ans ^= value;
}


==========================================================
              TIME COMPLEXITY SUMMARY
==========================================================

Operation / Problem       Complexity
----------------------------------------------------------

Pass by Value             O(N)

Pass by Reference         O(1)

Const Reference           O(1)

Linear Search             O(N)

Reverse Vector            O(N)

Single Number XOR         O(N)


==========================================================
                  PART - 4 END
==========================================================

Topics Completed:
✔ Vector in Functions
✔ Pass by Value
✔ Pass by Reference
✔ const Reference
✔ Linear Search
✔ Reverse Vector
✔ Two Pointer Technique
✔ Single Number
✔ XOR
✔ Time Complexity
✔ Space Complexity

==========================================================
                  VECTOR COMPLETE
==========================================================

You now know:

PART - 1
---------
✔ Vector Basics
✔ Declaration
✔ Initialization
✔ Traversal

PART - 2
---------
✔ size()
✔ capacity()
✔ push_back()
✔ pop_back()
✔ front()
✔ back()
✔ at()
✔ clear()
✔ empty()

PART - 3
---------
✔ insert()
✔ erase()
✔ Iterators
✔ begin()
✔ end()
✔ Vector of Pairs

PART - 4
---------
✔ Functions
✔ Pass by Value
✔ Pass by Reference
✔ const Reference
✔ Linear Search
✔ Reverse
✔ XOR Problem

==========================================================
              NEXT RECOMMENDED TOPIC
==========================================================

SORTING IN C++

Topics:

1. What is Sorting?
2. Bubble Sort
3. Selection Sort
4. Insertion Sort
5. sort() STL Function
6. Ascending Order
7. Descending Order
8. Time Complexity
9. DSA Practice Problems

==========================================================
*/