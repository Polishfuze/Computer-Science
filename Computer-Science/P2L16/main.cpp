#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int num;
    int guess = 0;
    int noGuess = 0;
    srand(time(NULL));
    num = std::rand() % 1000 + 1;

    std::cout << "Prosze podac stzal (liczbe): ";
    do
    {
        char a;
        std::cin >> a;
        if (a == std::cin.fail() || a < 48 || a > 58)
        {
            std::cout << "To nie jest liczba! \nProsze podac liczbe: ";
        }
        else
        {
            guess = a - 48;
            if (guess < num)
            {
                std::cout << "Liczba za mala, prosze strzelac dalej: ";
            }
            else if (guess > num)
            {
                std::cout << "Liczba za duza, prosze strzelac dalej: ";
            }
            noGuess++;
        }
    } while (guess != num);
    std::cout << "Liczba trafiona, liczba strzalow: " << noGuess << std::endl;
    return 0;
}