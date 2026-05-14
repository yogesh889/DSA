#include<stdio.h>

void swap(int* c, int* d){
    int temp = *c;
    *c = *d;
    *d = temp;

    printf("Inside swap function\n");
    printf("c: %p \n", c);
    printf("d: %p \n", d);
}

int main(){

    int a = 5;
    int b = 7;

    printf("Inside main function\n");
    printf("a: %p \n", &a);
    printf("b: %p \n", &b);

    printf("\n");
    printf("\n");
    printf("\n");


    swap(&a, &b);

    printf("a: %d \n b: %d", a, b);

    return 0;
}