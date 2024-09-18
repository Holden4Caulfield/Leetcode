/*
 * @lc app=leetcode.cn id=219 lang=cpp
 *
 * [219] 存在重复元素 II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int>dict;
        for(int i = 0 ; i < nums.size(); ++ i)
        {
            auto num = nums[i];
            if(dict.count(num) && i - dict[num] <= k)
                return true;
            dict[num] = i;
        }
        return false;
    }
};
// @lc code=end

