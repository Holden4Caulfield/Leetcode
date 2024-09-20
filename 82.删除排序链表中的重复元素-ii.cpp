/*
 * @lc app=leetcode.cn id=82 lang=cpp
 *
 * [82] 删除排序链表中的重复元素 II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * dummy = new ListNode(-100);
        dummy->next = head;
        ListNode * cur = dummy;
        while(cur->next && cur->next->next)
        {
            if(cur->next->val == cur->next->next->val)
            {
                int val = cur->next->val;
                while(cur->next && cur->next->val == val)
                {
                    cur->next = cur->next->next;
                }
            }
            else
                cur = cur->next;
        }
        return dummy->next;

    }
};
// @lc code=end

