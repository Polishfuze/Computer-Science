#include <iostream>
#include <string>

std::string konwertuj(std::string sTekst)
{
    std::string sWynik = sTekst;
    size_t i = 0;
    do
    {
        i = sWynik.find("<b>");
        if (i != std::string::npos)
        {
            sWynik.erase(i, 3);
            sWynik.insert(i, "[b]");
        }
    } while (i != std::string::npos);
    i = 0;
    do
    {
        i = sWynik.find("</b>");
        if (i != std::string::npos)
        {
            sWynik.erase(i, 4);
            sWynik.insert(i, "[/b]");
        }
    } while (i != std::string::npos);
    i = 0;
    do
    {
        i = sWynik.find("  ");
        if (i != std::string::npos)
        {
            sWynik.erase(i, 2);
            sWynik.insert(i, " ");
        }
    } while (i != std::string::npos);
    return sWynik;
}
int main()
{
    std::cout << konwertuj("<b>to jest </b> testowy       napis     <b>:)") << std::endl;
    std::cout << konwertuj("  s       a         m      e         sp    a   c j    e") << std::endl;
    std::cout << konwertuj("<<B><//b><i></i>") << std::endl;
    return 0;
}