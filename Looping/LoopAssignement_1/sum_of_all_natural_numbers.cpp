//2. Sum of first N natural numbers: Calculate the sum of the first N natural numbers using a loop.

#include<iostream>
using namespace std;

int main(){

    //Declaration
    int n;
    // taking input
    cin>>n;

    //initializing sum with value 0
    int sum = 0;

    //Every time loop runs we are string the value of i in sum variable (sum = sum + i)
    for(int i=1; i<=n; i++){
        sum += i;
    }

    cout<<sum<<endl;

    return 0;
}