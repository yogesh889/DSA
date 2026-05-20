#include<iostream>
using namespace std;

class Base{
    public:
        int b = 30;

        void greet(){
            cout << "hello from base class" << endl;
        }
};

class Derived : public Base{
    public:
        void display(){
            cout << "I am displaying the value of b: " << b << endl;
        }
};

int main(){

    

    // Think of inheritance like this:
    // Derived is a Base
    // But Base is not necessarily a Derived

    // Example analogy:
    // A Car is a Vehicle
    // But a Vehicle is not always a Car

    // Because a derived object contains everything a base object has
    Base* b = new Derived;
    // Base* b = new Base;
    Derived* d = new Derived;
    
    // Because a base object does not contain derived-specific parts
    // Derived* d = new Base;

    b->greet();
    // b->display();
    d->display();

    return 0;
}