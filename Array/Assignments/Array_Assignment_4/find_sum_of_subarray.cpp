#include<iostream>
using namespace std;

int main(){

    int arr[4] = {1, 2, 3, 4};

    for(int i=0; i<4; i++){
        int cnt = 0;
        for(int j=i; j<4; j++){
            cnt += arr[j];
            cout<<cnt<<" ";
        }

    }

    return 0;
}