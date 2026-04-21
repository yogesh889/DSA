#include<iostream>
#include<string>
using namespace std;

void swap(char* p, char* q){
    char temp = *p;
    *p = *q; 
    *q = temp;
}

int main(){

    string str = "hello";
    int n = str.size();

    cout<<str;

    cout<<endl;

    for(int i=0; i<n/2; i++){
        swap(&str[i], &str[n-i-1]);
    }

    for(int i=0; i<n; i++){
        cout<<str[i]<<" ";
    }

    return 0;
}