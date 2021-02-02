#include <iostream>

using namespace std;

int main()
{
    bool works = true;
    while (works)
    {
        char state;
        float a;
        float b;

        cout << "Wprowadz pierwsza liczbe: ";
        cin >> a;
        cout << "Wprowadz druga liczbe: ";
        cin >> b;
        cout << "Wpisz znak dzialania jaki chcesz uzyc [ +; -; *; /; r (stop)] ";
        cin >> state;

        switch (state)
        {
        case '+':
            cout << a << " + " << b << " = " << a + b << endl;
            break;

        case '-':
            cout << a << " - " << b << " = " << a - b << endl;
            break;

        case '/':
            if (b == 0)
            {
                cout << "Blad. Proba dzielenia przez zero!" << endl;
                break;
            }
            cout << a << " / " << b << " = " << a / b << endl;
            break;

        case '*':
            cout << a << " * " << b << " = " << a * b << endl;
            break;
        case 'r':
            works = false;
            break;
        default:
            cout << "Blad. Operacja niewspierana!" << endl;
            break;
        }
    }
    cout<<"Dziekujemy za uzywanie kalkulatora";
    return 0;
}