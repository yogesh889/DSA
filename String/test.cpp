#include<bits/stdc++.h>
using namespace std;

int main(){
// reverse the string
    string str = "hello";

    int n = str.size()-1;

    for(int i = 0; i<str.size()/2; i++){
        swap(str[i], str[n-i]);
    }

    cout<<str<<endl;
    return 0;
}