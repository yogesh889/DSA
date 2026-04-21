#include<iostream>
using namespace std;

int main(){

    int arr[4] = {1, 2, 3, 4};
    int arrmul[4];

    for(int i=0; i<4; i++){
        arrmul[i] = 1;
        for(int j=0; j<4; j++){
            if(i != j){
                arrmul[i] = arrmul[i]*arr[j];
            }
        }
    }

    for(int i=0; i<4; i++){
        cout<<arrmul[i]<<" ";
    }

    return 0;
}