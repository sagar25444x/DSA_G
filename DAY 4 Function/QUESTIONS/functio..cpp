#include <iostream>
using namespace std;
int sumOfdigits(int num)
{
  int sum = 0;
  while (num > 0)
  {
    int lastDigit = num % 10; // to egt last num
    sum += lastDigit;         // to add it in sum
    num = num / 10;           // to remove last num which is alreaddy added
  }
  return sum;
}

int main()
{
  // Write C++ code here
  int num;
  cout << " enter nos : ";
  cin >> num;
  cout << sumOfdigits(num);
  return 0;
}