#include<bits/stdc++.h>
using namespace std;
class Base{
    public: 
        void greet(){
            cout<<"Hello from base class: \n";
        }
};
class Derived: private Base {
    public: 
        void display(){
            cout<<"This is derived class \n";
        }
};

int main(){

    Derived obj;
    obj.greet(); //Inherit from Base
    obj.display(); //Inherit from derived

    return 0;
}