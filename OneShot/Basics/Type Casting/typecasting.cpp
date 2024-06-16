#include <iostream>
using namespace std;

int main()
{
    // Type Casting is thing that convert a datatype to another datatype like: 
    
int x;  
float half;  
cout << "Enter x: ";
cin >> x;
half = (float) x / 2; // This line of code will convert int x to float x using (float) x and store there division into a float variable called "half"
cout << "Half Of x is: " << half << endl;


    return 0;
}