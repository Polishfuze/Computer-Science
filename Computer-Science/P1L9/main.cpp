#include <iostream>
#include <limits>

using namespace std;

int main()
{
    float num1, num2, num3;
    bool err1, err2, err3;
    cin >> num1;
    err1 = cin.fail();
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin >> num2;
    err2 = cin.fail();
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin >> num3;
    err3 = cin.fail();
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Pierwsza liczba to " << num1 << ". Blad? " << err1 << endl << "Druga liczba to " << num2 << ". Blad? " << err2 << endl << "Trzecia liczba to " << num3 << ". Blad? " << err3 << endl;

    return 0;
}