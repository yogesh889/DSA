// 3. Find Longest Consecutive Subsequence: Write a program to find the length of the longest consecutive subsequence in an unsorted array.

// Input: arr = [100, 4, 200, 1, 3, 2]

// Output: 4

#include <iostream>
#include <algorithm>
using namespace std;

int longestConsecutive(int arr[], int n) {
    sort(arr, arr + n); // sort array

    int maxLen = 1, currLen = 1;

    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i-1] + 1) {
            currLen++;
        }
        else if(arr[i] != arr[i-1]) {
            currLen = 1;
        }
        maxLen = max(maxLen, currLen);
    }

    return maxLen;
}

int main(){

    int arr[6] = {100, 4, 200, 1, 3, 2};
    int n = sizeof(arr)/sizeof(int);

    int ans = longestConsecutive(arr, n);

    cout<<ans<<endl;

    return 0;
}