#include <iostream>
using namespace std;

int main()
{

  int arr[] = {10, 5, 40, 8, 25};
  int size = 5;

  int maxIndex = 0;
  int minIndex = 0;

  // Find maximum and minimum index
  for (int i = 1; i < size; i++)
  {

    if (arr[i] > arr[maxIndex])
    {
      maxIndex = i;
    }

    if (arr[i] < arr[minIndex])
    {
      minIndex = i;
    }
  }

  // Swap maximum and minimum
  swap(arr[maxIndex], arr[minIndex]);

  // Print array
  cout << "Array after swapping:\n";

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}