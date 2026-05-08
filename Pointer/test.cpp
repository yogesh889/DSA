#include<stdio.h>

int main(){

    int arr[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }


    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", arr[i][j]);
        } 
        printf("\n");
    }

    int target = 7;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j] == target){
                printf("i: %d and j: %d", i, j);
            }
        } 
    }





    return 0;
}