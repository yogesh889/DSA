#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
        int kadane(vector<int> &arr){
            int currSum = arr[0];
            int maxV = arr[0];

            for(int i=1; i<arr.size(); i++){
                currSum = max(arr[i], currSum + arr[i]);
                maxV = max(maxV, currSum);
            }
            return maxV;
        }
};

int main(){

    Solution obj;

    vector<int> vec = {2, 3, 5, -2, 7, -4};
    
    cout<<obj.kadane(vec);

    return 0;
}