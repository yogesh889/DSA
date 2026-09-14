#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> &arr, int k){
    int windowSum = 0;

    for(int i=0; i<k; i++){
        windowSum += arr[i];
    }

    int maxSum =  windowSum;

    for(int i=k; i<arr.size(); i++){
        windowSum += arr[i];
        windowSum -= arr[i-k];
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}

int main(){

    vector<int> arr = {2, 1, 5, 1, 3, 2};

    cout<<maxSumSubarray(arr, 3);

    return 0;
}