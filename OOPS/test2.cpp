#include<bits/stdc++.h>
using namespace std;

class A{
    public: 
        int a, b;
        void print(){
            cout<<"Inside class A"<<endl;
            cout<<"Class A"<<endl;
        }
};

class B: public A{
    public: 
        // a = 20;
        // b = 30;
        void funB(){
            a = 20;
            b = 30;
            print();
            cout<<"Inside class B"<<endl;
            cout<<"a: "<<a<<endl;
            cout<<"b: "<<b<<endl;
        }
};

class C: public B{
    public: 
        void funC(){
            a = 40;
            b = 50;
            cout<<"Inside class C"<<endl;
            cout<<"a: "<<a<<endl;
            cout<<"b: "<<b<<endl;
            funB();
        }
};

class D: public C{
    public: 
        void funD(){
            funC();
            funB();
            print();
            a = 60;
            b = 70;
            cout<<"Inside class D"<<endl;
            cout<<"a: "<<a<<endl;
            cout<<"b: "<<b<<endl;
        }
};

int main(){

    // B Bobj;
    // Bobj.funB();
    // Bobj.print();
    D Dobj;
    Dobj.funD();

    // C Cobj;
    // Cobj.funC();

    return 0;
}