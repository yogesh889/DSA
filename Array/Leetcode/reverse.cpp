#include<iostream>
using namespace std;

int reverse(int x) {
    int rev = 0;

    while (x != 0) {
        int digit = x % 10;
        x /= 10;

        // Check overflow before multiplying
        if (rev > INT_MAX/10 || rev < INT_MIN/10)
            return 0;

        rev = rev * 10 + digit;
    }

    return rev;
}

int main(){

    int n;
    cin>>n;

    int ans = reverse(n);
    
    cout<<ans<<endl;
    

    return 0;
}