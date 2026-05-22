#include<iostream>
using namespace std;

class Printer{
    public:     
        void print(int i){
            cout<<"printing int i: "<<i<<endl;
        }
        void print(string d){
            cout<<"printing double d: "<<d<<endl;
        }
};

int main(){

    Printer p;
    p.print(10);
    p.print(314);
    p.print("hello");

    return 0;
};