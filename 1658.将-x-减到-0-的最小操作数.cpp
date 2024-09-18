/*
 * @lc app=leetcode.cn id=1658 lang=cpp
 *
 * [1658] 将 x 减到 0 的最小操作数
 */

// @lc code=start
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int accu = accumulate(nums.begin(),nums.end(),0);
        auto target = accu - x;
        if(target < 0 )return -1;
        int l = 0 , r = 0 ,maxlen = -1 , start = 0;
        auto cur_accu = 0;
        while(r < nums.size())
        {
            auto numin = nums[r++];
            cur_accu += numin;
            while(cur_accu > target)
                cur_accu -= nums[l++];
            if(cur_accu == target)
            {
                maxlen = max(maxlen,r-l);
            }
        }
        return maxlen >=0 ? nums.size()-maxlen : -1;
    }
};
// @lc code=end

