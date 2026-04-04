#include<iostream>
using namespace std;

int sum_of_N_number(int m){

    //Base case
    if(m==0){
        return 0;
    }

    cout<<m<<endl;

    //Recursive case
    return m + sum_of_N_number(m-1);
}

int main(){

    int n;
    cin>>n;

    int ans = sum_of_N_number(n);

    cout<<ans<<endl;

    return 0;
}