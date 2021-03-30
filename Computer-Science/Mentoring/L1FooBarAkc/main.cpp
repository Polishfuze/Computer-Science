#include <iostream>

using namespace std;
int dol;
int gora;

int* Granice2()
{
    int dolnaGranica;
    int gornaGranica;
    cout << "podaj dolna granice\n";
    cin >> dolnaGranica;
    cout << "podaj gorna granice\n";
    cin >> gornaGranica;
    int tab[2] = {dolnaGranica, gornaGranica};
    return tab;
}

int main()
{
    do
    {
    int* tab = Granice2();
    dol = tab[0];
    gora = tab[1];
    }while (dol > gora);

    
    for (int i = dol; i < gora + 1; i++)
    {
        int x = 0;
        if (i % 3 == 0)
        {
            cout << "Foo";
            x = 1;
            if (i % 5 == 0)
            {
                cout << "Bar";
                x = 1;
            }
        }
        if (i % 5 == 0)
        {
            if (x == 0)
            {
                cout << "Bar";
                x = 1;
            }
        }
        if (x == 0)
        {
            cout << i;
        }
        cout << "\n";
    }
    return 0;
}


