#include <iostream>
using namespace std;

int main()
{
    float cost_price;
    float sell_price;

    cout << "Welcome Loss & Profit Checker" << endl;
    cout << "Enter Cost Price: ";
    cin >> cost_price;
    cout << "Enter Selling Price: ";
    cin >> sell_price;

    if (cost_price < sell_price)
    {
        cout << "You are making Profit of: ";
        cout << sell_price - cost_price << endl;
    }
    else if (cost_price > sell_price)
    {
        cout << "You are making Loss of: ";
        cout << cost_price - sell_price << endl;
    }
    else if (cost_price == sell_price)
    {
        cout << "You are making no Profit & no Loss" << endl;
    }

    return 0;
}