#include<iostream>
using namespace std;

void swap(int* p, int* q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main(){

    int *p = NULL; // old way of writing null pointer
    int *q = nullptr; // new way of writing null pointer

    int a, b;

    cin>>a>>b;

    cout<<a<<" "<<b<<endl;
    
    swap(&a, &b);

    cout<<a<<" "<<b<<endl;


    return 0;
}