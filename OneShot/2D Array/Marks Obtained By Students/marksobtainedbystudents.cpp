#include <iostream>

int main()
{
    int arr[4][2] = {{54, 76}, {64, 86}, {35, 67}, {48, 90}};

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 2; i++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}