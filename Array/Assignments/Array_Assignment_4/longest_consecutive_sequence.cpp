#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int longestConsecutive(vector<int>& arr) {

    int n = arr.size();
    if(n == 0) return 0;

    sort(arr.begin(), arr.end());

    int cnt = 1;
    int maxLen = 1;

    for(int i = 1; i < n; i++) {

        if(arr[i] == arr[i-1]) {
            continue; // skip duplicates
        }
        else if(arr[i] == arr[i-1] + 1) {
            cnt++;
        }
        else {
            cnt = 1;
        }

        if(cnt > maxLen) {
            maxLen = cnt;
        }
    }

    return maxLen;
}

int main() {

    vector<int> arr = {0,3,7,2,5,8,4,6,0,1};

    int ans = longestConsecutive(arr);

    cout << ans << endl;

    return 0;
}