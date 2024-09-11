/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        size_t slow=0,fast=0;
        for(;fast<nums.size();++fast)
        {
            if(nums[fast]!=val)
            {
                nums[slow] = nums[fast];
                slow++;
            }
        }
        return slow;
    }
};
// @lc code=end

