#include<iostream>
using namespace std;

int main(){

    int a, b;

    cin>>a>>b;

    int ans = 1;

    int max = (a>b)? a: b;

    for(int i=1; i<=max; i++){
        if(a%i == 0 && b%i == 0){
            ans *= i;
        }
    }

    cout<<ans<<endl;

    return 0;
}