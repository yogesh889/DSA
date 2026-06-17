//This is monotonic decreasing queue;

#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    deque<int> dq;
    vector<int> ans;

    for(int i=0; i<nums.size(); i++){
        while(!dq.empty() && dq.front() <= i-k){
            dq.pop_front();
        }
        while(!dq.empty() && nums[i] >= nums[dq.back()]){
            dq.pop_back();
        }

        dq.push_back(i);

        if(i>=k-1){
            ans.push_back(dq.front());
        }
        
    }

    for(auto x: ans){
        cout<<nums[x]<<" ";
    }
    return 0;
}


// | i | nums[i] | Remove Out of Window     | Remove Smaller From Back     | Deque (indices) | Deque (values) | Window Max |
// | - | ------- | ------------------------ | ---------------------------- | --------------- | -------------- | ---------- |
// | 0 | 1       | -                        | -                            | [0]             | [1]            | -          |
// | 1 | 3       | -                        | remove 0 (1 < 3)             | [1]             | [3]            | -          |
// | 2 | -1      | -                        | none                         | [1,2]           | [3,-1]         | 3          |
// | 3 | -3      | -                        | none                         | [1,2,3]         | [3,-1,-3]      | 3          |
// | 4 | 5       | remove 1 (out of window) | remove 3 (-3), remove 2 (-1) | [4]             | [5]            | 5          |
// | 5 | 3       | -                        | none                         | [4,5]           | [5,3]          | 5          |
// | 6 | 6       | -                        | remove 5 (3), remove 4 (5)   | [6]             | [6]            | 6          |
// | 7 | 7       | -                        | remove 6 (6)                 | [7]             | [7]            | 7          |
