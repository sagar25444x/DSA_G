#include <iostream>
#include <climits>
using namespace std;

int smallest(int arr[], int size)
{
    int smallest = INT_MAX;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    return smallest;
}

int main()
{
    int arr[] = {20, 10, 34, 21, 1};

    int size = sizeof(arr) / sizeof(int);

    cout << smallest(arr, size);

    return 0;
}

/*
==================== README ====================

Program Type:
Find Smallest Element in Array

Array:
[20, 10, 34, 21, 1]

------------------------------------------------
STEP BY STEP TABLE

i   | arr[i] | smallest before | Condition | smallest after
------------------------------------------------------------
0   | 20     | INT_MAX         | true      | 20
1   | 10     | 20              | true      | 10
2   | 34     | 10              | false     | 10
3   | 21     | 10              | false     | 10
4   | 1      | 10              | true      | 1

Final Answer:
1

------------------------------------------------
LOGIC EXPLANATION

Step 1:
Take smallest variable

Initialize:
INT_MAX

Why?
Because we want smallest number.

So we start with biggest possible integer.

------------------------------------------------
MAIN LOGIC

If current element is smaller,
replace old smallest.

Code:

if(arr[i] < smallest)
{
    smallest = arr[i];
}

------------------------------------------------
WHY RETURN OUTSIDE LOOP?

Wrong:

for(...)
{
   return smallest;
}

Problem:
Program exits after first iteration.

Correct:
Check whole array first,
then return answer.

------------------------------------------------
MEMORY TRICK

"Whenever smaller value comes,
replace the old champion."

smallest = current minimum

================================================
*/