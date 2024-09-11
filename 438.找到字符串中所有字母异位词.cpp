/*
 * @lc app=leetcode.cn id=438 lang=cpp
 *
 * [438] 找到字符串中所有字母异位词
 */

// @lc code=start
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>res;
        unordered_map<char,int>needs,windows;
        for(auto ch:p)
        {
            needs[ch]++;
        }
        int left = 0,right = 0;
        int valied = 0;
        while(right < s.size())
        {
            auto ch_in = s[right++];
            if(needs.count(ch_in))
            {
                windows[ch_in]++;
                if(windows[ch_in] == needs[ch_in])
                {
                    valied++;
                }
            }

            while(right - left >= p.size())
            {
                if(valied==needs.size())
                {
                    res.emplace_back(left);
                }
                auto ch_out = s[left];
                left++;
                if(needs.count(ch_out))
                {
                    if(windows[ch_out] == needs[ch_out])
                    {
                        valied--;
                    }
                    windows[ch_out]--;
                }
            }
        }
        return res;
    }
};
// @lc code=end

