/*
 * @lc app=leetcode.cn id=1438 lang=cpp
 *
 * [1438] 绝对差不超过限制的最长连续子数组
 */

// @lc code=start
class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        map<int,int> counter;
        int right = 0 ,left = 0;
        int res = 0;
        while(right < nums.size())
        {
            auto num_in = nums[right++];
            counter[num_in] ++ ;
            while( counter.rbegin()->first - counter.begin()->first > limit)
            {
                auto num_out = nums[left++];
                counter[num_out]--;
                if(counter[num_out] == 0)
                {
                    counter.erase(num_out);
                }
            }
            res = max(res,right - left);
        }
        return res;
    }
};
// @lc code=end

