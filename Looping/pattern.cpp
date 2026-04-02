#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        int num = (i+1)/2;
        int count = ((i/2)+1)*2;
        for(int j=1; j<=count; j++){
            cout<<num;
        }
        cout<<endl;
    }

    return 0;
}