/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int r = 0 ,l = 0;
        int minnum = __INT32_MAX__;int sum = 0;
        while(r < nums.size())
        {
            auto numin = nums[r++];
            sum += numin;
            while(sum >= target)
            {
                minnum = min(minnum,r-l);
                
                auto numout = nums[l++];     
                           
                sum -= numout;
            }
            
        }

        return minnum == __INT32_MAX__ ? 0 : minnum;
    }
};
// @lc code=end

