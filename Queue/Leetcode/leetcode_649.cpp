#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> radiant;
        queue<int> dire;

        int n = senate.size();

        // Store indices of senators
        for (int i = 0; i < n; i++) {
            if (senate[i] == 'R')
                radiant.push(i);
            else
                dire.push(i);
        }

        // Simulate rounds
        while (!radiant.empty() && !dire.empty()) {
            int r = radiant.front();
            int d = dire.front();

            radiant.pop();
            dire.pop();

            if (r < d) {
                // Radiant acts first and bans Dire
                radiant.push(r + n);
            } else {
                // Dire acts first and bans Radiant
                dire.push(d + n);
            }
        }

        return radiant.empty() ? "Dire" : "Radiant";
    }
};

int main() {
    Solution obj;

    string senate = "RDDRDR";

    cout << "Senate: " << senate << endl;
    cout << "Winner: " << obj.predictPartyVictory(senate) << endl;

    return 0;
}


// | Round | Radiant Front | Dire Front | Winner  | Reinserted | Radiant Queue After | Dire Queue After |
// | ----- | ------------- | ---------- | ------- | ---------- | ------------------- | ---------------- |
// | Start | -             | -          | -       | -          | [0,3,5]             | [1,2,4]          |
// | 1     | 0             | 1          | Radiant | 0+6 = 6    | [3,5,6]             | [2,4]            |
// | 2     | 3             | 2          | Dire    | 2+6 = 8    | [5,6]               | [4,8]            |
// | 3     | 5             | 4          | Dire    | 4+6 = 10   | [6]                 | [8,10]           |
// | 4     | 6             | 8          | Radiant | 6+6 = 12   | [12]                | [10]             |
// | 5     | 12            | 10         | Dire    | 10+6 = 16  | []                  | [16]             |
