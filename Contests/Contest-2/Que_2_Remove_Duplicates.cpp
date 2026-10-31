#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public: 
    string RemoveDuplicates(string str) {
        stack<char> st;
        for (char ch : str) {
            if (!st.empty() && st.top() == ch) {
                st.pop();
            } else {
                st.push(ch);
            }
        }

        // Pop elements from stack
        string result = "";
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }

        // IMPORTANT: Stack pops in reverse (LIFO) order,
        // so reverse to restore original character sequence:
        reverse(result.begin(), result.end());
        return result;
    }

    // Alternative optimal O(N) time & O(1) extra space using string directly as stack:
    string RemoveDuplicatesOptimal(string str) {
        string res = "";
        for (char ch : str) {
            if (!res.empty() && res.back() == ch) {
                res.pop_back();
            } else {
                res.push_back(ch);
            }
        }
        return res;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution obj;
    string str;
    if (cin >> str) {
        cout << obj.RemoveDuplicates(str) << "\n";
    }
    return 0;
}
