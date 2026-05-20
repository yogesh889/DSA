#include<iostream>
using namespace std;

class Base{
    protected: 
        int protected_Value = 42;
};

class Derived: public Base{
    public:     
        void show(){
            cout<<"protected Value: "<<protected_Value<<endl;
        }
};

int main(){

    Derived d;
    d.show();

    // cout<<d.protected_Value<<endl;

    return 0;
}