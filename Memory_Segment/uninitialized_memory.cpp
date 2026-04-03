#include<iostream>
using namespace std;

int glob_var;

int main(){
    
    int local_var;

    int a; 
    int b;
    int c;
    static int local_var1;
    
    // for(int i=1; i<10; i++){
    //     static int a = 1;
    //     cout<<a<<endl;
    //     a++;
    // }
    cout<<glob_var<<endl;
    cout<<local_var<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<local_var1<<endl;
    
    return 0;
}