#include<iostream>
using namespace std;


void swap(int m, int n){

    cout<<&m<<" "<<&n<<endl;
}

int main(){

    int a, b;
    cin>>a>>b;

    swap(a, b);

    cout<<&a<<" "<<&b<<endl;

    return 0;
}