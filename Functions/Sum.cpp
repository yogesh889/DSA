#include<stdio.h>

void isPrime(){
    int n;
    scanf("%d", &n);
    printf("%d", n);
    int count = 0;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            count++;
        } 
    }

    if(count >2){
        printf(" not a prime number");
    }else{
        printf(" prime number");
    }
}
int sum(int m, int n){
    // int c;
    // int c = m+n;
    return m+n;
}
void multiplication(int m, int n){

}
int subtraction(int x, int y){
    return x-y;
}

int main(){
    int a, b, addition, subraction;
    scanf("%d %d", &a, &b);

    int c = sum(a, b);
    printf("sum of numbers: ");
    printf("%d", c);
    printf("\n subtraction of numbers: ");
    printf("%d \n", subtraction(a, b));

    printf("Enter number to check whether it is prime or not: ");
    isPrime();

    return 0;
}
//create a function to check prime number
//create right angle pattern using fuction 