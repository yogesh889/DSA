#include <iostream>
#include <cstring>
using namespace std;

class Animal
{
private:
    char species[50];

public:
    void eat()
    {
        cout << "Animal is Eating" << endl;
    }

    void setSpecies(const char s[])
    {
        strcpy(species, s);
    }

    char* getSpecies()
    {
        return species;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is Barking" << endl;
    }
};

int main()
{
    Dog d;

    d.eat();
    d.bark();

    d.setSpecies("Mammal");

    cout << "Species: " << d.getSpecies();

    return 0;
}