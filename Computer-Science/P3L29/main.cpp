#include <iostream>
#include <cstdlib>
#include <ctime>

void wypisz(int tablica[], int rozmiar)
{
    std::cout << "Liczby w tablicy: " << std::endl;
    for (int i = 0; i < rozmiar; ++i)
        std::cout << tablica[i] << ", ";

    std::cout << std::endl;
}

void wykonajZadanie(int tablica[], int rozmiar)
{
    std::cout << "Wykonaj zadanie: " << std::endl;
    int iSumaWszystkich = 0;
    int iSumaWypisanych = 0;
    for (int i = 0; i < rozmiar; ++i)
    {
        iSumaWszystkich += tablica[i];
        if (!(tablica[i] % 2 != 0))
        {
            std::cout << tablica[i] << ", ";
            iSumaWypisanych += tablica[i];
        }
    }
    std::cout << std::endl;
    std::cout << "Suma wszystkich: " << iSumaWszystkich << std::endl;
    std::cout << "Suma wypisanych: " << iSumaWypisanych << std::endl;
}

int main()
{
    std::cout << "Czesc 1" << std::endl; //////////////////////////////////////////////////////////////////////////////////////////////////////
    bool work = true;
    for (int x = 0; work && x < 10; x++)
    {
        if (x == 7)
        {
            std::cout << "Teraz 'x' wynosi " << x << "." << std::endl;
            std::cout << "Przerywam petle!" << std::endl;
            work = false;
        }
        else
        {
            std::cout << "x = " << x << std::endl;
        }
    }
    std::cout << "Teraz jestem tu :)" << std::endl;
    std::cout << "Czesc 2" << std::endl; //////////////////////////////////////////////////////////////////////////////////////////////////////
    for (int x = 0; x < 8; x++)
    {
        std::cout << "x = " << x << std::endl;
        if (x == 2 || x == 3 || x == 5)
        {
            std::cout << "Teraz 'x' wynosi " << x;
            std::cout << " - wywoluje continue!" << std::endl;
        }
        else
        {
            std::cout << "KONIEC kroku x = " << x << std::endl;
        }
    }
    return 0;
    std::cout << "Czesc 3" << std::endl; //////////////////////////////////////////////////////////////////////////////////////////////////////
    srand(time(0));
    int tab[10];
    for (int i = 0; i < 10; ++i)
        tab[i] = rand() % 100;

    wypisz(tab, 10);
    wykonajZadanie(tab, 10);
    return 0;
    std::cout << "Czesc 2";
}