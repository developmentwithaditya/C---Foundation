#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your number: ";
    cin >> n;

    // Ternary Operator is a another way to write if-else with minimum lines of code
    // (condition) ? = operator if true : if false;
    
    (n % 2 == 0) ? cout << "Even" << endl : cout << "Odd" << endl;

    return 0;
}