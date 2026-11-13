#include<bits/stdc++.h>
using namespace std;

void printNumber(int n){
    if(n==0){
        cout<<endl;
        return;
    }

    cout<<n<<" ";
    printNumber(n-1);
    cout<<n<<" ";
}

int main(){

    int n;
    cin>>n;

    printNumber(n);

    return 0;
}