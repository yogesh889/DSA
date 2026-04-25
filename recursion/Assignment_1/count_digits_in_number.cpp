#include<iostream>
using namespace std;

int count_digits_in_number(int n){

    if(n < 0){
        n = -n;
    }

    if(n == 0){
        return 0;
    }

    int smalloutput = count_digits_in_number(n/10);

    int output = 1 + smalloutput;

    return output;

}

int main(){

    int n;
    cin>>n;
    int cnt = 0;

    int ans = count_digits_in_number(n);

    cout<<ans<<endl;
    

    return 0;
}