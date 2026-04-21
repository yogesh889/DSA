#include<iostream>
using namespace std;

int main(){

    string str = "madam";
    int n = str.size();

    cout<<n<<endl;

    bool isPalindrome = true; 

    if(str.empty()){
        cout<<"-1"<<endl;
    }

    for(int i = 0; i < n/2; i++){
        if(str[i] != str[n-i-1]){
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome)
        cout << "Is Palindrome: Yes";
    else
        cout << "Is Palindrome: No";

    return 0;
}