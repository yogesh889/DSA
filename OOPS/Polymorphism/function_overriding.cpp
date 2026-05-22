#include<iostream>
using namespace std;

class Animal{
    public: 
        virtual void sound(){
            cout<<"Animal makes sound"<<endl;
        }
};

class Dog: public Animal{
    public: 
        void sound(){
            cout<<"Dog barks"<<endl;
        }
};

class Cat: public Animal{
    public: 
        void sound(){
            cout<<"Cat meow"<<endl;
        }
};

int main(){
    Animal* a;  // base class pointer

    Dog d;
    Cat c;
    a = &d;
    a->sound();

    a = &c;
    a->sound();

    return 0;
}