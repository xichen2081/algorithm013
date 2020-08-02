/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1,i = 0;
        if(nums.size() == 0 ) return 0;
        while(i < nums.size()) {
            while(j < nums.size()) {
                if(nums[j] == nums[i]) j++;
                else break;
            }
            if(j < nums.size()) {
                nums[++i] = nums[j++];
            }
            else break;
        }
        
        return i+1;
    }
};
// @lc code=end

