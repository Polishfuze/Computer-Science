#include <iostream>
#include <cstdlib>
#include <ctime>

void wypiszLiczby(int *tab, int size)
{

    for (int i = 0; i < size; i++)
    {
        std::cout << tab[i] << std::endl;
    }
    return;
}

void wypelnijTablice(int *tab, int size)
{
    for (int i = 0; i < size; i++)
    {
        tab[i] = 1 + 5 * i;
    }
    return;
}

void wypiszLiczbyOdTylu(int *tab, int size)
{

    for (int i = 0; i < size; i++)
    {
        std::cout << tab[size - i - 1] << std::endl;
    }
    return;
}

void wypelnijTabliceLos(int *tab, int size, int lowerBound = 0, int upperBound = 100)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        tab[i] = std::rand() % (upperBound - lowerBound) + lowerBound;
    }
    return;
}

int smallestNum(int* tab, int size)
{
    int small = 10000;
        for(int i = 0; i < size; i++)
        {
            if(tab[i] < small)
            {
                small = tab[i];
            }
        }
    return small;
}

int biggestNum(int* tab, int size)
{
    int big = 0;
    for(int i = 0; i < size; i++)
    {
        if (tab[i] > big)
        {
            big = tab[i];
        }
    }
    return big;
}

int main()
{
    //Część pierwsza programu
    std::cout<<"Czesc 1: \n";
    int tab[20];
    wypelnijTablice(tab, 20);
    wypiszLiczby(tab, 20);
    //Część druga programu
    std::cout << "Czesc 2: \n";
    int tab2[10];
    wypelnijTabliceLos(tab2, 10, 10, 30);
    std::cout<<"Liczby losowe\n";
    wypiszLiczby(tab2, 10);
    std::cout << "Liczby losowe od tylu\n";
    wypiszLiczbyOdTylu(tab2, 10);
    std::cout<<"Najmniejsza liczba: "<< smallestNum(tab2, 10) << "\nNajwieksza liczba: "<< biggestNum(tab2, 10);
}