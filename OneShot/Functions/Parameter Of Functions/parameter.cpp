#include <iostream>
using namespace std;

int diff(int a, int b) // This called formal parameter of function to perfrom their task. The argument we pass in diff is copy in variable called int a, int b.
{
    return a + b;
}

int main()
{
    diff(2,1); // Inside parenthese we have to pass the argument into diff function depend upto the return type of function. This argument is called actual value.
    
    cout << "Difference of a - b is: " << diff << endl;
    return 0;
}