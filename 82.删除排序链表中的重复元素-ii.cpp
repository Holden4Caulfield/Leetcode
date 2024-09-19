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
        ListNode *prenode = dummy;
        prenode->next = head;
        ListNode * cur = head;
        while(cur && cur->next)
        {
            if(cur->val == cur->next->val)
            {
                int v = cur->val;
                while(cur && cur->val == v)
                {
                    cur = cur->next;
                }
                prenode->next = cur;
            }
            else
            {
                prenode = cur;
                cur=cur->next;
            }
        }
        return dummy->next;

    }
};
// @lc code=end

