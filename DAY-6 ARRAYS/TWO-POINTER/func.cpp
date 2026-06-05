#include <iostream>
using namespace std;

// Reverse using for loop
void reverseFor(int arr[], int size)
{
    for (int st = 0, end = size - 1;
         st < end;
         st++, end--)
    {
        swap(arr[st], arr[end]);
    }
}

// Reverse using while loop
void reverseWhile(int arr[], int size)
{
    int st = 0;
    int end = size - 1;

    while (st < end)
    {
        swap(arr[st], arr[end]);

        st++;
        end--;
    }
}

int main()
{
    int arr[] = {4, 3, 2, 1};

    int size = 4;

    // choose one
    reverseFor(arr, size);

    // reverseWhile(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}