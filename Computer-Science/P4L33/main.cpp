#include <iostream>
#include <fstream>
#include <string>

int sumFile(std::string sFileName)
{
    std::ifstream file;
    file.open(sFileName.c_str());
    if (file.bad())
    {
        return 0;
    }
    else
    {
        long long sum = 0;
        while (true)
        {
            int word;
            file >> word;
            if(!file.fail())
            {
                sum += word;
            }
            else
            {
                return sum;
            }
        }
    }
}

int main()
{
    std::cout<<sumFile("D:\\CS\\Computer-Science\\P4L33\\test.txt");
}