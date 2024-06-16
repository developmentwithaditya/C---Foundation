#include <iostream>
using namespace std;

int max_Of_N(int a, int b); // This is called function prototype. It will used to get the correct arguments. After define a function prototype you can write the defination of function below the main().  

int main()
{
    cout << "Max is: " << max_Of_N(2,4) << endl;
    return 0;
}

int max_Of_N(int a, int b)
{
   if (a > b)
   {
    return a;
   }
   else
   {
    return b;
   }
   
}