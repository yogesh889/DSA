#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void display()
    {
        cout << "Animal Sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void display()
    {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal
{
public:
    void display()
    {
        cout << "Cat meows" << endl;
    }
};

int main()
{
    Animal* ptr;

    ptr = new Dog();
    ptr->display();

    ptr = new Cat();
    ptr->display();

    return 0;
}