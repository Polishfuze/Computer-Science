#include <iostream>

using namespace std;

int main()
{
    float dzielnik, dzielna;
    bool poprawneDane = true;
    while (poprawneDane)
    {
        cin >> dzielna; // Wprowadzenie dzielnej
        cin >> dzielnik; // Wprowadzenie dzielnika
        if (dzielnik == 0) // Sprawdzenie poprawnosci danych
        {
            poprawneDane = false;
        }
        else
        {
            cout<<dzielna/dzielnik<<endl;
        }
    }
    cout<<"Bledne dane, nie mozna dzielic przez 0";
}