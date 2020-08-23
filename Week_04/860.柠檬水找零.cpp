/*
 * @lc app=leetcode.cn id=860 lang=cpp
 *
 * [860] 柠檬水找零
 */

// @lc code=start
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0, res = 0;
        for(int i = 0; i < bills.size(); i++) {
            if(bills[i] == 5) five++;
            else if(bills[i] == 10) {
                five--;
                ten++;
            }
            else {
                if(five > 0 && ten > 0) {
                    five--;
                    ten--;
                }
                else if(five >= 3 && ten == 0) {
                    five -= 3;
                }
                else return false;
            }
            if(five < 0 || ten < 0) return false;
        }
        return true;
    }
};
// @lc code=end

