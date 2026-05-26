// Problem 1: Write a program to find the sum of all numbers from 1 to N that are divisible by 3.

#include <iostream>
using namespace std;
int sumDivisibleBy3(int N)
{
  int sum = 0;

  for (int i = 1; i <= N; i++)
  {
    if (i % 3 == 0)
    {
      sum = sum + i;
    }
  }

  return sum;
}
int main()
{
  int N;
  cout<<"range : ";
  cin >> N;

  cout << sumDivisibleBy3(N);

  return 0;
}