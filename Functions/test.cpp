// pass by address
#include<stdio.h>

void swap(int* c, int* d){

    printf("address of c and d inside swap function \n");
    printf("%p\n", &c);
    printf("%p\n", &d);
    printf("\n");

    // c = c+d;
    // d = c-d;
    // c = c-d;

    // printf("a: %d\n", a);
    // printf("b: %d\n", b);

}

int main(){

    int a = 4; 
    int b = 9;

    swap(&a, &b);

    printf("address of a and b inside main function \n");
    printf("%p\n", &a);
    printf("%p\n", &b);

    return 0;
}