#include<iostream>
using namespace std;

int main(){

    int k = 5;
    int n = 13;

    int kthbit = (n>>k)&1;

    cout<<kthbit<<endl;

    return 0;
}