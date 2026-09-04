#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
    vector<int> threeSum(vector<int>& numbers, int target){

    vector<int> temp;
    for(int k=0; k<numbers.size()-2; k++){
        int i = k+1; 
        int j = numbers.size()-1;

        while(i<j){
            int sum = numbers[i] + numbers[j] + numbers[k];
            if(sum == target){
                temp.push_back(k+1);
                temp.push_back(i+1);
                temp.push_back(j+1);
                break;
            }
            if(target > sum){
                i++;
            }else{
                j--;
            }
        }
    }
        
    return temp;
}

};

int main(){

    Solution obj;

    vector<int> arr = {0, 2, 4, 5, 9};

    int target = 16;

    vector<int> ans = obj.threeSum(arr, target);

    for(int x: ans){
        cout<<x<<" ";
    }

    // for(int i=0; i<2; i++){
    //     cout<<ans[i]<<" ";
    // }
    
    return 0;
}