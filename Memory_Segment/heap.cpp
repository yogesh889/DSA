#include<iostream>
using namespace std;

int main(){

    int a = 10;

    int* b = new int(20);

    cout<<a<<" "<<b<<" "<<*b<<endl;
    
    delete b;



    return 0;
}