#include<iostream>
using namespace std;

class GrandParent{
    public: 
        string hair = "Black";
        virtual void inherit(){
            cout<<"Grandparent hair is black"<<endl;
        }
};

class Parent: public GrandParent{
    public:     
        void inherit(){
            cout<<"Parent hair is also "<<hair<<endl;
        }
};

class Child: public Parent{
    public: 
        virtual void inherit(){
            cout<<"Child hair is also "<<hair<<endl;
        }
};

int main(){
    GrandParent* g = new Child;
    Parent* p = new Parent;
    Child* c = new Child;

    g->inherit();
    p->inherit();
    c->inherit();


    return 0;
}