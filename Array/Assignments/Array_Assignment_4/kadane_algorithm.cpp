#include<iostream>
using namespace std;

int main(){

    int arr[7] = {2, 3, -8, 7, -1, 2, 3};
    int sum = arr[0];
    for(int i=0; i<7; i++){
        int currSum = 0;
        for(int j=i; j<7; j++){
            currSum = currSum + arr[j];
            if(currSum > sum){
                sum = currSum;
            }
        }
    }

    cout<<sum<<endl;

    return 0;
}