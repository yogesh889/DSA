#include<iostream>
using namespace std;

int sum_of_Nnatural_number(int n){

    if(n == 0){
        return 0;
    }

    int smalloutput = sum_of_Nnatural_number(n-1);

    int output = n + smalloutput;

    return output;
    
}

int main(){

    int n;
    cin>>n;

    int ans = sum_of_Nnatural_number(n);

    cout<<ans<<endl;

    return 0;
}