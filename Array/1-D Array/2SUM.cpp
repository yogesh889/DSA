#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {2, 7, 11, 15};

    unordered_map<int, int> mp;

    vector<vector<int>> vec;

    int target = 9;

    for(int i=0; i<arr.size(); i++){
        int complement = target - arr[i];
        if(mp.find(complement) != mp.end()){
            vec.push_back({mp[arr[i]], i});
            // cout<<mp[arr[i]]<<" "<<i<<endl;
        }
        mp[arr[i]] = i;
    }

    for(auto x : vec) {
        for(auto y : x)
            cout << y << " ";
        cout << endl;
    }

    return 0;
}