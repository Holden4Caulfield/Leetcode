/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>windows;
        auto left = 0 ,right = 0;
        int max_len = 0;
        while(right < s.size())
        {
            auto chin = s[right++];
            windows[chin]++;            
            while(windows[chin] > 1)
            {
                auto chout = s[left++];
                windows[chout]--;
            }
            max_len = std::max(right-left,max_len);
        }
        return max_len ;
    }
};
// @lc code=end

