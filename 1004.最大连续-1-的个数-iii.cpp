/*
 * @lc app=leetcode.cn id=1004 lang=cpp
 *
 * [1004] 最大连续1的个数 III
 */

// @lc code=start
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0,right = 0;
        int max_len = 0,start = 0;
        int zeros = 0;
        while(right < nums.size())
        {
            int num_in = nums[right++];
            if(num_in == 0)
            {
               zeros ++ ;
            }

            while( zeros > k )
            {
                auto num_out = nums[left];
                left ++;
                if(num_out == 0)
                {
                    zeros -- ;
                }
            }

            if( right - left > max_len)
            {
                max_len = right - left;
                start = left;
            }
        }
        return max_len ;
    }
};
// @lc code=end

