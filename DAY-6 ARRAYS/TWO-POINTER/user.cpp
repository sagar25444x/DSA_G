#include <iostream>
using namespace std;

int main()
{

  int size;
  cin >> size;
  int arr[size];
  cout << "Enter  Numbers: ";
  // Taking Input
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  for(int st = 0, end = size - 1; st < end ; st++,end--)
  {
    swap(arr[st], arr[end]);
  }
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}