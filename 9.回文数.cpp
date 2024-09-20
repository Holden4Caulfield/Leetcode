/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        stack<int> stack_in;
        if( x < 0 )return false;
        int cnt = 0;
        while(x > 0 )
        {
            stack_in.push(x%10);
            x = x/10;
            cnt ++;
        }
        int pop_cnt = cnt /2;
        stack<int> stack_pop;
        while(pop_cnt > 0)
        {
            pop_cnt--;
            stack_pop.push(stack_in.top());
            stack_in.pop();
        }
        if(cnt % 2 ==1)
        {
            stack_in.pop();
        }

        while(!stack_in.empty())
        {
            if(stack_in.top()!=stack_pop.top())
            {
                return false;
            }
            stack_in.pop();
            stack_pop.pop();
        }
        return true;

    }
};
// @lc code=end

