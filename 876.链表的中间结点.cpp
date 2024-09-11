/*
 * @lc app=leetcode.cn id=876 lang=cpp
 *
 * [876] 链表的中间结点
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
// 1 2 3 4 5 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *dummy = new ListNode();
        dummy->next = head;
        ListNode *fast = head,*slow=head;
        while(fast->next)
        {
            slow = slow->next;
            fast=fast->next;
            if(fast->next)
            {
                fast=fast->next;
            }
            else
                return slow;
        }
        return slow;
    }
};
// @lc code=end

