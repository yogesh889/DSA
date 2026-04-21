#include<iostream>
#include<string>

using namespace std;

int main(){

    string str;
    cout<<"Enter sentence: ";
    getline(cin, str);

    int n = str.size();

    for(int i=0; i<n; i++){
        cout<<str[i]<<" ";
    }

    cout<<endl;

    char ch = 'A';
    cout<<int(ch)<<endl;

    int a = 65;
    cout<<char(a)<<endl;
    


    return 0;
}