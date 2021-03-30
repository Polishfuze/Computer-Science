#include <iostream>

int top, bot;

using namespace std;

int main()
{ 
    cin >> bot;
    cin >> top;
    for (int i = bot; i <= top; i++)
    {
        bool nieJestPodzielne = true;
        if (!(i % 3))
        {
            nieJestPodzielne = false;
            cout << "Foo";
        }
        if (!(i % 5))
        {
            nieJestPodzielne = false;
            cout << "Bar";
        }
        if ((i%5 != 0) && (i%3 != 0))
        {
            cout << i;
        }
        cout<<endl;
    }
}

/*
Napisz program który po wprowadzeniu dolnej i górnej granicy zakresu liczb wypisze
wszystkie liczby po kolei zastępując liczby podzielne przez 3 słowem Foo, liczby podzielne przez 
5 zastąpi słowem Bar, a liczby podzielne przez 5 oraz 3 zastąpi słowe FooBar.

Przykładowe wejście:
1
15
Przykładowe wyjście:
1
2
Foo
4
Bar
Foo
7
8
Foo
Bar
11
Foo
13
14
FooBar
*/