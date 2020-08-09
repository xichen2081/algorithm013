/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string,vector<string>> m;
        string temp;
        int len = strs.size();
        for(int i = 0;i < len;i++ ) {
            temp = strs[i];
            sort(temp.begin(),temp.end());
            m[temp].push_back(strs[i]);
        }
        for(auto n : m) {
            ans.push_back(n.second);
        }
        return ans;
    }
};
// @lc code=end

