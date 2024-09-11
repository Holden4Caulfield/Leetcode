/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        size_t slow = 0,fast = 0;
        for(;fast<nums.size();fast++)
        {
            if(nums[fast] != 0)
            {
                nums[slow] = nums[fast];
                slow++;
            }
        }
        for(;slow<nums.size();++slow)
        {
            nums[slow] = 0;
        }
    }
};
// @lc code=end

