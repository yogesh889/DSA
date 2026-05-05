#include<iostream>
using namespace std;

int palindrome(int n, int rev){
    if(n == 0){
        return rev;
    }

    int rem = n % 10;
    return palindrome(n / 10, rev * 10 + rem);
}

int main(){

    int n;
    cin>>n;

    int rev = 0;
    int rem = 0;

    int reversed = palindrome(n, 0);

    if(n == reversed){
        cout<<"Palindrome";
    }else{
        cout<<"not a palindrome";
    }



    // while(n != 0){
    //     rem = n % 10;
    //     rev = rev*10 + rem;
    //     n = n/10;
    // }

    // if(n = rev){
    //     cout<<"palindrome";
    // }else{
    //     cout<<"Not";
    // }

    return 0;
}