#include<stdio.h>

void print_pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
}

int multiplication(int n){
    int a = n*10;
    return a;
}

int division(int n){
    int a = 2;
    return a;
}

int count_digits(int b){
    int cnt = 0;
    while(b != 0){
        cnt++;
        b = b/10;
    }
    return cnt;
}

int main(){

    int n;
    scanf("%d", &n);

    print_pattern1(n);

    int ans = multiplication(n);
    printf("%d\n", ans);

    ans = division(n);
    printf("%d", ans);

    int b;
    scanf("%d", &b);
    ans = count_digits(b);
    printf("%d", ans);

    return 0;
}