#include<stdio.h>

int main(){

    int sum = 0;

    int arr[5];

    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    int cnt = 0;

    for(int i=0; i<5; i++){
        if(arr[i] == 4){
            cnt++;
        }
    }

    printf("%d", cnt);
    
    // for(int i=0; i<5; i++){
    //     printf("%d ", arr[i]);
    // }

    return 0;
}