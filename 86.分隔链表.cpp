/*
 * @lc app=leetcode.cn id=86 lang=cpp
 *
 * [86] 分隔链表
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
    ListNode* partition(ListNode* head, int x) {
        if(!head)return nullptr;
        ListNode *greater = new ListNode();
        ListNode *less = new ListNode();
        ListNode *dummy = less,*p2 = greater;
        while(head)
        {
            if(head->val>=x)
            {
                greater->next = head;
                greater= greater->next;
            }
            else
            { 
                less->next = head;
                less= less->next;
            }
            ListNode *tmp = head->next;
            head->next = nullptr;
            head = tmp;
        }
        less->next = p2->next;
        return dummy->next;
    }
};
// @lc code=end

