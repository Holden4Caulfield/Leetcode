/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
public:

    string palindrome(string s ,int l,int r)
    {
        while(l >= 0 && r < s.size()
            && s[l] == s[r])
            {
                --l;++r;
            }
        return s.substr(l+1,r-l-1);
    }

    string longestPalindrome(string s) {
        string res;
        for(auto i = 0;i<s.size();++i)
        {
            string res1=palindrome(s,i,i);
            string res2=palindrome(s,i,i+1);
            string restmp = res1.size()>res2.size()? res1:res2;
            res = res.size()>=restmp.size()?res:restmp;
        }
        return res;
    }
};
// @lc code=end

