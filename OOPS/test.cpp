//Function overriding is a feature in object-oriented programming that allows a derived class to provide a specific implementation of a function that is already defined in its base class. In C++, function overriding is achieved by defining a function in the derived class with the same name, return type, and parameters as the function in the base class.
#include<bits/stdc++.h>
using namespace std;

class Animal{
    public: 
        virtual void speak(){
            cout<<"Base class";
        }
};

class Dog: public Animal{
    public:
        void speak(){
            cout<<"Derived class";
        }
};

int main(){

    Animal *a = new Dog();
    a->speak();

    delete a;

    return 0;
}