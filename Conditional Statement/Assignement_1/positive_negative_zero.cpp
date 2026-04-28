#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    if(n<0){
        printf("number is negative");
    }else if(n>0){
        printf("number is positive");
    }else{
        printf("number is zero");
    }

    return 0;
}