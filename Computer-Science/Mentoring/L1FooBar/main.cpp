#include <iostream>

int bot, top;

std::string x = "";

int main()
{
    std::cin >> bot;
    std::cin >> top;
    for (int i = bot; i <= top; i++)
    {
        x = "";
        if (i % 3 == 0)
        {
            x = x + "Foo";
        }
        if (i % 5 == 0)
        {
            x = x + "Bar";
        }
        else if (i % 3)
        {
            std::cout << i;
        }
        std::cout << x << "\n";
    }
}