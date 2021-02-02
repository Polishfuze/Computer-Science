#include <iostream>
#include <fstream>
#include <string>



bool returnWordLines(std::string sName, std::string sWord)
{
    std::ifstream file;
    file.open(sName.c_str());
    if (!file.good())
    {
        file.close();
        return true;
    }
    else
    {
        std::string line;
        while (std::getline(file, line))
        {
            if (line.find(sWord) != std::string::npos)
            {
                std::cout<<line<<std::endl;
            }
        }
    }
    file.close();
    return false;
} 

int main()
{
    if (returnWordLines("D:\\CS\\Computer-Science\\P4L32\\test.txt", "sed"))
        std::cout << "Nie udalo sie otworzyc pliku o podanej nazwie." << std::endl;

    return 0;
}