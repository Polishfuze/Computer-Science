#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int tab[999];
    int i, a, b, sum;
    sum = 0;
    std::cout << "Prosze podac gorna granice zakresu\n";
    std::cin >> a;
    std::cout << "Prosze podac dolna granice zakresu\n";
    std::cin >> b;
    srand(time(NULL));

    i = 0;
    while (i < 999)
    {
        tab[i] = std::rand() % (a - b) + b;
        i++;
    }

    i = 0;
    while (i < 999)
    {
        sum += tab[i];
        i++;
    }
    std::cout << "Suma tablicy: " << sum;
}