#include <iostream>
using namespace std;

int main()
{
    // switch is a another replacement of if-else. It use case to check conditions

    int n1, n2;
    char op;
    cout << "Welcome To Basic Calculator: ";
    cin >> n1;
    cin >> op;
    cin >> n2;

    switch (op)
    {
    case '+':
        cout << "Addition of a + b is: " << n1 + n2 << endl;
        break; // break is used fot
    case '-':
        cout << "Subtraction of a - b is: " << n1 - n2 << endl;
        break;
    case '*':
        cout << "Mutiplication of a * b is: " << n1 * n2 << endl;
        break;
    case '/':
        cout << "Division of a / b is: " << n1 / n2 << endl;
        break;
    case '%':
        cout << "Remainder of a % b is: " << n1 % n2 << endl;
        break;
    default:
        cout << "Not a valid number" << endl;
        break;
    }
    return 0;
}