/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
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
    ListNode * findnth(ListNode *head,int nth)
    {
        ListNode *fast = head,*slow=head;
        while(nth-- && fast!= nullptr)
        {
            fast=fast->next;
        }
        while(fast)
        {
            fast= fast->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *nthnode = findnth(dummy,n+1);
        nthnode->next = nthnode->next->next;
        return dummy->next;
    }
};
// @lc code=end

