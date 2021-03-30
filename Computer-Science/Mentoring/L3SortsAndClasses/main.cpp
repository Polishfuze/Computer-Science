#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class myClass
{
private:
    int A = 10;

public:
    int NoOfStudents = 15;
    string Teacher = "Ms A";
    void printClass()
    {
        cout << "Number of students: " << NoOfStudents << "\nTeacher is: " << Teacher;
    }
};

class Sorts
{
private:
    int partition(int *tab, int l, int r)
    {
        int pivotInd = r;
        int j = 0;
        for(int i = l; i < r-1; i++)
        {
            if(tab[i] < tab[pivotInd] && i != l)
            {
                j++;
                swap(tab[i], tab[j]);
            }
        }
        swap(tab[j+1], tab[pivotInd]);
        return j+1;
    }

public:
    int *bubbleSort(int *tab, int sizeTab)
    {
        for (int j = 0; j < sizeTab; j++)
        {
            for (int i = 0; i < sizeTab - 1 - j; i++)
            {
                if (tab[i] > tab[i + 1])
                {
                    swap(tab[i], tab[i + 1]);
                }
            }
        }
        return tab;
    }
    int *quickSort(int *tab, int l, int r)
    {
        if (l < r)
        {
            int p = partition(tab, l, r);
            quickSort(tab, l, p - 1);
            quickSort(tab, p + 1, r);
        }
        return tab;
    }
};

class Printer
{
public:
    void printArr(int *Arr, int ArrLen, const char *delim = "\n", bool doNewLine=true, int newLineNum = 20)
    {
        for (int i = 0; i < ArrLen; i++)
        {
            if(doNewLine)
            {
                if(i % newLineNum == 0 && i!=0)
                {
                    cout<<'\n';
                }
            }
            cout << Arr[i] << ' ';
        }
    }
};

class DataGen
{
    public:
    int* generateRandomTab(int *tab, int size, int low, int high)
    {
        srand(time(NULL));
        for(int i = 0; i < size; i++)
        {
            tab[i] = rand()%(high-low+1) + low;
        }
        return tab;
    }
};

int main()
{
    DataGen tester;
    Printer print;
    int TabelaDoSortowania[10000];
    int WielkoscTablicy = 10000;

    tester.generateRandomTab(TabelaDoSortowania, WielkoscTablicy, 0, 1000);
    
    //print.printArr(TabelaDoSortowania, WielkoscTablicy, "");
    
    Sorts sortowania;
    int *TabelaPosortowana = sortowania.bubbleSort(TabelaDoSortowania, WielkoscTablicy);

    
    print.printArr(TabelaPosortowana, WielkoscTablicy, "");
}
