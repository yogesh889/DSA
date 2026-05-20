#include<iostream>
using namespace std;

class Parent{
    public: 
        string hair = "Black";
         
        void p_inherit(){
            cout<<"color of hair is "<<hair<<endl;
        }
};

class Child: public Parent{
    public: 
        void c_inherit(){
            cout<<"color of hair is "<<hair<<endl;
        }
};

int main(){
    // it will occupy memory in stack;
    Parent p;
    Child c;

    // it will occupy memory in heap;
    // Parent* p = new Parent;
    p.p_inherit();
    c.c_inherit();

    return 0;
}