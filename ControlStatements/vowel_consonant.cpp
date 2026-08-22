#include<bits/stdc++.h>
using namespace std;

int main(){

    char n;
    cout<<"Enter character: ";
    cin>>n;

    if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u' || n=='A' || n=='E' || n=='I' || n=='O' || n=='U'){
        cout<<n<<" is vowel";
    }else{
        cout<<n<<" consonant";
    }

    return 0;
}