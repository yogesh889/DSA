#include<stdio.h>

int main(){

    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        printf("it is a character");
    }else{
        printf("it is a number");
    }

    return 0;
}