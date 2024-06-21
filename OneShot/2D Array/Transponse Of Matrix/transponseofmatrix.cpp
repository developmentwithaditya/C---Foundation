#include <iostream>

int main()
{
    int arr[2][3] = {{6,1,2},{4,3,5}};

for (int i = 0; i < 2; i++) // rows
{
    for (int j = 0; j < 3; j++) // cols
    {
        std::cout << arr[i][j] << " ";
    }
    std::cout << std::endl;
}

// Trasnponse(Column wise)

std::cout << "Trasnponse Of Matrix: " << std::endl;

for (int j = 0; j < 3; j++) // cols
{
    for (int i = 0; i < 2; i++) // rows
    {
        std::cout << arr[i][j] << " ";
    }
    std::cout << std::endl;
}

    return 0;
}