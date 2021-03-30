#include <iostream>

// Dane: https://www.travelplanet.pl/przewodnik/polska/temperatury/
float temperaturyDzien[12] = {-1, 2, 6, 12, 18, 20, 22, 22, 18, 13, 5, 1}; // Dane dla sredniej temperatury w ciagu dnia
float temperaturyNoc[12] = {-9, -7, -4, 1, 5, 8, 10, 9, 6, 2, -2, -8};     // Dane dla sredniej temperatury w nocy

int main()
{
    float sumaDzien = 0;
    float sumaNoc = 0;
    int i = 0;
    while (i < 12)
    {
        sumaDzien += temperaturyDzien[i]; // Zsumowanie danych dla dnia
        i++;
    }
    i = 0;
    while (i < 12)
    {
        sumaNoc += temperaturyNoc[i]; // Zsumowanie danych dla nocy
        i++;
    }
    std::cout << "Srednie roczne temperatury w dzien: " << sumaDzien / 12 << "\nSrednie roczne temperatury w nocy: " << sumaNoc / 12; // wypis wyników w którym od razu zsumowane dane sa dzielone przez 12 aby otrzymac srednie
}