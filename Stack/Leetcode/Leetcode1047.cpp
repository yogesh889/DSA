#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
        string RemoveDuplicates(string str){
            string result;
            vector<char> ans;
            stack<char> st;
            for(auto ch: str){
                if(!st.empty() && st.top() == ch){
                    st.pop();
                }else{
                    st.push(ch);
                }
            }
            while(!st.empty()){
                ans.push_back(st.top());
                st.pop();
            }
            for(char ch: ans){
                result += ch;
            }
            return result;
        }
};

int main(){

    Solution obj;

    string str = "abbaca";

    cout<<obj.RemoveDuplicates(str)<<" ";


    return 0;
}
