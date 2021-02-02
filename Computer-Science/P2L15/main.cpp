#include <iostream>

using namespace std;

int main()
{
    char a;
    do
    {
        cout<<"Prosze podac liczbe: ";
        cin >> a;
    } while (a == cin.fail() || a < 48 || a > 58);
    cout << a;
    return 0;
}