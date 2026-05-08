#include<iostream>
using namespace std;

int main(){

    int n=5;

    
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=i; j++){
            char ch = 'A';
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }

    return 0;
}

for(int i = 1; i <= 5; i++) {        // controls rows
    for(int j = 1; j <= i; j++) {    // prints 'A' i times
        printf("A");
    }
    printf("\n");
}