/*
 * @lc app=leetcode.cn id=47 lang=cpp
 *
 * [47] 全排列 II
 */

// @lc code=start
class Solution {
public:
    set<vector<int>> res;
    vector<vector<int>> ans;
    void dfs(vector<int>& nums, int n, int start) {
        if(start == n) {
            res.insert(nums);
            return;
        }
        for(int i = start; i < n; i++) {
            swap(nums[start], nums[i]);
            dfs(nums, n, start + 1);
            swap(nums[start],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        if(nums.size() == 0) return ans;
        dfs(nums, nums.size(), 0);
        set<vector<int>>::iterator it;
        for(it = res.begin(); it != res.end(); it++) {
            ans.push_back(*it);
        }
        return ans;
    }
};
// @lc code=end

