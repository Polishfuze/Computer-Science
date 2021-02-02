#include <iostream>
#include <cstdlib>
#include <ctime>

void wylosujLiczby(int* tab, int size, int lowerBound, int upperBound)
{
    
    int i = 0;
    srand(time(NULL));
    while(i < size)
    {
        tab[i] = std::rand() % (upperBound - lowerBound) + lowerBound;
        i++;
    }
    return;
}

void wypiszLiczby (int* tab, int size)
{
    int i = 0;
    while(i < size)
    {
        std::cout<<tab[i]<<std::endl;
        i++;
    }
    return;
}

int obliczSume(int* tab, int size)
{
    int sum = 0;
    int i = 0;
    while (i < size)
    {
        sum += tab[i];
        i++;
    }
    return sum;
}

int main()
{
    int tablica[999];
    wylosujLiczby(tablica, 999, 4, 10);
    wypiszLiczby(tablica, 999);
    int iSuma = obliczSume(tablica, 999);
    std::cout << "Suma liczb wynosi: " << iSuma << std::endl;
    return 0;
}