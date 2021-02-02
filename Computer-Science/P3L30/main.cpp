#include <iostream>

using namespace std;

void wypiszLiczby(int *tab, int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
    return;
}

void piecPudelekWypisz()
{
    int tab[5]{1, 1, 1, 1, 1};
    for (int e = 1; e <= 3; e++)
    {
        tab[0] = e;
        for (int d = 1; d <= 3; d++)
        {
            tab[1] = d;
            for (int c = 1; c <= 3; c++)
            {

                tab[2] = c;
                for (int b = 1; b <= 3; b++)
                {
                    tab[3] = b;
                    for (int a = 1; a <= 3; a++)
                    {
                        tab[4] = a;
                        wypiszLiczby(tab, 5);
                    }
                }
            }
        }
    }
}

void piecPilekLosuj()
{
    for (int c = 1; c <= 5; c++)
    {
        for (int b = 1; b <= 5; b++)
        {
            for (int a = 1; a <= 5; a++)
            {
                if (a != b && b != c && a != c)
                {
                    cout << c << ' ' << b << ' ' << a << endl;
                }
            }
        }
    }
}

int main()
{
    cout << "Czesc 1:\n";
    piecPudelekWypisz();
    cout << "Czesc 2:\n";
    piecPilekLosuj();
}
