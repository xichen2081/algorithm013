/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start

class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[26] = {0};
        int lens = s.size(), lent = t.size();
        if(lens != lent) return false;
        for(int i = 0; i < lens; i++) a[s[i]-'a']++;
        for(int i = 0; i < lens; i++) {
            if(--a[t[i]-'a'] < 0) return false;
        }
        return true;
    }
};
// @lc code=end

