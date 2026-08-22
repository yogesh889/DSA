#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    char rot13(char c) {
        return char('a' + (c - 'a' + 13) % 26);
    }

    int minOperations(string word1, string word2) {

        int n = word1.size();
        int m = word2.size();

        // dp[i][j][p]
        // p = 0 -> suffix of word1 is normal
        // p = 1 -> suffix of word1 is ROT13 transformed
        vector<vector<array<int, 2>>> dp(
            n + 1,
            vector<array<int, 2>>(m + 1)
        );

        // Base case: word1 exhausted
        for (int j = 0; j <= m; j++) {
            dp[n][j][0] = m - j;
            dp[n][j][1] = m - j;
        }

        // Base case: word2 exhausted
        for (int i = 0; i <= n; i++) {
            dp[i][m][0] = n - i;
            dp[i][m][1] = n - i;
        }

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {

                for (int parity = 0; parity <= 1; parity++) {

                    char c1 = word1[i];

                    if (parity == 1) {
                        c1 = rot13(c1);
                    }

                    char c2 = word2[j];

                    int ans = INT_MAX;

                    // Match
                    if (c1 == c2) {
                        ans = min(ans,
                                  dp[i + 1][j + 1][parity]);
                    }

                    // Replace
                    ans = min(ans,
                              1 + dp[i + 1][j + 1][parity]);

                    // Delete
                    ans = min(ans,
                              1 + dp[i + 1][j][parity ^ 1]);

                    // Insert
                    ans = min(ans,
                              1 + dp[i][j + 1][parity ^ 1]);

                    dp[i][j][parity] = ans;
                }
            }
        }

        return dp[0][0][0];
    }
};