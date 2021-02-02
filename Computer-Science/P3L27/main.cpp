#include <iostream>
#include <string>

bool szukaj(std::string &tekst, std::string wyraz1, std::string wyraz2)
{
    size_t a = tekst.find(wyraz1);
    size_t b = tekst.find(wyraz2);
    if(a == std::string::npos || b == std::string::npos)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void wypiszWynik(bool czyZnaleziono)
{
    if (czyZnaleziono)
        std::cout << "Znaleziono" << std::endl;
    else
        std::cout << "Nie znaleziono" << std::endl;
}

int main()
{
    std::string napis = "Zadanie domowe z kursu C++ (http://cpp0x.pl) - najlepszy kurs C++ w Internecie!";
    wypiszWynik(szukaj(napis, "ada", "kurs"));
    wypiszWynik(szukaj(napis, "ada", "taki"));
    wypiszWynik(szukaj(napis, "C++", "cpp0x"));
    wypiszWynik(szukaj(napis, "C#", "cpp0x"));
    return 0;
}