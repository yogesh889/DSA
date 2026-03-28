#include<iostream>
using namespace std;

void butter_fly(int m){
    

    for(int i=1; i<=m; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int s=1; s<=2*m-2*i; s++){
            cout<<" ";
        }
        for(int j=i; j>=1; j--){
            cout<<"*";
        }
        
        cout<<endl;
    }

}


int main(){

    int n;
    cin>>n;

    butter_fly(n);

}