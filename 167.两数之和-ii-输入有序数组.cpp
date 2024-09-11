/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int p2 = numbers.size()-1;
        int p1 = 0;
        while(p2>p1)
        {
            int sum = numbers[p2]+numbers[p1];
            if(sum == target )return {p1+1,p2+1};
            if(sum > target)
            {
                p2--;
            }
            else
                p1++;
        }
        return {};
    }
};
// @lc code=end

