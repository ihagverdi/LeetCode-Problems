class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int n = s.length();
        unordered_set<string> set(dictionary.begin(), dictionary.end());
        vector<int> dp(n+1, 51); // 51 is the max value
        dp[n] = 0;

        for (int i = n-1; i>=0; --i) {
            dp[i] = dp[i+1] + 1; //may skip the current char

            for (int len = 1; len <= n - i; ++len) {
                if (set.find(s.substr(i, len)) != set.end()) {
                    dp[i] = min(dp[i], dp[i+len]);
                }
            }
        }
        return dp[0];
    }
};



//https://leetcode.com/problems/extra-characters-in-a-string/submissions/1399975542
