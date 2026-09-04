#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {4, 0, 3, 2, 0, 19};
    int n = arr.size();
    int k = 3;

    int maxSum = INT_MIN;
    for(int left = 0; left<=n-k; left++){
        int currSum = 0;
        for(int right = 0; right<k; right++){
            currSum = currSum + arr[left + right];
        }
        maxSum = max(currSum, maxSum);
    }

    cout<<maxSum;
    return 0;
}