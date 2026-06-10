#include<iostream>
using namespace std;

struct Node{
    int data; 
    Node* next; 

    Node(int value){
        data = value;
        next = nullptr;
    }
};

int main(){

    Node* n1 = new Node(5);  // pointer
    Node n2(6);              // normal object

    cout <<"n1->data: " <<n1->data << endl; 
    cout <<"n2.data: " <<n2.data << endl;

    int* a = new int(10);
    int b = 6;
    
    cout <<"*a: "<< *a << endl;
    cout <<"b: "<< b << endl;

    cout <<"n1: "<< n1 << endl; // address
    cout <<"a: "<< a << endl;  // address
    cout<<"&b: "<<&b<<endl;
    cout<<"&n2: "<<&n2<<endl;


    int c = 6;
    Node n3 = 7;
    Node n4(8);
    Node n5 = {9};
    // Node n6={};  it will give error
    cout<<c<<endl;
    cout<<n3.data<<endl;
    cout<<n4.data<<endl;
    cout<<n5.data<<endl;

    delete n1;
    delete a;

    return 0;
}