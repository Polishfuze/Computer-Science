#include <iostream>

void zakres(int x, int y)
{
    int i = x;
    while (i <= y)
    {
        std::cout << i << ", ";
        i++;
    }

    std::cout << "koniec" << std::endl;
}

int main()
{
    zakres(1, 5);
    zakres(8, -1);
    zakres(10, 10);
    return 0;
}