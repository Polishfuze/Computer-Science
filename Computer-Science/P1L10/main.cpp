#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    if(b != 0)
    {
        cout << "a / b = " << a / b << endl;
        cout << "a % b = " << a % b << endl;
    }
    else
    {
        cout << "a / b = NaN" << endl;
        cout << "a % b = NaN" << endl;
    }
    return 0;
}