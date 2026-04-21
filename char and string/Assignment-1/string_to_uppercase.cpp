#include<iostream>
using namespace std;

int main(){
    char str[] = "Hello";

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }


    return 0;
}