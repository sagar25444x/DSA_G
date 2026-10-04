// sum of even number between 20 to 40
#include <iostream>
using namespace std;

int main()
{
  int n = 40;
  int sum = 0;
  for (int i = 20; i <=n; i = i + 2)
  {
    sum += i;
  }
  cout << sum;
  return 0;
}