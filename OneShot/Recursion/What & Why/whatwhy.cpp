#include <iostream>
using namespace std;

void greet();

int main()
{
    // Recursion is way that a function calling itself to complete the perticular task. Kind of like loops.
    // Example:

    greet();
  return 0;
}

void greet()
{
    cout << "Hey \n";
   // greet(); This function call itself infinity times.
}
