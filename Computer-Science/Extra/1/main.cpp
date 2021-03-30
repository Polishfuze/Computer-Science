#include <iostream>
#include <string>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int zamienLiczbeNaDzies(string Liczba, int systemLiczbowy)
{
    int LiczbaInt = 0;
    for (int i = 0; i < Liczba.size(); i++)
    {
        if (Liczba[Liczba.size() - 1 - i] < 58)
        {
            LiczbaInt += (Liczba[Liczba.size() - 1 - i] - 48) * pow(systemLiczbowy, i);
        }
        else
        {
            LiczbaInt += (Liczba[Liczba.size() - 1 - i] - 55) * pow(systemLiczbowy, i);
        }
    }
    return LiczbaInt;
}

void dodajLiczby()
{
    string L1, L2, sumaLiczb;
    int systemLiczbowy, iL1, iL2, suma, suma2;
    cout << "Podaj pierwsza liczbe: ";
    cin >> L1;
    cout << "\nPodaj druga liczbe: ";
    cin >> L2;
    cout << "\nPodaj system liczbowy(do 16): ";
    cin >> systemLiczbowy;

    iL1 = zamienLiczbeNaDzies(L1, systemLiczbowy);
    iL2 = zamienLiczbeNaDzies(L2, systemLiczbowy);

    suma = iL1 + iL2;
    suma2 = suma;
    sumaLiczb = "";
    while (true)
    {
        if (suma2 % systemLiczbowy < 10){
            sumaLiczb += char(suma2 % systemLiczbowy + 48);
        }
        else
        {
            sumaLiczb += char(suma2 % systemLiczbowy + 55);
        }
        suma2 -= suma2 % systemLiczbowy;
        suma2 /= systemLiczbowy;
        if (suma2 == 0)
        {
            break;
        }
    }
    reverse(sumaLiczb.begin(), sumaLiczb.end());

    cout << "Suma w systemie dziesietnym: " << suma << "\nSuma w systemie wpisanym: " << sumaLiczb;
}

int main()
{
    dodajLiczby();
}