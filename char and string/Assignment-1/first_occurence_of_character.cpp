#include<iostream>
using namespace std;

int main(){

    char str[] = "";
    char ch = 'l';

    int n = sizeof(str);

    if(n == 1){
        cout<<"-1"<<endl;
    }

    for(int i=0; i<n; i++){
        if(str[i] == 'l'){
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}