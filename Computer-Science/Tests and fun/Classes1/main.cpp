#include <iostream>

using namespace std;

class MyClass
{                // The class
private:         // Access specifier, not accesible from outside
    int privNum; // Attribute (int variable)
public:          // Access specifier, accesible from outside
    int myNum;   // Attribute (int variable)
    // Setter
    void setPrivNum(int s)
    {
        privNum = s;
        return;
    }
    // Getter
    int getPrivNum()
    {
        return privNum;
    }
};

int main()
{
    MyClass myObj; // Create an object of MyClass

    // Access attributes and set values
    myObj.myNum = 15;
    myObj.setPrivNum(100);


    // Print attribute values
    cout<<myObj.myNum << "\n";
    cout<<myObj.getPrivNum();
    return 0;
}