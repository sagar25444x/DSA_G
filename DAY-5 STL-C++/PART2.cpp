/*
==========================================================
         C++ STL (STANDARD TEMPLATE LIBRARY)
                     PART - 2
==========================================================

Topics Covered:
1. Vector Insert / Erase
2. Vector Utility Functions
3. List
4. Deque
5. Stack
6. Queue
7. Priority Queue

==========================================================
        1. VECTOR INSERT / ERASE OPERATIONS
==========================================================

Vectors provide functions to:
1. Insert elements
2. Remove elements
3. Modify data dynamically

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
          40,
          50};

  /*
  Current Vector:
  {10, 20, 30, 40, 50}
  */

  // Remove second element
  v.erase(v.begin() + 1);

  /*
  Updated Vector:
  {10, 30, 40, 50}
  */

  for (auto element : v)
  {
    cout << element << " ";
  }

  return 0;
}

/*
==========================================================
            ERASE RANGE OF ELEMENTS
==========================================================

Syntax:

v.erase(start, end);

NOTE:
------
End index is NOT included.

Range:
[start, end)

Meaning:
Includes start
Excludes end

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
          40,
          50};

  /*
  Remove index:
  1 → 3

  Removes:
  20, 30, 40
  */

  v.erase(v.begin() + 1,
          v.begin() + 4);

  for (auto element : v)
  {
    cout << element << " ";
  }

  return 0;
}

/*
==========================================================
               INSERT ELEMENTS
==========================================================

Syntax:

v.insert(position, value);

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> vec(2, 100);

  /*
  Current:
  {100, 100}
  */

  // Insert at beginning
  vec.insert(vec.begin(), 300);

  /*
  Updated:
  {300, 100, 100}
  */

  for (auto element : vec)
  {
    cout << element << " ";
  }

  return 0;
}

/*
==========================================================
          INSERT MULTIPLE SAME VALUES
==========================================================

Syntax:

v.insert(position,
         frequency,
         value);

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> vec =
      {
          300,
          100,
          100};

  // Insert two 10s
  vec.insert(vec.begin() + 1,
             2,
             10);

  /*
  Updated:
  {300, 10, 10, 100, 100}
  */

  for (auto element : vec)
  {
    cout << element << " ";
  }

  return 0;
}

/*
==========================================================
          2. VECTOR UTILITY FUNCTIONS
==========================================================

Useful Functions:

1. size()
2. pop_back()
3. clear()
4. empty()

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

  // Size of vector
  cout << "Size: "
       << v.size()
       << endl;

  // Remove last element
  v.pop_back();

  /*
  Vector:
  {10, 20}
  */

  cout << "After pop_back(): ";

  for (auto element : v)
  {
    cout << element << " ";
  }

  cout << endl;

  // Check empty or not
  cout << v.empty()
       << endl;

  // Clear vector
  v.clear();

  cout << v.empty();

  return 0;
}

/*
==========================================================
                    3. LIST
==========================================================

List:
-----
Implemented internally using
Doubly Linked List.

Advantages:
------------
1. Fast insertion at front
2. Fast deletion
3. Dynamic size

Disadvantage:
-------------
No direct indexing.

Example:
v[2] ❌

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<int> ls;

  // Insert at back
  ls.push_back(2);

  // Insert at front
  ls.push_front(5);

  /*
  List:
  {5, 2}
  */

  for (auto element : ls)
  {
    cout << element << " ";
  }

  return 0;
}

/*
==========================================================
                    4. DEQUE
==========================================================

Deque = Double Ended Queue

Can insert/delete from:

✔ Front
✔ Back

Efficient operations
at both ends.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  deque<int> dq;

  dq.push_back(1);
  dq.push_front(2);

  /*
  Deque:
  {2, 1}
  */

  dq.pop_front();

  /*
  Updated:
  {1}
  */

  for (auto element : dq)
  {
    cout << element << " ";
  }

  return 0;
}

/*
==========================================================
                    5. STACK
==========================================================

Stack follows:

LIFO
-----
Last In First Out

Example:
Stack of plates

Last plate placed
comes out first.

Operations:
------------
1. push()
2. pop()
3. top()
4. size()
5. empty()

Time Complexity:
----------------
O(1)

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  stack<int> st;

  // Insert elements
  st.push(1);
  st.push(2);
  st.push(3);

  /*
  Stack:
  TOP
  3
  2
  1
  */

  // Top element
  cout << st.top()
       << endl;

  // Remove top
  st.pop();

  cout << st.top()
       << endl;

  // Size
  cout << st.size()
       << endl;

  return 0;
}

/*
==========================================================
                    6. QUEUE
==========================================================

Queue follows:

FIFO
-----
First In First Out

Example:
Ticket Counter Line

Person entering first
comes out first.

Operations:
------------
1. push()
2. pop()
3. front()
4. back()

Time Complexity:
----------------
O(1)

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  queue<int> q;

  q.push(1);
  q.push(2);
  q.push(3);

  /*
  Queue:
  FRONT → 1 2 3 ← BACK
  */

  // Modify back element
  q.back() += 5;

  /*
  Queue:
  1 2 8
  */

  // Front element
  cout << q.front()
       << endl;

  // Remove front
  q.pop();

  cout << q.front();

  return 0;
}

/*
==========================================================
                7. PRIORITY QUEUE
==========================================================

Priority Queue stores elements
according to priority.

Internally uses:
Binary Heap

Types:
1. Max Heap (Default)
2. Min Heap

*/

/*
==========================================================
              MAX HEAP (DEFAULT)
==========================================================

Largest element stays at top.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  priority_queue<int> pq;

  pq.push(5);
  pq.push(2);
  pq.push(8);

  /*
  Top:
  8
  */

  cout << pq.top();

  return 0;
}

/*
==========================================================
                   MIN HEAP
==========================================================

Smallest element stays at top.

Syntax:

priority_queue<
int,
vector<int>,
greater<int>
>

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  priority_queue<
      int,
      vector<int>,
      greater<int>>
      min_pq;

  min_pq.push(5);
  min_pq.push(2);
  min_pq.push(8);

  /*
  Top:
  2
  */

  cout << min_pq.top();

  return 0;
}

/*
==========================================================
       PRIORITY QUEUE TIME COMPLEXITY
==========================================================

push() → O(log N)

pop() → O(log N)

top() → O(1)

*/

/*
==========================================================
                  PART - 2 END
==========================================================

Topics Completed:
✔ Vector Insert
✔ Vector Erase
✔ Utility Functions
✔ List
✔ Deque
✔ Stack
✔ Queue
✔ Priority Queue
✔ Max Heap
✔ Min Heap

==========================================================
*/