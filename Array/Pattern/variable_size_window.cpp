#include<bits/stdc++.h>
using namespace std;

int smallestSubarray(vector<int> &arr, int target){
    int n = arr.size();
    int i = 0;
    int sum = 0;
    int min_Len = INT_MAX;
    
    //expand the window using right pointer 'j'

    for(int j=0; j<n; j++){
        sum += arr[j];
        while(sum >= target){
            min_Len = min(min_Len, j-i+1);
            sum = sum - arr[i];
            i++;
        }
    }
    return min_Len;
}

int main(){

    vector<int> arr = {1, 2, 3, 4, 5, 5, 7, 8};
    int target = 15;

    cout<<smallestSubarray(arr, target);

    return 0;
}