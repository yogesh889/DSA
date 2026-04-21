#include<iostream>
using namespace std;

void swap(char* p, char* q){
    char temp = *p;
    *p = *q; 
    *q = temp;
}

int main(){

    char ch[] = "abcd";
    int n = 4;

    for(int i = 0; i < n/2; i++){
        swap(&ch[i], &ch[n - i - 1]);
    }

    for(int i = 0; i < n; i++){
        cout << ch[i] << " ";
    }

    

    return 0;
}