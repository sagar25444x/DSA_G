#include <iostream>
using namespace std;

void pattern10(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = n; i >= 0; i--)
  {
    for (int j = 0; j < i - 1; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
};



int main()
{

  int n;

  cout<<"enter n: ";
  cin>>n;
  pattern10(5);
  return 0;
}