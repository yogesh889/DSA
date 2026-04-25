#include<iostream>
using namespace std;

int sum_of_digits(int n){
    // Base case
    if(n == 0){
        return 0;
    }

    int last_digit = n % 10;
    n = n/10;

    // Recursive call
    int smalloutput = sum_of_digits(n);

    int output = last_digit + smalloutput;

    return output;
     
}

int main(){

    int n;
    cin>>n;

    int ans = sum_of_digits(n);

    cout<<ans<<endl;

    return 0;
}