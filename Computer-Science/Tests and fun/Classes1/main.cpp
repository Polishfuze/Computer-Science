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

class Animal
{
public:
    void animalSound()
    {
        cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal
{
public:
    void animalSound()
    {
        cout << "The pig says: You have the right to remain silent! \n";
    }
};

// Derived class
class Dog : public Animal
{
public:
    void animalSound()
    {
        cout << "The dog says: OWA OWA \n";
    }
};



int main()
{
    Animal cow;
    Dog Charlie;
    Pig Peppa;

    cow.animalSound();
    Charlie.animalSound();
    Peppa.animalSound();


    //MyClass myObj; // Create an object of MyClass
    //// Access attributes and set values
    //myObj.myNum = 15;
    //myObj.setPrivNum(100);
    //// Print attribute values
    //cout<<myObj.myNum << "\n";
    //cout<<myObj.getPrivNum();
    //return 0;
}