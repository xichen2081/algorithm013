/*
 * @lc app=leetcode.cn id=455 lang=cpp
 *
 * [455] 分发饼干
 */

// @lc code=start
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end(), greater<int>());
        sort(s.begin(), s.end(), greater<int>());
        int gindex = 0, sindex = 0, res = 0;
        while(gindex < g.size() && sindex < s.size()) {
            if(g[gindex] > s[sindex]) gindex++;
            else {
                gindex++;
                sindex++;
                res++;
            }   
        }
        
        return res;
    }
};
// @lc code=end

