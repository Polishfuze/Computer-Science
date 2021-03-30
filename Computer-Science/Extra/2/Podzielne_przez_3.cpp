#include <iostream>

/*
Algorytm:

Wpisywanie liczb:
 Wpisz pierwsza liczbe
 Czy liczba jest podzielna przez 3?
  Tak:
   Zwieksz sume o 1
 Czy liczba jest nie rowna 0?
 Tak:
  Wroc do Wpisywanie liczb

Wypisz sume
*/

using namespace std;

int main()
{
    int n = 0;
    int sumaLiczbPodzielnych = 0;
    do
    {
        cin>>n;
        if (n % 3 == 0)
        {
            sumaLiczbPodzielnych += 1;
        }
    }while (n != 0);
    cout<<"Suma liczb podzielnych przez 3: "<<sumaLiczbPodzielnych<<endl;
}