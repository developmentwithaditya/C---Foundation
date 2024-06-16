#include <iostream>
using namespace std;

int factorial(int calculate_Fact)
{
  int f = 1;
  for (int i = 1; i <= calculate_Fact; i++)
  {
    f *= i;
  }

  return f;
}

int main()
{
  int n, r;

  cout << "Enter n: ";
  cin >> n;

  cout << "Enter r: ";
  cin >> r;

  int a, b, c;

  a = factorial(n);     // factorial of n;
  b = factorial(r);     // factorial of r;
  c = factorial(n - r); // factorial of n-r;

  cout << "Combination of nCr is: " << a / (b * c) << endl;

  return 0;
}
