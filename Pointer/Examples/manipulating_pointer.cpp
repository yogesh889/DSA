#include<bits/stdc++.h>
using namespace std;

int main(){

    char ch = 'A';
    char *ptr = &ch;
    // cout<<ptr<<endl;
    cout<<&ch<<endl;

    *ptr++;

    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;

    return 0;
}