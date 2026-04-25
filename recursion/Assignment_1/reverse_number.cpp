#include<iostream>
using namespace std;

int reverse_number(int n, int rev){

    if(n == 0){
        return rev;
    }

    int last_digit = n % 10;

    rev = rev*10 + last_digit;

    int smalloutput = reverse_number(n/10, rev);

    return smalloutput; // directly return
}


int main(){

    int n;
    cin>>n;

    int rev = 0;

    int ans = reverse_number(n, rev);

    cout<<ans<<endl;

    return 0;
}