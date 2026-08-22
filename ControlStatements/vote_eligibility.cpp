#include<bits/stdc++.h>
using namespace std;

int main(){

    int age;
    cout<<"Enter age: ";
    cin>>age;

    if(age > 18){
        cout<<"Person is eligible for vote";
    }else{
        cout<<"person is not eligible for vote";
    }
    
    return 0;
}