/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
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
    ListNode * trave(ListNode * head)
    {
        ListNode * dummy = new ListNode(-1);
        dummy->next = head;
        ListNode * cur = head;
        while(cur->next)
        {
            if(cur->next->val == cur->val)
            {
                cur->next = cur->next->next;
            }
            else
                cur = cur->next;
        }
        return dummy->next;
    }

    ListNode * fastslow(ListNode * head)
    {
        ListNode *p1 = head,*p2=head;
        while(p2)
        {
            if(p2->val != p1->val)
            {
                p1->next=p2;
                p1=p2;
            }
            p2=p2->next;
        }
        p1->next=nullptr;
        return head;
    }

    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr)return nullptr;
        return trave(head);
    }
};
// @lc code=end

