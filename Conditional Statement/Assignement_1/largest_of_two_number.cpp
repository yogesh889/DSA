#include<stdio.h>

int main(){

    int a, b;


    printf("Enter two number a and b: ");
    scanf("%d %d", &a, &b);

    if(a>b){
        printf("a is the bigger number");
    }else{
        printf("b is the bigger number");
    }


    return 0;
}