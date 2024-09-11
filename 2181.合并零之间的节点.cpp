/*
 * @lc app=leetcode.cn id=2181 lang=cpp
 *
 * [2181] 合并零之间的节点
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
    ListNode* mergeNodes(ListNode* head) {
        int total = 0;
        ListNode *tail = head;
        for(ListNode * cur = head->next;cur->next;cur=cur->next)
        {
            if(cur->val)
            {
                tail->val+=cur->val;
            }
            else
            {                
                tail = tail->next;
                tail->val = 0;
            }   
        }
        tail->next = nullptr;
        return head;
    }
};
// @lc code=end

