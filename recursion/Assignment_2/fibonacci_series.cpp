#include<iostream>
using namespace std;

void fibonacci_series(int n, int a, int b){

    if(n == 0){
        return ;
    }
    
    cout<<a<<" ";
    fibonacci_series(n-1, b, a+b);
}

int main(){

    int n;
    cin>>n;

    int a = 0;
    int b = 1; 

    fibonacci_series(n, 0, 1);

    return 0;
}