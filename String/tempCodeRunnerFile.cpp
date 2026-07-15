#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){

    string str = "hello how are you";
    
    vector<string> vec;
    string word = "";
    int i = 0;

    while(i < str.size()){
        if(str[i] == ' '){
            vec.push_back(word);
            word = "";
        }else{
            word += str[i];
        }
        i++;
    }

    //push the last word
    vec.push_back(word);

    string revS = "";
    for(auto s: vec){
        revS += s;
        rev = " ";
    }

    cout<<revS;


    return 0;
}