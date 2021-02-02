#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(NULL));
    int liczby[10];
    int i = 0;
    while (i < 10)
    {
        std::cin >> liczby[i];
        i++;
    }
    i = 0;
    int indexLos[8];

    while (i < 8)
    {
        indexLos[i] = 11;
        i++;
    }
    i = 0;
    srand(time(NULL));
    while (i < 8)
    {
        int y = 0;
        int n = 0;
        n = std::rand() % 10;
        bool powtorzenie = false;
        while (y < 8)
        {
            if (n == indexLos[y])
            {
                powtorzenie = true;
            }
            else if (y == 7 && powtorzenie == false)
            {
                indexLos[i] = n;
                i++;
            }
            y++;
        }
    }
    i = 0;
    while (i < 8)
    {
        std::cout << liczby[indexLos[i]] << std::endl;
        i++;
    }
}