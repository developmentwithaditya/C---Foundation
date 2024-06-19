#include <iostream>

int main()
{
    // fill() - fills a range of elements with a specified value
    // Sytax - fill(begin, end, value)

    // This array of 5 strings has the same value of pizza.What if we have the size is 50 or 100.

    std::string foods[5] = {"pizza", "pizza", "pizza", "pizza", "pizza"};

    std::cout << "Filling array with pizza manually :" << std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout << foods[i] << std::endl;
    }

    std::cout << "\n";

    // We can use fill function to fill the array of size[50] with the value of "pizza"

    std::cout << "Filling array with pizza using fill function :" << std::endl;

    std::string food[50];

    fill(food, food + 50, "pizza");

    for (int i = 0; i < 50; i++)
    {
        std::cout << food[i] << std::endl;
    }

    return 0;
}