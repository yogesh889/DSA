#include<iostream>
using namespace std;

struct Node{
    string name; 
    int age; 

    void rectangle(){
        int l, b;
        cin>>l>>b;
        cout<<"Area of rectange is: "<<l*b<<endl;
    }
};

int main(){

    struct Node n1 = {"yogesh", 43};

    cout<<"Name: "<<n1.name<<endl;
    cout<<"Age: "<<n1.age<<endl;
    n1.rectangle();

    return 0;
}