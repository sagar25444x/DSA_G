#include <iostream>
#include <climits>
using namespace std;
int largest(int arr[], int size)
{
  int largest = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > largest)
    {
     largest = arr[i];
    }
  }
  return largest;
}
int main()
{

  int arr[] = {20, 10, 34, 21, 1};
  int size = sizeof(arr) / sizeof(int);
  cout << largest(arr, size);
  return 0;
}