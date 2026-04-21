#include<iostream>
using namespace std;

int main(){

    char str[] = "hello world";

    int i = 0, j = 0;

    while(str[i] != '\0'){
        if(str[i] != ' '){
            str[j] = str[i];
            j++;
        }
        i++;
    }

    str[j] = '\0';

    cout << "String without Spaces: " << str;

    return 0;
}