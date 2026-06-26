#include <iostream>
using namespace std;

int main()
{

  int arr[] = {1, 2, 3};
  int size = 3;
  int product = 1;

  for (int i = 0; i < size; i++)
  {
    product *= arr[i];
  }

  cout << product;

  return 0;
}