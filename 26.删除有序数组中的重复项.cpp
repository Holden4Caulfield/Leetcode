/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        size_t slow = 0 , fast = 0;
        for(;fast < nums.size();++fast)
        {
            if(nums[slow] != nums[fast])
            {
                slow ++;
                nums[slow]=nums[fast];
            }
        }
        return slow+1;
    }
};
// @lc code=end

