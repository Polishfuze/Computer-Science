#include <iostream>
#include <fstream>

void readNums(std::string sFileName)
{
    std::ifstream file;
    file.open(sFileName.c_str());
    if (file.bad())
    {
        return;
    }
    else
    {
        int sum = 0;
        while (true)
        {
            std::string word;
            file >> word;
            if (file.fail())
            {
                break;
            }
            std::string Num;
            for(int i = 0; i < word.length(); i++)
            {
                if (word[i] < 58 && word[i] > 48)
                {
                    Num += word[i];
                }
            }
            std::cout<<Num<<"\n";
        }
        std::cout<<"\n"<<"Suma liczb: "<<sum;
        return;
    }
}

int main()
{
    readNums("D:\\CS\\Computer-Science\\P4L34\\test.txt");
}