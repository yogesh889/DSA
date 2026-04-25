#include<iostream>
using namespace std;

int power_of_number(int base, int exponent){
    //base case
    if(exponent == 0){
        return 1;
    }

    //recursive call
    int smallOutput = power_of_number(base, exponent-1);
    int output = base*smallOutput;

    return output;
}

int main(){

    int base, exponent;
    cin>>base>>exponent;

    int ans = power_of_number(base, exponent);

    cout<<ans<<endl;
    

    return 0;
}