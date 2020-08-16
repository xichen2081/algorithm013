/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> res;
    void dfs(vector<int>& nums, int n, int start) {
        if(start == n) {
            res.push_back(nums);
            return;
        }
        for(int i = start; i < n; i++) {
            swap(nums[start], nums[i]);
            dfs(nums, n, start + 1);
            swap(nums[start],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        if(nums.size() == 0) return res;
        dfs(nums, nums.size(), 0);
        return res;
    }
};
// @lc code=end

