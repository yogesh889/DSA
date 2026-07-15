#include<iostream>
using namespace std;

void countNumber(int n){
    if(n == 0){
        return;
    }

    cout<<n<<" ";
    countNumber(n-1);
    cout<<n<<" ";
}

int main(){

    int n = 5;

    countNumber(n);

    return 0;
}