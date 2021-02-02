#include <iostream>
#include <limits>

using namespace std;

int wczytajLiczbe()
{
    int a;
    bool correct = false;
    do
    {
        cin >> a;
        correct = cin.good();
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (!correct)
            cout << "To nie jest liczba, prosze podac liczbe: ";
    } while (!correct);
    return a;
}

int main()
{
    cout << "Podaj liczbe: ";
    int liczba = wczytajLiczbe();
    cout << "Podales liczbe: " << liczba << endl;
    return 0;
}