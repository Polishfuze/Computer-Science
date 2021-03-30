#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    float n, suma;
    suma = 0;
    do
    {
        if (cin >> n) // Wprowadzenie liczby wplat
        {
            if (ceil(n) != floor(n))
            {
                cout << "Bledne dane!\n";
            }
        }
        else
        {
            cout << "Bledne dane!\n";
            cin.ignore(1000, '\n');
            cin.clear();
            cin.sync();
            n = 1.5;
        }
    } while (ceil(n) != floor(n));
    for (int i = 0; i < n; i++)
    {
        int a = 0;
        while (a <= 0)
        {
            if (cin >> a) // Wczytanie poszczegolnych wplat
            {
                suma += a; // Zwiększanie sumy o wpisana wplate
            }
            else
            {
                cout << "Bledne dane!\n";
                cin.ignore(1000, '\n');
                cin.clear();
                cin.sync();
                a = 0;
            }
        }
    }
    cout << suma; // Wypisanie sumy
}