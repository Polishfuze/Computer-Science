#include <iostream>
#include <cstdlib>
#include <cmath>
#include <time.h>

using namespace std;

bool isSorted(int *tab, int size);

class DataGen
{
public:
    int *generateRandomTab(int *tab, int size, int low, int high)
    {
        srand(time(NULL));
        for (int i = 0; i < size; i++)
        {
            tab[i] = rand() % (high - low + 1) + low;
        }
        return tab;
    }
};

class Printer
{
public:
    void printArr(int *Arr, int ArrLen, const char *delim = "\n", bool doNewLine = true, int newLineNum = 20)
    {
        for (int i = 0; i < ArrLen; i++)
        {
            if (doNewLine)
            {
                if (i % newLineNum == 0 && i != 0)
                {
                    cout << '\n';
                }
            }
            cout << Arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
};

int *bogoSort(int *tab, int size)
{
    srand(time(NULL));
    do
    {
        int a, b;
        a = rand() % size;
        b = rand() % size;
        swap(tab[a], tab[b]);
    }while (!isSorted(tab, size));
    return tab;
}

bool isSorted(int* tab, int size)
{
    for(int i = 0; i < size-1; i++)
    {
        if(tab[i] > tab[i+1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    DataGen generator;
    Printer printer;

    const int wielkosc = 13;

    int TabelaDoSortowania[wielkosc];
    generator.generateRandomTab(TabelaDoSortowania, wielkosc, 0, 1000);
    int startTime = time(NULL);
    printer.printArr(TabelaDoSortowania, wielkosc);
    bogoSort(TabelaDoSortowania, wielkosc);
    int endTime = time(NULL);
    printer.printArr(TabelaDoSortowania, wielkosc);
    cout<<difftime(endTime, startTime);
}