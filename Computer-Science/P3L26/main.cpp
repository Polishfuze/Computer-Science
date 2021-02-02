#include <iostream>
#include <limits>
#include <string>

using namespace std;

void readPeson(string &name, string &surname, int &age)
{
    bool correct;

    cin.sync();
    cout << "Podaj imie: ";
    getline(cin, name);

    cout << "Podaj nazwisko: ";
    getline(cin, surname);

    cout << "Podaj wiek: ";
    cin.ignore();
    cin >> age;

    correct = cin.fail();

    if (correct)
        while (correct)
        {

            cout << "Bledne dane, wpisz wiek (liczbe): ";
            cin.clear();
            cin.ignore();

            cin >> age;
            correct = cin.fail();
        }
}

void displayPerson(string name, string surname, int age)
{
    cout << "Imie: " << name << endl
         << "Nazwisko: " << surname << endl
         << "Wiek: " << age << endl;
    return;
}

int main()
{
    std::string imie[2];
    std::string nazwisko[2];
    int wiek[2];
    for (int i = 0; i < 2; i++)
        readPeson(imie[i], nazwisko[i], wiek[i]);

    for (int i = 0; i < 2; i++)
        displayPerson(imie[i], nazwisko[i], wiek[i]);
}