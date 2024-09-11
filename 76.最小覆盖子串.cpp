/*
 * @lc app=leetcode.cn id=76 lang=cpp
 *
 * [76] 最小覆盖子串
 */

// @lc code=start
class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> needs,windows;
        for(auto ch : t)
        {
            needs[ch]++;
        }
        auto start = 0;
        auto valid = 0 , left = 0,right = 0,length= __INT32_MAX__;
        while(right<s.size())
        {
            auto ch = s[right];
            right++;
            if( needs.count(ch) )
            {
                windows[ch]++;
                if(windows[ch]== needs[ch])
                    valid++;
            }

            while(valid == needs.size())
            {
                auto new_len = right - left;
                if(new_len < length)
                {
                    start = left;
                    length = new_len;
                }
                
                auto out = s[left];
                left++;
                if(needs.count(out))
                {
                    if(windows[out] == needs[out])
                        valid--;            
                    windows[out]--;
                }
            }           
        }

        if(length == __INT32_MAX__) return "";
        return s.substr(start,length);
    }
};
// @lc code=end

