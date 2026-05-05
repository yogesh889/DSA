#include<stdio.h>

int main(){

    int arr[5] = {1, 2, 3, 4, 5};

    int a;
    int* p = &a;
    scanf("%d", *p);
    printf("%d", *p);

    // printf("%p\n", arr[0]);
    // printf("%p\n", arr[1]);
    // printf("%p\n", arr[2]);
    // printf("%p\n", arr[3]);
    // printf("%p\n", arr[4]);

    // printf("\n");
    // printf("\n");
    // printf("\n");
    // printf("\n");


    // printf("%p \n", &arr);
    // printf("%p \n", &arr+1);
    // printf("%p \n", &arr+2);
    // printf("%p \n", &arr+3);
    // printf("%p \n", &arr+4);

    // printf("\n");
    // printf("\n");
    // printf("\n");
    // printf("\n");
    // printf("\n");
    
    // printf("%p \n", arr);
    // printf("%p \n", arr+1);
    // printf("%p \n", arr+2);
    // printf("%p \n", arr+3);
    // printf("%p \n", arr+4);

    // printf("%d", *(&arr[0]));




    // int a = 2;

    // int* p = &a; // pointer p will store the address of a
    // // int *p = &a;

    // // pointer to pointer
    // int** q = &p; // pointer q will store the address of pointer p

    // printf("%d \n", a); //2
    // printf("%p \n", p); // 
    // printf("%p \n", q);
    // printf("%p \n", &p);
    // printf("%p \n", &q);
    // printf("%p \n", &a);
    // printf("%d \n", *p);
    // printf("%p \n", *q);
    // printf("%d \n", **q);



    // // printf("%d \n", a);
    // // // printf("%d \n", &a); // it will give garbage value as format specifier is not correct
    // // printf("%p \n", &a); // print the address of a
    // // printf("%p \n", p); // it will give the value present at p
    // // printf("%d", *p);

    return 0;
}
