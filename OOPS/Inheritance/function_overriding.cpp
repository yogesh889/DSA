#include<iostream>
using namespace std;

class Employee{
    public: 
        void work(){
            cout<<"Base class called"<<endl;
        }
};

class Developer: public Employee{
    public: 
        void work(){
            cout<<"Derived class called"<<endl;
        }
};

int main(){

    Developer dev;
    Employee emp;
    emp.work();
    dev.work();
    
    return 0;
}