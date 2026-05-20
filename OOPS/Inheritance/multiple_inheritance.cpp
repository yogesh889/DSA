#include<iostream>
using namespace std;

class Base1{
    public: 
        int a = 10;
        void base1(){
            cout<<"base 1 class called"<<endl;
        }
};

class Base2{
    public: 
        int a = 50;
        void base2(){
            cout<<"base 2 class called"<<endl;
        }
};

class Derived: public Base1, public Base2{
    public: 
        void derived(){
            cout<<"Derived class called"<<endl;
            cout<<a<<endl;
        }
};

int main(){
    Derived d;

    d.derived();
    
    return 0;
}