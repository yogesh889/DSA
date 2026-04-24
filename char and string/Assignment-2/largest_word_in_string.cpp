// 4. Find the Largest Word in a String
// -> Problem Statement: Find the largest word in a char array (string).

// char str[] = "this is a test string"; 

#include<iostream>
using namespace std;

int main(){

    char str[] = "this is a test string"; 

    int maxLen = 0;
    string longestWord = "";

    int size = sizeof(str)-1;

    for(int i=0; i<size; i++){
        int len = 0;
        string word = "";
        while(i<size && str[i] != ' '){
            // cout<<str[i]<<" ";
            word += str[i];
            // cout<<word<<" ";
            len++;
            i++;
        }
        if(len > maxLen){
            maxLen = len;
            longestWord = word;
        }
    }

    cout<<endl;
    cout<<maxLen<<endl;
    cout<<longestWord<<endl;

    return 0;
}