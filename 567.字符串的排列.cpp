/*
 * @lc app=leetcode.cn id=567 lang=cpp
 *
 * [567] 字符串的排列
 */

// @lc code=start
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>needs,windows;
        for(auto ch : s1)
        {
            needs[ch]++;
        }
        auto vailed = 0,left = 0,right = 0;
        while (right < s2.size())
        {
            auto in = s2[right];
            right++;
            if(needs.count(in))
            {
                windows[in]++;
                if(windows[in] == needs[in])
                {
                    vailed++;
                }
            }

            while(right - left >= s1.size())
            {
                if(vailed == needs.size())return true;
                auto out = s2[left];
                left++;
                if(needs.count(out))
                {
                    if(windows[out] == needs[out])
                        vailed--;
                    windows[out]--;    
                }
            }
        }
        return false;
        
    }
};
// @lc code=end

