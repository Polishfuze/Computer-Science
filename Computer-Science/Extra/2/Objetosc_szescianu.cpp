#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float bok;
    bool poprawneDane = true;
    while (poprawneDane)
    {
        cin >> bok; // Wprowadzenie dlugosci boku
        if (bok <= 0) // Sprawdzenie czy dane sa dodatnie
        {
            poprawneDane = false;
        }
        else
        {
            cout << pow(bok, 3) << endl;
        }
    }
    cout << "Bledne dane, nie ma szescianu o takim boku";
}