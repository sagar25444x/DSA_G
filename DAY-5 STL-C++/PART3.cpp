/*
==========================================================
         C++ STL (STANDARD TEMPLATE LIBRARY)
                     PART - 3
==========================================================

Topics Covered:
1. Set
2. Multiset
3. Unordered Set
4. Map
5. Multimap
6. Unordered Map

==========================================================
                      1. SET
==========================================================

A Set stores:

✔ Unique Elements
✔ Sorted Elements

Internally:
-------------
Implemented using a
Balanced Binary Search Tree (BST).

Properties:
------------
1. Duplicate values are NOT allowed
2. Elements remain automatically sorted
3. Fast searching

Time Complexity:
----------------
insert() → O(log N)
erase()  → O(log N)
find()   → O(log N)

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  set<int> s;

  // Insert elements
  s.insert(1);
  s.insert(2);
  s.insert(2); // Duplicate ignored
  s.insert(4);
  s.insert(3);

  /*
  Set becomes:
  {1, 2, 3, 4}
  */

  for (auto element : s)
  {
    cout << element << " ";
  }

  return 0;
}

/*
==========================================================
               FIND ELEMENT IN SET
==========================================================

Syntax:

s.find(value)

Returns:
---------
Iterator pointing to element.

If element does NOT exist:
Returns s.end()

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  set<int> s =
      {
          1,
          2,
          3,
          4};

  auto it = s.find(3);

  if (it != s.end())
  {
    cout << "Element Found: "
         << *it;
  }
  else
  {
    cout << "Element Not Found";
  }

  return 0;
}

/*
==========================================================
                  COUNT FUNCTION
==========================================================

Syntax:

s.count(value)

Returns:
---------
1 → Exists
0 → Does not exist

Because duplicates are not allowed,
count can only return 0 or 1.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  set<int> s =
      {
          1,
          2,
          3,
          4};

  cout << s.count(2)
       << endl;

  cout << s.count(10);

  return 0;
}

/*
==========================================================
                ERASE ELEMENT IN SET
==========================================================

Syntax:

s.erase(value)

Removes specific value.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  set<int> s =
      {
          1,
          2,
          3,
          4};

  s.erase(3);

  /*
  Updated Set:
  {1, 2, 4}
  */

  for (auto element : s)
  {
    cout << element << " ";
  }

  return 0;
}

/*
==========================================================
                    2. MULTISET
==========================================================

Multiset:
----------
Same as Set but:

✔ Duplicates Allowed
✔ Elements Sorted

Time Complexity:
----------------
O(log N)

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  multiset<int> ms;

  ms.insert(1);
  ms.insert(1);
  ms.insert(2);
  ms.insert(2);

  /*
  Multiset:
  {1, 1, 2, 2}
  */

  for (auto element : ms)
  {
    cout << element << " ";
  }

  return 0;
}

/*
==========================================================
             ERASE IN MULTISET
==========================================================

WARNING:
---------
ms.erase(value)

Deletes ALL occurrences.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  multiset<int> ms =
      {
          1,
          1,
          2,
          2};

  // Deletes all 1's
  ms.erase(1);

  for (auto element : ms)
  {
    cout << element << " ";
  }

  return 0;
}

/*
==========================================================
       REMOVE ONLY SINGLE OCCURRENCE
==========================================================

To remove ONLY one occurrence:

Use iterator.

Syntax:

ms.erase(ms.find(value))

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  multiset<int> ms =
      {
          1,
          1,
          2,
          2};

  // Remove only one "1"
  ms.erase(ms.find(1));

  /*
  Result:
  {1, 2, 2}
  */

  for (auto element : ms)
  {
    cout << element << " ";
  }

  return 0;
}

/*
==========================================================
                 3. UNORDERED SET
==========================================================

Stores:

✔ Unique Elements
❌ No Sorted Order

Internally:
-------------
Uses Hashing

Advantages:
-------------
Average Case → O(1)

Disadvantage:
--------------
Worst Case → O(N)

NOTE:
------
lower_bound() and upper_bound()
do NOT work here.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  unordered_set<int> us;

  us.insert(5);
  us.insert(1);
  us.insert(10);
  us.insert(2);

  /*
  Output order may vary.
  No sorting guaranteed.
  */

  for (auto element : us)
  {
    cout << element << " ";
  }

  return 0;
}

/*
==========================================================
                      4. MAP
==========================================================

Map stores data as:

KEY → VALUE pair

Example:

101 → "Raj"

Properties:
------------
✔ Unique Keys
✔ Sorted by Keys
✔ Fast Searching

Time Complexity:
----------------
O(log N)

Syntax:

map<key_type, value_type>

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<int, string> m;

  m[1] = "Raj";

  m.insert({3, "Rohan"});
  m.insert({2, "Amit"});

  /*
  Automatically sorted by key:

  1 → Raj
  2 → Amit
  3 → Rohan
  */

  for (auto pairValue : m)
  {
    cout << pairValue.first
         << " -> "
         << pairValue.second
         << endl;
  }

  return 0;
}

/*
==========================================================
             ACCESSING MAP ELEMENTS
==========================================================

Syntax:

m[key]

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<int, string> m;

  m[1] = "Raj";
  m[2] = "Amit";

  // Existing key
  cout << m[1]
       << endl;

  // Non-existing key
  cout << m[5];

  /*
  Returns default value:

  string → empty string
  int → 0
  */

  return 0;
}

/*
==========================================================
                    FIND IN MAP
==========================================================

Syntax:

m.find(key)

Returns iterator.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<int, string> m;

  m[1] = "Raj";
  m[2] = "Amit";

  auto it = m.find(2);

  if (it != m.end())
  {
    cout << it->first
         << " -> "
         << it->second;
  }

  return 0;
}

/*
==========================================================
                  5. MULTIMAP
==========================================================

Multimap:

✔ Duplicate Keys Allowed
✔ Sorted by Keys

Difference from map:
--------------------
m[key] syntax does NOT work.

Use insert() only.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  multimap<int, string> mm;

  mm.insert({1, "Raj"});
  mm.insert({1, "Aman"});
  mm.insert({2, "Rohan"});

  /*
  Output:
  1 -> Raj
  1 -> Aman
  2 -> Rohan
  */

  for (auto pairValue : mm)
  {
    cout << pairValue.first
         << " -> "
         << pairValue.second
         << endl;
  }

  return 0;
}

/*
==========================================================
                6. UNORDERED MAP
==========================================================

Stores:

✔ Unique Keys
❌ No Sorted Order

Internally:
-------------
Uses Hashing

Average Time Complexity:
-------------------------
O(1)

Worst Case:
------------
O(N)

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  unordered_map<int, string> um;

  um[1] = "Raj";
  um[2] = "Amit";
  um[10] = "Rohan";

  /*
  Order may change.
  No sorting guaranteed.
  */

  for (auto pairValue : um)
  {
    cout << pairValue.first
         << " -> "
         << pairValue.second
         << endl;
  }

  return 0;
}

/*
==========================================================
                  PART - 3 END
==========================================================

Topics Completed:
✔ Set
✔ Find in Set
✔ Count Function
✔ Erase in Set
✔ Multiset
✔ Erase in Multiset
✔ Unordered Set
✔ Map
✔ Accessing Map
✔ Find in Map
✔ Multimap
✔ Unordered Map

==========================================================
*/