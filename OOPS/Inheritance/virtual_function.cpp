#include<iostream>
using namespace std;

class Animal{
    public:     
        virtual void speak(){
            cout<<"Base class called"<<endl;
        }
};

class Dog: public Animal{
    public: 
        void speak(){
            cout<<"Derived class called"<<endl;
        }
};


int main(){
    Animal* b = new Dog;
    b->speak();


    Animal a;
    a.speak();

    return 0;
}