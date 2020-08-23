/*
 * @lc app=leetcode.cn id=874 lang=cpp
 *
 * [874] 模拟行走机器人
 */

// @lc code=start
class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int dx[4] = {0, 1, 0, -1};
        int dy[4] = {1, 0, -1, 0};
        int x = 0, y = 0, di = 0;

       set<pair<int, int>> obstacleSet;
        for (vector<int> obstacle: obstacles)
            obstacleSet.insert(make_pair(obstacle[0], obstacle[1]));

        int ans = 0;
        for (int cmd: commands) {
            if (cmd == -2)
                di = (di + 3) % 4;
            else if (cmd == -1)
                di = (di + 1) % 4;
            else {
                for (int k = 0; k < cmd; ++k) {
                    x += dx[di];
                    y += dy[di];
                    if (obstacleSet.find(make_pair(x, y)) != obstacleSet.end()) {
                        x -= dx[di];
                        y -= dy[di];
                        break;
                    }
                    else ans = max(ans, x*x + y*y);
                }
            }
        }

        return ans;
    }
};

// @lc code=end

