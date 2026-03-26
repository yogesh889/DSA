#include<iostream>
using namespace std;

int main(){

    string str = "hello world";
    string temp1 = "";
    for(int i=0; i<str.size(); i++){
        cout<<str[i]<<" ";
        
        temp1 = temp1 + str[i];
        if(str[i] == " "){
            string temp2 = temp1;
            temp1 = "";
        }
    }
    cout<<temp2+temp1<<endl;

}