#include<iostream>
using namespace std;

int gcd_of_number(int m, int n){
    int gcd = 1;

    int min = (m<n)? m : n;

    for(int i=min; i>=1; i--){
        if(m%i == 0 && n%i == 0){
            gcd *= i;
            break;
        }
    }
    return gcd;
}

int main(){

    int a, b;
    cin>>a>>b;

    int ans = gcd_of_number(a, b);
    cout<<ans;

    return 0;
}