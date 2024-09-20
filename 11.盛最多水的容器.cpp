/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0 ,r = height.size() - 1;
        int max_area = 0;
        while(l < r)
        {
            auto cur_area = min(height[l],height[r]) * (r-l);
            max_area = max(cur_area,max_area);
            if(height[l] > height[r])r--;
            else
                l++;
        }
        return max_area;

    }
};
// @lc code=end

