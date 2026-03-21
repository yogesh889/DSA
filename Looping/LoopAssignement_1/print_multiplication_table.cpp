//3. Print multiplication table: Print the multiplication table for a number 𝑁.

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    //Table will from from 1 to 10
    for(int i=1; i<=10; i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }

    return 0;
}