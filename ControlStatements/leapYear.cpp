#include<bits/stdc++.h>
using namespace std;

int main(){

    int year;
    cout<<"Enter year: ";
    cin>>year;

    if((year%4 == 0 && year%10 != 0) || (year%400 == 0)){
        cout<<year<<" is leap year."<<endl;
    }else{
        cout<<year<<" is not a leap year."<<endl;
    }

    return 0;
}