#include <iostream>
using namespace std;

int sum_1_N(int n);

int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;
  cout << "Sum of N is: " << sum_1_N(n) << endl;
  return 0;
}

int sum_1_N(int n) // n = 5
{
  if (n == 1)
  {
    return 1;
  }
  else
  {
    return n * sum_1_N(n - 1);
  }
}