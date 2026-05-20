#include<iostream>
using namespace std;

class Animal{
    public:
        void sound(){
            cout << "Animal sound" << endl;
};

class Dog :virtual public Animal{

};

class Cat :virtual public Animal{

};

class Hybrid : public Dog, public Cat{

};

int main(){

    Hybrid h;

    h.sound();  // ERROR

    return 0;
}