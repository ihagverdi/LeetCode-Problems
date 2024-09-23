class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        int cnt = s.length();
        while (i < s.length() && j < t.length()) {
            if (t[j] == s[i]) {
                ++i;
                --cnt;
            }
            ++j;

            if (!cnt) return true;
        }
        return (cnt == 0 ? true : false);
    }
    //Time: O(n) where n is the length of string t.
    //Space: O(1). No additional data structures used. 
};
