#include <iostream>
#include <string>

using namespace std;

int main()
{
    string tab[10];

    for (int i = 0; i < 10; i++)
    {
        string word;
        cin >> word;
        tab[i] = word;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << tab[i] << ", ";
    }
}