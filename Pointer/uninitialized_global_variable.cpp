#include<iostream>
using namespace std;

int global_var;

int main(){

    static int static_local_var;

    int local_var;

    cout<<local_var<<endl;
    cout<<global_var<<endl;
    cout<<static_local_var<<endl;



    return 0;
}