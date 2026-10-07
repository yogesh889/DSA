#include<bits/stdc++.h>
using namespace std;

class Animal{
    int l, b, h;
    public: 
        void areaOfRectacgle(l, b){
            cout<<l*b;
        }
        virtual void sound(){
            int a = 15;
            cout<<a*5<<endl;
            cout<<"Animal makes sound \n";
        }
};

class Dog: public Animal{
    public: 
        void sound(){
            cout<<"Dog barks \n";
        }
        void areaOfReactangle(2, 3);
};

class Cat: public Animal{
    public: 
        void sound(){
            cout<<"Cat meow \n";
        }
};

int main(){

    Animal* a; //base class pointer

    Dog d;
    Cat c;

    a = &d;
    a->sound();

    a = &c;
    a->sound();

    return 0;
}